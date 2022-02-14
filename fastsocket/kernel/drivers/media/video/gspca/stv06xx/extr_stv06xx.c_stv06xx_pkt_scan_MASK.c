
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; int to_skip; } ;
struct gspca_dev {int width; int last_packet_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_7,
   u8 *VAR_8,
   int VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_7;

 FUNC_0(VAR_3, "Packet of length %d arrived", VAR_9);



 while (VAR_9) {
  int VAR_11, VAR_12;

  if (VAR_9 < 4) {
   FUNC_0(VAR_3, "Packet is smaller than 4 bytes");
   return;
  }


  VAR_11 = (VAR_8[0] << 8) | VAR_8[1];


  VAR_12 = (VAR_8[2] << 8) | VAR_8[3];
  FUNC_0(VAR_3, "Chunk id: %x, length: %d", VAR_11, VAR_12);

  VAR_8 += 4;
  VAR_9 -= 4;

  if (VAR_9 < VAR_12) {
   FUNC_0(VAR_2, "URB packet length is smaller"
    " than the specified chunk length");
   VAR_7->last_packet_type = VAR_1;
   return;
  }


  if (VAR_10->bridge == VAR_0 && (VAR_11 & 0xff00) == 0x0200)
   goto frame_data;

  switch (VAR_11) {
  case 0x0200:
  case 0x4200:
frame_data:
   FUNC_0(VAR_3, "Frame data packet detected");

   if (VAR_10->to_skip) {
    int VAR_13 = (VAR_10->to_skip < VAR_12) ?
         VAR_10->to_skip : VAR_12;
    VAR_8 += VAR_13;
    VAR_9 -= VAR_13;
    VAR_12 -= VAR_13;
    VAR_10->to_skip -= VAR_13;
   }

   FUNC_1(VAR_7, VAR_5,
     VAR_8, VAR_12);
   break;

  case 0x8001:
  case 0x8005:
  case 0xc001:
  case 0xc005:
   FUNC_0(VAR_3, "Starting new frame");


   FUNC_1(VAR_7, VAR_4,
     ((void*)0), 0);

   if (VAR_10->bridge == VAR_0)
    VAR_10->to_skip = VAR_7->width * 4;

   if (VAR_12)
    FUNC_0(VAR_2, "Chunk length is "
           "non-zero on a SOF");
   break;

  case 0x8002:
  case 0x8006:
  case 0xc002:
   FUNC_0(VAR_3, "End of frame detected");


   FUNC_1(VAR_7, VAR_6,
     ((void*)0), 0);

   if (VAR_12)
    FUNC_0(VAR_2, "Chunk length is "
           "non-zero on a EOF");
   break;

  case 0x0005:
   FUNC_0(VAR_3, "Chunk 0x005 detected");



   break;

  case 0x0100:
   FUNC_0(VAR_3, "Chunk 0x0100 detected");


   break;
  case 0x42ff:
   FUNC_0(VAR_3, "Chunk 0x42ff detected");

   break;
  default:
   FUNC_0(VAR_3, "Unknown chunk 0x%04x detected", VAR_11);

  }
  VAR_8 += VAR_12;
  VAR_9 -= VAR_12;
 }
}

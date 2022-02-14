
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {long paletteBits; } ;
struct usbvideo_frame {int dummy; } ;


 int FUNC_0 (struct usbvideo_frame*,int,int,int,int,int) ;
 long VAR_0 ;

__attribute__((used)) static void FUNC_1(struct uvd *VAR_1, struct usbvideo_frame *VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 static const unsigned short VAR_6[16] = {
  0xF6DE,
  0x2492,
  0xE7CE,
  0xE79E,
  0xB792,
  0xF39E,
  0xF3DE,
  0xF492,
  0xF7DE,
  0xF79E,
  0x77DA,
  0xD75C,
  0xF24E,
  0xD6DC,
  0xF34E,
  0xF348
 };
 unsigned short VAR_7;
 int VAR_8, VAR_9;

 if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return;

 if (VAR_5 >= '0' && VAR_5 <= '9')
  VAR_5 -= '0';
 else if (VAR_5 >= 'A' && VAR_5 <= 'F')
  VAR_5 = 10 + (VAR_5 - 'A');
 else if (VAR_5 >= 'a' && VAR_5 <= 'f')
  VAR_5 = 10 + (VAR_5 - 'a');
 else
  return;
 VAR_7 = VAR_6[VAR_5];

 for (VAR_9=0; VAR_9 < 5; VAR_9++) {
  for (VAR_8=0; VAR_8 < 3; VAR_8++) {
   if (VAR_7 & 0x8000) {
    if (VAR_1->paletteBits & (1L << VAR_0)) {
              FUNC_0(VAR_2, VAR_3+VAR_8, VAR_4+VAR_9, 0xFF, 0xFF, 0xFF);
    }
   }
   VAR_7 = VAR_7 << 1;
  }
 }
}

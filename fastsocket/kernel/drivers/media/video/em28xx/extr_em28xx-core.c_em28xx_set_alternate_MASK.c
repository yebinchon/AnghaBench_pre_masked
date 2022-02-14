
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int alt; int width; int num_alt; int height; unsigned int* alt_max_pkt_size; unsigned int max_pkt_size; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (char*,unsigned int,int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

int FUNC_3(struct em28xx *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->alt;
 int VAR_4;
 unsigned int VAR_5 = VAR_1->width * 2 + 4;





 if (VAR_0 && VAR_0 < VAR_1->num_alt) {
  FUNC_0("alternate forced to %d\n", VAR_1->alt);
  VAR_1->alt = VAR_0;
  goto set_alt;
 }





 if (VAR_1->width * 2 * VAR_1->height > 720 * 240 * 2)
  VAR_5 *= 2;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_alt; VAR_4++) {

  if (VAR_1->alt_max_pkt_size[VAR_4] >= VAR_5) {
   VAR_1->alt = VAR_4;
   break;



  } else if (VAR_1->alt_max_pkt_size[VAR_4] >
      VAR_1->alt_max_pkt_size[VAR_1->alt])
   VAR_1->alt = VAR_4;
 }

set_alt:
 if (VAR_1->alt != VAR_3) {
  FUNC_0("minimum isoc packet size: %u (alt=%d)\n",
    VAR_5, VAR_1->alt);
  VAR_1->max_pkt_size = VAR_1->alt_max_pkt_size[VAR_1->alt];
  FUNC_0("setting alternate %d with wMaxPacketSize=%u\n",
          VAR_1->alt, VAR_1->max_pkt_size);
  VAR_2 = FUNC_2(VAR_1->udev, 0, VAR_1->alt);
  if (VAR_2 < 0) {
   FUNC_1("cannot change alternate number to %d (error=%i)\n",
     VAR_1->alt, VAR_2);
   return VAR_2;
  }
 }
 return 0;
}

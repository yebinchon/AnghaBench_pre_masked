
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_3__ {int type; int size; int* image; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;




 scalar_t__ FUNC_0 (unsigned int const) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(CARTRIDGE_image_t *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
 case 129: {
  unsigned int VAR_1;
  unsigned int const VAR_2 = VAR_0->size << 10;
  UBYTE *VAR_3 = (UBYTE *) FUNC_0(VAR_2);


  for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
   unsigned int const VAR_4 =
    (VAR_1 & 0x0001 ? 0x0040 : 0) |
    (VAR_1 & 0x0002 ? 0x0080 : 0) |
    (VAR_1 & 0x0004 ? 0x1000 : 0) |
    (VAR_1 & 0x0008 ? 0x8000 : 0) |
    (VAR_1 & 0x0010 ? 0x4000 : 0) |
    (VAR_1 & 0x0020 ? 0x2000 : 0) |
    (VAR_1 & 0x0040 ? 0x0100 : 0) |
    (VAR_1 & 0x0080 ? 0x0020 : 0) |
    (VAR_1 & 0x0100 ? 0x0010 : 0) |
    (VAR_1 & 0x0200 ? 0x0008 : 0) |
    (VAR_1 & 0x0400 ? 0x0001 : 0) |
    (VAR_1 & 0x0800 ? 0x0002 : 0) |
    (VAR_1 & 0x1000 ? 0x0004 : 0) |
    (VAR_1 & 0x2000 ? 0x0200 : 0) |
    (VAR_1 & 0x4000 ? 0x0800 : 0) |
    (VAR_1 & 0x8000 ? 0x0400 : 0) |
    (VAR_1 & 0x10000 ? 0x10000 : 0);

   UBYTE VAR_5 = VAR_0->image[VAR_4];
   VAR_3[VAR_1] =
     (VAR_5 & 0x01 ? 0x02 : 0) |
     (VAR_5 & 0x02 ? 0x08 : 0) |
     (VAR_5 & 0x04 ? 0x80 : 0) |
     (VAR_5 & 0x08 ? 0x40 : 0) |
     (VAR_5 & 0x10 ? 0x01 : 0) |
     (VAR_5 & 0x20 ? 0x04 : 0) |
     (VAR_5 & 0x40 ? 0x20 : 0) |
     (VAR_5 & 0x80 ? 0x10 : 0);
  }
  FUNC_1(VAR_0->image);
  VAR_0->image = VAR_3;
  break;
 }
 }
}

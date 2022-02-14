
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UWORD ;
typedef int UBYTE ;
struct TYPE_6__ {int state; int type; int* image; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;




 int VAR_0 ;






 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static UBYTE FUNC_3(CARTRIDGE_image_t *VAR_3, UWORD VAR_4, int VAR_5)
{
 int VAR_6 = VAR_3->state;
 int VAR_7 = VAR_6;







 if (!VAR_5 && FUNC_2(VAR_3, VAR_4, &VAR_7)) {


  if (VAR_7 != VAR_6) {
   VAR_3->state = VAR_7;
   if (VAR_3 == VAR_2)
    FUNC_1(VAR_6);
  }
 }


 switch (VAR_3->type) {
 case 135:


  return VAR_3->image[(VAR_3->state & 0xff00) | (VAR_4 & 0xff)];
 case 131:
 case 132:
 case 133:
 case 134:

  if ((VAR_4 & 0xe0) == 0x00)
   return VAR_3->state;
  break;
 case 130:
 case 129:
 case 128:
  switch (VAR_4) {
  case 0xd5a0:
   return VAR_3->state & 0x00ff;
  case 0xd5a1:
   return (VAR_3->state & 0x3f00) >> 8;
  case 0xd5a2:
   return (~VAR_3->state & 0x4000) >> 14;
  }
  break;
 }
 return 0xff;
}

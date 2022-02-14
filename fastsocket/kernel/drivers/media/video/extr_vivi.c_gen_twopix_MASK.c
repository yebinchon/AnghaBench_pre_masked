
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivi_fh {unsigned char** bars; TYPE_1__* fmt; } ;
struct TYPE_2__ {int fourcc; } ;
__attribute__((used)) static void FUNC_0(struct vivi_fh *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 unsigned char VAR_3, VAR_4, VAR_5;
 unsigned char *VAR_6;
 int VAR_7;

 VAR_3 = VAR_0->bars[VAR_2][0];
 VAR_4 = VAR_0->bars[VAR_2][1];
 VAR_5 = VAR_0->bars[VAR_2][2];

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = VAR_1 + VAR_7;

  switch (VAR_0->fmt->fourcc) {
  case 128:
   switch (VAR_7) {
   case 0:
   case 2:
    *VAR_6 = VAR_3;
    break;
   case 1:
    *VAR_6 = VAR_4;
    break;
   case 3:
    *VAR_6 = VAR_5;
    break;
   }
   break;
  case 129:
   switch (VAR_7) {
   case 1:
   case 3:
    *VAR_6 = VAR_3;
    break;
   case 0:
    *VAR_6 = VAR_4;
    break;
   case 2:
    *VAR_6 = VAR_5;
    break;
   }
   break;
  case 131:
   switch (VAR_7) {
   case 0:
   case 2:
    *VAR_6 = (VAR_4 << 5) | VAR_5;
    break;
   case 1:
   case 3:
    *VAR_6 = (VAR_3 << 3) | (VAR_4 >> 3);
    break;
   }
   break;
  case 130:
   switch (VAR_7) {
   case 0:
   case 2:
    *VAR_6 = (VAR_3 << 3) | (VAR_4 >> 3);
    break;
   case 1:
   case 3:
    *VAR_6 = (VAR_4 << 5) | VAR_5;
    break;
   }
   break;
  case 133:
   switch (VAR_7) {
   case 0:
   case 2:
    *VAR_6 = (VAR_4 << 5) | VAR_5;
    break;
   case 1:
   case 3:
    *VAR_6 = (VAR_3 << 2) | (VAR_4 >> 3);
    break;
   }
   break;
  case 132:
   switch (VAR_7) {
   case 0:
   case 2:
    *VAR_6 = (VAR_3 << 2) | (VAR_4 >> 3);
    break;
   case 1:
   case 3:
    *VAR_6 = (VAR_4 << 5) | VAR_5;
    break;
   }
   break;
  }
 }
}

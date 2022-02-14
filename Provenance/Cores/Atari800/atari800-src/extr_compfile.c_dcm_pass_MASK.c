
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sector_buf ;
typedef int UBYTE ;
struct TYPE_5__ {int current_sector; int sectorsize; } ;
typedef int FILE ;
typedef TYPE_1__ ATR_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int *) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_7(FILE *VAR_3, ATR_Info *VAR_4)
{
 UBYTE VAR_5[256];
 FUNC_4(VAR_5, 0, sizeof(VAR_5));
 for (;;) {

  int VAR_6;
  int VAR_7;
  VAR_6 = FUNC_2(VAR_3);
  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7 == 0x45)
   return VAR_2;
  if (VAR_6 < VAR_4->current_sector) {
   FUNC_0("Error: current sector is %d, next sector group at %d", VAR_4->current_sector, VAR_6);
   return VAR_1;
  }
  if (!FUNC_5(VAR_4, VAR_6))
   return VAR_1;
  for (;;) {

   int VAR_8;
   switch (VAR_7 & 0x7f) {
   case 0x41:
    VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == VAR_0)
     return VAR_1;
    do {
     int VAR_9 = FUNC_1(VAR_3);
     if (VAR_9 == VAR_0)
      return VAR_1;
     VAR_5[VAR_8] = (UBYTE) VAR_9;
    } while (VAR_8-- != 0);
    break;
   case 0x42:
    if (!FUNC_3(VAR_5 + 123, 5, VAR_3))
     return VAR_1;
    FUNC_4(VAR_5, VAR_5[123], 123);
    break;
   case 0x43:
    VAR_8 = 0;
    do {
     int VAR_10;
     int VAR_11;
     VAR_10 = FUNC_1(VAR_3);
     if (VAR_10 < VAR_8) {
      if (VAR_10 != 0)
       return VAR_1;
      VAR_10 = 256;
     }
     if (VAR_8 < VAR_10 && !FUNC_3(VAR_5 + VAR_8, VAR_10 - VAR_8, VAR_3))
      return VAR_1;
     if (VAR_10 >= VAR_4->sectorsize)
      break;
     VAR_8 = FUNC_1(VAR_3);
     if (VAR_8 < VAR_10) {
      if (VAR_8 != 0)
       return VAR_1;
      VAR_8 = 256;
     }
     VAR_11 = FUNC_1(VAR_3);
     if (VAR_11 == VAR_0)
      return VAR_1;
     FUNC_4(VAR_5 + VAR_10, VAR_11, VAR_8 - VAR_10);
    } while (VAR_8 < VAR_4->sectorsize);
    break;
   case 0x44:
    VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == VAR_0 || VAR_8 >= VAR_4->sectorsize)
     return VAR_1;
    if (!FUNC_3(VAR_5 + VAR_8, VAR_4->sectorsize - VAR_8, VAR_3))
     return VAR_1;
    break;
   case 0x46:
    break;
   case 0x47:
    if (!FUNC_3(VAR_5, VAR_4->sectorsize, VAR_3))
     return VAR_1;
    break;
   default:
    FUNC_0("Unrecognized sector coding type 0x%02X", VAR_7);
    return VAR_1;
   }
   if (!FUNC_6(VAR_4, VAR_5))
    return VAR_1;
   if (!(VAR_7 & 0x80))
    break;
   VAR_7 = FUNC_1(VAR_3);
   if (VAR_7 == 0x45)
    return VAR_2;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numSurfaces; int firstSurface; } ;
typedef TYPE_1__ lleaf_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_1(int VAR_5, int VAR_6)
{
 lleaf_t *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_2[VAR_5];

 for (VAR_8 = 0; VAR_8 < VAR_7->numSurfaces; VAR_8++)
 {
  if (VAR_1[VAR_7->firstSurface + VAR_8] == VAR_6)
   return;
 }
 for (VAR_8 = VAR_3; VAR_8 > VAR_7->firstSurface + VAR_7->numSurfaces; VAR_8--)
  VAR_1[VAR_8] = VAR_1[VAR_8-1];
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  if (VAR_8 == VAR_5)
   continue;
  if (VAR_2[VAR_8].firstSurface >= VAR_7->firstSurface + VAR_7->numSurfaces)
   VAR_2[VAR_8].firstSurface++;
 }
 VAR_1[VAR_7->firstSurface + VAR_7->numSurfaces] = VAR_6;
 VAR_7->numSurfaces++;
 VAR_3++;
 if (VAR_3 >= VAR_0)
  FUNC_0("MAX_MAP_LEAFFACES");
}

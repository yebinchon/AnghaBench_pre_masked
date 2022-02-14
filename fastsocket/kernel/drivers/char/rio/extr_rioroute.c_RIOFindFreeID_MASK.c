
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_info {int dummy; } ;
struct Map {int dummy; } ;
struct Host {TYPE_1__* Mapping; } ;
struct TYPE_2__ {int Flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rio_info*,struct Host*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(struct rio_info *VAR_4, struct Host *VAR_5, unsigned int * VAR_6, unsigned int * VAR_7)
{
 int VAR_8, VAR_9;






 *VAR_6 = VAR_0;
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_0;






 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  FUNC_2(VAR_1, "Scanning unit %d\n", VAR_8);



  if (VAR_5->Mapping[VAR_8].Flags == 0) {
   FUNC_2(VAR_1, "      This slot is empty.\n");



   if (*VAR_6 == VAR_0) {
    FUNC_2(VAR_1, "Make tentative entry for first unit %d\n", VAR_8);
    *VAR_6 = VAR_8;





    if (VAR_7 == ((void*)0))
     return 0;
   } else {



    FUNC_2(VAR_1, "Make tentative entry for second unit %d\n", VAR_8);
    *VAR_7 = VAR_8;
    return 0;
   }
  }
 }






 FUNC_2(VAR_1, "Starting to scan for tentative slots\n");
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (((VAR_5->Mapping[VAR_8].Flags & VAR_3) || (VAR_5->Mapping[VAR_8].Flags == 0)) && !(VAR_5->Mapping[VAR_8].Flags & VAR_2)) {
   FUNC_2(VAR_1, "    Slot %d looks promising.\n", VAR_8);

   if (VAR_8 == *VAR_6) {
    FUNC_2(VAR_1, "    No it isn't, its the 1st half\n");
    continue;
   }
   if (VAR_5->Mapping[VAR_8].Flags != 0)
    if (FUNC_0(VAR_4, VAR_5, VAR_8) != 0)
     continue;



   if (*VAR_6 == VAR_0) {
    FUNC_2(VAR_1, "Grab tentative entry for first unit %d\n", VAR_8);
    *VAR_6 = VAR_8;




    FUNC_1(&VAR_5->Mapping[VAR_8], 0, sizeof(struct Map));





    if (VAR_7 == ((void*)0))
     return 0;
   } else {



    FUNC_2(VAR_1, "Grab tentative/empty  entry for second unit %d\n", VAR_8);
    *VAR_7 = VAR_8;




    FUNC_1(&VAR_5->Mapping[VAR_8], 0, sizeof(struct Map));
    if (*VAR_6 > *VAR_7) {
     FUNC_2(VAR_1, "Swapping IDS %d %d\n", *VAR_6, *VAR_7);
     VAR_9 = *VAR_6;
     *VAR_6 = *VAR_7;
     *VAR_7 = VAR_9;
    }
    return 0;
   }
  }
 }





 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sony_nc_rfkill { ____Placeholder_sony_nc_rfkill } sony_nc_rfkill ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int,int*) ;
 int* VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3()
{
 enum sony_nc_rfkill VAR_3;
 int VAR_4;
 bool VAR_5;

 FUNC_2(0x124, 0x200, &VAR_4);
 VAR_5 = !(VAR_4 & 0x1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  int VAR_6 = VAR_1[VAR_3];

  if (!VAR_2[VAR_3])
   continue;

  if (VAR_5) {
   if (FUNC_0(VAR_2[VAR_3], 1)) {

   }
   continue;
  }

  FUNC_2(0x124, VAR_6, &VAR_4);
  FUNC_1(VAR_2[VAR_3],
      !(VAR_4 & 0xf), 0);
 }
}

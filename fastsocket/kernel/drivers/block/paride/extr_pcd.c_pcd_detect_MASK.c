
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int present; scalar_t__ disk; int pi; int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int*** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct pcd_unit* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct pcd_unit*,int,char*) ;
 scalar_t__ FUNC_1 (int ,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_5(void)
{
 char VAR_17[18];
 int VAR_18, VAR_19;
 struct pcd_unit *VAR_20;

 FUNC_3("%s: %s version %s, major %d, nice %d\n",
        VAR_11, VAR_11, VAR_7, VAR_10, VAR_12);

 VAR_18 = 0;
 if (VAR_15 == 0) {
  VAR_20 = VAR_13;
  if (FUNC_1(VAR_20->pi, 1, -1, -1, -1, -1, -1, VAR_14,
       VAR_8, VAR_16, VAR_20->name)) {
   if (!FUNC_0(VAR_20, -1, VAR_17) && VAR_20->disk) {
    VAR_20->present = 1;
    VAR_18++;
   } else
    FUNC_2(VAR_20->pi);
  }
 } else {
  for (VAR_19 = 0, VAR_20 = VAR_13; VAR_19 < VAR_6; VAR_19++, VAR_20++) {
   int *VAR_21 = *VAR_9[VAR_19];
   if (!VAR_21[VAR_3])
    continue;
   if (!FUNC_1(VAR_20->pi, 0, VAR_21[VAR_3], VAR_21[VAR_1],
         VAR_21[VAR_5], VAR_21[VAR_2], VAR_21[VAR_0],
         VAR_14, VAR_8, VAR_16, VAR_20->name))
    continue;
   if (!FUNC_0(VAR_20, VAR_21[VAR_4], VAR_17) && VAR_20->disk) {
    VAR_20->present = 1;
    VAR_18++;
   } else
    FUNC_2(VAR_20->pi);
  }
 }
 if (VAR_18)
  return 0;

 FUNC_3("%s: No CD-ROM drive found\n", VAR_11);
 for (VAR_19 = 0, VAR_20 = VAR_13; VAR_19 < VAR_6; VAR_19++, VAR_20++)
  FUNC_4(VAR_20->disk);
 return -1;
}

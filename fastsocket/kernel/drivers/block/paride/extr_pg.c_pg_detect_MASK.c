
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int present; int pi; int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pg* VAR_8 ;
 int*** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct pg*) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct pg *VAR_15 = &VAR_8[0];
 int VAR_16, VAR_17;

 FUNC_3("%s: %s version %s, major %d\n", VAR_11, VAR_11, VAR_6, VAR_10);

 VAR_16 = 0;
 if (VAR_12 == 0) {
  if (FUNC_1(VAR_15->pi, 1, -1, -1, -1, -1, -1, VAR_13,
       VAR_7, VAR_14, VAR_15->name)) {
   if (!FUNC_0(VAR_15)) {
    VAR_15->present = 1;
    VAR_16++;
   } else
    FUNC_2(VAR_15->pi);
  }

 } else
  for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++, VAR_15++) {
   int *VAR_18 = *VAR_9[VAR_17];
   if (!VAR_18[VAR_3])
    continue;
   if (FUNC_1(VAR_15->pi, 0, VAR_18[VAR_3], VAR_18[VAR_1],
        VAR_18[VAR_4], VAR_18[VAR_2], VAR_18[VAR_0],
        VAR_13, VAR_7, VAR_14, VAR_15->name)) {
    if (!FUNC_0(VAR_15)) {
     VAR_15->present = 1;
     VAR_16++;
    } else
     FUNC_2(VAR_15->pi);
   }
  }

 if (VAR_16)
  return 0;

 FUNC_3("%s: No ATAPI device detected\n", VAR_11);
 return -1;
}

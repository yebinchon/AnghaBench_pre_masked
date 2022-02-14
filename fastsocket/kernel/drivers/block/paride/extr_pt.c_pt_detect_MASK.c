
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_unit {int present; int drive; int * pi; int name; int * bufptr; scalar_t__ last_sense; scalar_t__ flags; int available; int pia; } ;


 int* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 int VAR_11 ;
 char* VAR_12 ;
 scalar_t__ FUNC_1 (int *,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;
 struct pt_unit* VAR_13 ;
 int FUNC_4 (struct pt_unit*) ;
 int VAR_14 ;
 int FUNC_5 (int ,int ,char*,char*,int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_6(void)
{
 struct pt_unit *VAR_16;
 int VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 FUNC_3("%s: %s version %s, major %d\n", VAR_12, VAR_12, VAR_10, VAR_11);

 VAR_17 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++) {
  struct pt_unit *VAR_20 = &VAR_13[VAR_19];
  VAR_20->pi = &VAR_20->pia;
  FUNC_0(&VAR_20->available, 1);
  VAR_20->flags = 0;
  VAR_20->last_sense = 0;
  VAR_20->present = 0;
  VAR_20->bufptr = ((void*)0);
  VAR_20->drive = VAR_0[VAR_5];
  FUNC_5(VAR_20->name, VAR_8, "%s%d", VAR_12, VAR_19);
  if (!VAR_0[VAR_4])
   continue;
  VAR_17++;
  if (FUNC_1(VAR_20->pi, 0, VAR_0[VAR_4], VAR_0[VAR_2], VAR_0[VAR_6],
       VAR_0[VAR_3], VAR_0[VAR_1], VAR_14, VAR_7,
       VAR_15, VAR_20->name)) {
   if (!FUNC_4(VAR_20)) {
    VAR_20->present = 1;
    VAR_18++;
   } else
    FUNC_2(VAR_20->pi);
  }
 }
 if (VAR_17 == 0) {
  VAR_16 = VAR_13;
  if (FUNC_1(VAR_16->pi, 1, -1, -1, -1, -1, -1, VAR_14,
       VAR_7, VAR_15, VAR_16->name)) {
   if (!FUNC_4(VAR_16)) {
    VAR_16->present = 1;
    VAR_18++;
   } else
    FUNC_2(VAR_16->pi);
  }

 }
 if (VAR_18)
  return 0;

 FUNC_3("%s: No ATAPI tape drive detected\n", VAR_12);
 return -1;
}

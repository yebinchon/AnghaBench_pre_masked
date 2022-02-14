
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int changed; int drive; int alt_geom; int standby; scalar_t__ gd; scalar_t__ capacity; int * pi; int name; scalar_t__ access; int pia; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int*** VAR_11 ;
 char* VAR_12 ;
 struct pd_unit* VAR_13 ;
 int FUNC_1 (struct pd_unit*) ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int *,int,int,int,int,int,int,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,char*,char*,char) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_16 = 0, VAR_17, VAR_18 = 0;
 struct pd_unit *VAR_19;

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  int *VAR_20 = *VAR_11[VAR_17];
  struct pd_unit *VAR_21 = VAR_13 + VAR_17;
  VAR_21->pi = &VAR_21->pia;
  VAR_21->access = 0;
  VAR_21->changed = 1;
  VAR_21->capacity = 0;
  VAR_21->drive = VAR_20[VAR_6];
  FUNC_6(VAR_21->name, VAR_8, "%s%c", VAR_12, 'a'+VAR_17);
  VAR_21->alt_geom = VAR_20[VAR_1];
  VAR_21->standby = VAR_20[VAR_5];
  if (VAR_20[VAR_4])
   VAR_18++;
 }

 if (VAR_18 == 0) {
  VAR_19 = VAR_13;
  if (FUNC_2(VAR_19->pi, 1, -1, -1, -1, -1, -1, VAR_14,
       VAR_10, VAR_15, VAR_19->name)) {
   FUNC_1(VAR_19);
   if (!VAR_19->gd)
    FUNC_3(VAR_19->pi);
  }

 } else {
  for (VAR_17 = 0, VAR_19 = VAR_13; VAR_17 < VAR_9; VAR_17++, VAR_19++) {
   int *VAR_22 = *VAR_11[VAR_17];
   if (!VAR_22[VAR_4])
    continue;
   if (FUNC_2(VAR_19->pi, 0, VAR_22[VAR_4], VAR_22[VAR_2],
         VAR_22[VAR_7], VAR_22[VAR_3], VAR_22[VAR_0],
         VAR_14, VAR_10, VAR_15, VAR_19->name)) {
    FUNC_1(VAR_19);
    if (!VAR_19->gd)
     FUNC_3(VAR_19->pi);
   }
  }
 }
 for (VAR_17 = 0, VAR_19 = VAR_13; VAR_17 < VAR_9; VAR_17++, VAR_19++) {
  if (VAR_19->gd) {
   FUNC_5(VAR_19->gd, VAR_19->capacity);
   FUNC_0(VAR_19->gd);
   VAR_16 = 1;
  }
 }
 if (!VAR_16)
  FUNC_4("%s: no valid drive found\n", VAR_12);
 return VAR_16;
}

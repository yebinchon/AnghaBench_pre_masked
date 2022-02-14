
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_0 (char) ;
 int* VAR_8 ;
 void* FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_9, int *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14;
 char *VAR_15;

 VAR_13 = 0;
 VAR_14 = 0;
 if (VAR_9) {
  VAR_12 = 0;
  while ((VAR_15 = FUNC_3(&VAR_9, ",")) != ((void*)0)) {
   if (!FUNC_2(VAR_15, "activity"))
    VAR_4 |= VAR_1;
   if (!FUNC_2(VAR_15, "display"))
    VAR_4 |= VAR_3;
   if (!FUNC_2(VAR_15, "adisplay"))
    VAR_4 |= VAR_2;
   if (!FUNC_2(VAR_15, "normal"))
    VAR_6 = 0;
   if (!FUNC_2(VAR_15, "ansi"))
    VAR_6 = 1;
   if (!FUNC_2(VAR_15, "fast"))
    VAR_5 = 0;
   if (!FUNC_2(VAR_15, "medium"))
    VAR_5 = 4;
   if (!FUNC_2(VAR_15, "slow"))
    VAR_5 = 7;
   if ((*VAR_15 == '-') || (FUNC_0(*VAR_15))) {
    if (!(VAR_12 % 2) && (VAR_13 < VAR_0))
     VAR_7[VAR_13++] = FUNC_1(VAR_15, ((void*)0), 0);
    if ((VAR_12 % 2) && (VAR_14 < VAR_0))
     VAR_8[VAR_14++] = FUNC_1(VAR_15, ((void*)0), 0);
    VAR_12++;
   }
  }
 } else if (VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_0 && 2 * VAR_11 + 2 < VAR_10[0]; VAR_11++) {
   VAR_7[VAR_11] = VAR_10[2 * VAR_11 + 2];
   VAR_8[VAR_11] = VAR_10[2 * VAR_11 + 2];
  }
 }
 return;
}

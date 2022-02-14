
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int * VAR_1 ;
 char* VAR_2 ;
 int * VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 char* VAR_9 ;
 int VAR_10 ;

void
FUNC_6(const char *VAR_11, int VAR_12)
{
 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_8, "%s: ", VAR_0);
  if (VAR_9 != ((void*)0)) {
   FUNC_2(VAR_8, "Stopped at file %s, line %d - ",
    VAR_9, VAR_10);
  }
  FUNC_2(VAR_8, "%s\n", VAR_11);
 }

 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_3);
  if (VAR_12 != 0) {
   FUNC_2(VAR_8, "%s: Removing %s due to error\n",
    VAR_0, VAR_4);
   FUNC_5(VAR_4);
  }
 }

 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_6);
  if (VAR_12 != 0) {
   FUNC_2(VAR_8, "%s: Removing %s due to error\n",
    VAR_0, VAR_7);
   FUNC_5(VAR_7);
  }
 }

 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_1);
  if (VAR_12 != 0) {
   FUNC_2(VAR_8, "%s: Removing %s due to error\n",
    VAR_0, VAR_2);
   FUNC_5(VAR_2);
  }
 }

 FUNC_3(&VAR_5);
 FUNC_4();

 FUNC_0(VAR_12);
}

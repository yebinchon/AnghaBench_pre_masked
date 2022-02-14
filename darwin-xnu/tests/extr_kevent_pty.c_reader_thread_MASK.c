
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int c ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_6)
{
 int VAR_7 = (int)VAR_6;
 char VAR_8;

 VAR_3;
 VAR_2;
 FUNC_0(VAR_7, 0, "reader thread received valid fd");
 VAR_4;

 for (;;) {
  ssize_t VAR_9 = FUNC_3(VAR_7, &VAR_8, sizeof(VAR_8));
  if (VAR_9 == -1) {
   if (VAR_5 == VAR_1) {
    continue;
   } else if (VAR_5 == VAR_0) {
    FUNC_2("reader got an error (%s), shutting down", FUNC_4(VAR_5));
    return ((void*)0);
   } else {
    FUNC_1(VAR_9, "read on PTY");
   }
  } else if (VAR_9 == 0) {
   return ((void*)0);
  }
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int c ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void *
FUNC_5(void *VAR_6)
{
 int VAR_7 = (int)VAR_6;
 char VAR_8[4096];
 FUNC_2(VAR_8, 'a', sizeof(VAR_8));

 VAR_2;
 VAR_1;
 FUNC_0(VAR_7, 0, "writer thread received valid fd");
 VAR_3;

 while (VAR_5) {
  ssize_t VAR_9 = FUNC_4(VAR_7, VAR_8, sizeof(VAR_8));
  if (VAR_9 == -1) {
   if (VAR_4 == VAR_0) {
    continue;
   } else {
    FUNC_1("writer got an error (%s), shutting down", FUNC_3(VAR_4));
    return ((void*)0);
   }
  }
 }

 return ((void*)0);
}

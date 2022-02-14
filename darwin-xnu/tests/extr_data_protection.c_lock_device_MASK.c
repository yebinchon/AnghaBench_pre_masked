
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char* const*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

int
FUNC_6(void) {
 int VAR_4 = -1;
 char * const VAR_5[] = {VAR_0, "lock", ((void*)0)};
 VAR_4 = FUNC_3(VAR_5);
 if(VAR_4) {
  return VAR_4;
 }






 (void) FUNC_5("/private/var/foo_test_file");

 while(1) {
  int VAR_6;

  VAR_6 = FUNC_1(
   "/private/var/foo_test_file",
   VAR_2|VAR_1,
   VAR_3,
   0
  );

  if(VAR_6 >= 0) {

   FUNC_0(VAR_6);
   VAR_4 = FUNC_5("/private/var/foo_test_file");

   if(VAR_4) {
    return VAR_4;
   }

   FUNC_4();
   FUNC_2(1);
  } else {

   break;
  }
 }
 return 0;
}

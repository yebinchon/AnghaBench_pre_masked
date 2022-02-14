
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reason ;
typedef int notify_addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (unsigned long) ;
 int VAR_4 ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,unsigned long) ;

__attribute__((used)) static void __attribute__((noreturn)) FUNC_6(void)
{
 for (;;) {
  unsigned long VAR_5;
  int VAR_6;


  VAR_6 = FUNC_3(VAR_4, &VAR_5,
    sizeof(VAR_5), VAR_2);


  if (VAR_6 == sizeof(VAR_5)) {
   FUNC_5("Notify on address %#lx\n", VAR_5);
   FUNC_2(VAR_5);

  } else if (VAR_3 == VAR_0) {
   char VAR_7[1024] = { 0 };
   FUNC_3(VAR_4, VAR_7, sizeof(VAR_7)-1, VAR_2);
   FUNC_1(1, "%s", VAR_7);

  } else if (VAR_3 == VAR_1) {
   FUNC_4();

  } else
   FUNC_0(1, "Running guest failed");
 }
}

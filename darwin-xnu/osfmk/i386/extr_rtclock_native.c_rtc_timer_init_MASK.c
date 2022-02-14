
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i386_intr_func_t ;
typedef int TSC_deadline_timer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int,int ) ;

void
FUNC_6(void)
{
 int VAR_9 = 0;


 if ((FUNC_1() & VAR_0)) {
  VAR_9 = 1;
  FUNC_0("TSC_deadline_timer", &VAR_9,
       sizeof(VAR_9));
  FUNC_4("TSC Deadline Timer supported %s enabled\n",
   VAR_9 ? "and" : "but not");
 }

 if (VAR_9) {
  VAR_6 = &VAR_7;
  VAR_4 = VAR_2;





  VAR_5 = 1*VAR_1;
 } else {



  VAR_4 = FUNC_5(0x7fffffffULL, VAR_3);
  FUNC_2("maxDec: %lld\n", VAR_4);
  VAR_5 = 1*VAR_1;
 }


 FUNC_3((i386_intr_func_t) VAR_8);
}

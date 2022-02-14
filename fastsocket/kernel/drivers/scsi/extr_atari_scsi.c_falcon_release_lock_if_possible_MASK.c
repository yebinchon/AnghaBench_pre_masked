
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NCR5380_hostdata {int connected; int issue_queue; int disconnected_queue; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct NCR5380_hostdata *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0())
  return;

 FUNC_2(VAR_4);

 if (VAR_2 && !VAR_3->disconnected_queue &&
     !VAR_3->issue_queue && !VAR_3->connected) {

  if (VAR_0) {



   FUNC_1(VAR_4);
   return;
  }
  VAR_2 = 0;
  FUNC_4();
  FUNC_5(&VAR_1);
 }

 FUNC_1(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_virq {int virq; unsigned int vcpu; int port; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,struct evtchn_bind_virq*) ;
 int VAR_1 ;
 int FUNC_3 (int,unsigned int) ;
 int* VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (int,int) ;
 int* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_5)
{
 struct evtchn_bind_virq VAR_6;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if ((VAR_8 = FUNC_5(VAR_4, VAR_5)[VAR_7]) == -1)
   continue;

  FUNC_1(FUNC_6(VAR_8) != VAR_7);


  VAR_6.virq = VAR_7;
  VAR_6.vcpu = VAR_5;
  if (FUNC_2(VAR_0,
      &VAR_6) != 0)
   FUNC_0();
  VAR_9 = VAR_6.port;


  VAR_2[VAR_9] = VAR_8;
  VAR_3[VAR_8] = FUNC_4(VAR_9, VAR_7);
  FUNC_3(VAR_9, VAR_5);
 }
}

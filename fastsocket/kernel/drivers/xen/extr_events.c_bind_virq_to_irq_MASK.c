
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_virq {unsigned int virq; unsigned int vcpu; int port; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct evtchn_bind_virq*) ;
 int FUNC_2 (int,unsigned int) ;
 int* VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int,int *,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_7, unsigned int VAR_8)
{
 struct evtchn_bind_virq VAR_9;
 int VAR_10, VAR_11;

 FUNC_5(&VAR_4);

 VAR_11 = FUNC_7(VAR_5, VAR_8)[VAR_7];

 if (VAR_11 == -1) {
  VAR_11 = FUNC_3();

  FUNC_8(VAR_11, &VAR_6,
           VAR_2, "virq");

  VAR_9.virq = VAR_7;
  VAR_9.vcpu = VAR_8;
  if (FUNC_1(VAR_0,
      &VAR_9) != 0)
   FUNC_0();
  VAR_10 = VAR_9.port;

  VAR_1[VAR_10] = VAR_11;
  VAR_3[VAR_11] = FUNC_4(VAR_10, VAR_7);

  FUNC_7(VAR_5, VAR_8)[VAR_7] = VAR_11;

  FUNC_2(VAR_10, VAR_8);
 }

 FUNC_6(&VAR_4);

 return VAR_11;
}

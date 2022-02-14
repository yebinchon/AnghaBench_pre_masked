
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_ipi {unsigned int vcpu; int port; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct evtchn_bind_ipi*) ;
 int FUNC_2 (int,unsigned int) ;
 int* VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int,int *,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_7, unsigned int VAR_8)
{
 struct evtchn_bind_ipi VAR_9;
 int VAR_10, VAR_11;

 FUNC_5(&VAR_5);

 VAR_11 = FUNC_7(VAR_3, VAR_8)[VAR_7];

 if (VAR_11 == -1) {
  VAR_11 = FUNC_3();
  if (VAR_11 < 0)
   goto out;

  FUNC_8(VAR_11, &VAR_6,
           VAR_2, "ipi");

  VAR_9.vcpu = VAR_8;
  if (FUNC_1(VAR_0,
      &VAR_9) != 0)
   FUNC_0();
  VAR_10 = VAR_9.port;

  VAR_1[VAR_10] = VAR_11;
  VAR_4[VAR_11] = FUNC_4(VAR_10, VAR_7);
  FUNC_7(VAR_3, VAR_8)[VAR_7] = VAR_11;

  FUNC_2(VAR_10, VAR_8);
 }

 out:
 FUNC_6(&VAR_5);
 return VAR_11;
}

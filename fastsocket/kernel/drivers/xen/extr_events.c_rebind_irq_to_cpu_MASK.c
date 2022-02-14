
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_vcpu {int port; unsigned int vcpu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct evtchn_bind_vcpu*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(unsigned VAR_2, unsigned VAR_3)
{
 struct evtchn_bind_vcpu VAR_4;
 int VAR_5 = FUNC_3(VAR_2);



 if (!FUNC_1(VAR_5) ||
  (FUNC_4() && !VAR_1))
  return -1;


 VAR_4.port = VAR_5;
 VAR_4.vcpu = VAR_3;






 if (FUNC_0(VAR_0, &VAR_4) >= 0)
  FUNC_2(VAR_5, VAR_3);

 return 0;
}

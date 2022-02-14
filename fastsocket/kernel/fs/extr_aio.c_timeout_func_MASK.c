
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_timeout {int timed_out; int p; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct aio_timeout *VAR_1 = (struct aio_timeout *)VAR_0;

 VAR_1->timed_out = 1;
 FUNC_0(VAR_1->p);
}

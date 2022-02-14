
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_device {int drain_notify; int num_outstanding_req; int waiting_to_drain; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct storvsc_device *VAR_0)
{
 VAR_0->drain_notify = 1;
 FUNC_1(VAR_0->waiting_to_drain,
     FUNC_0(&VAR_0->num_outstanding_req) == 0);
 VAR_0->drain_notify = 0;
}

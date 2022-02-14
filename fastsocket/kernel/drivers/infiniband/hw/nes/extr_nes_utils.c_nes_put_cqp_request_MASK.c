
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nes_device {int dummy; } ;
struct nes_cqp_request {int refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nes_device*,struct nes_cqp_request*) ;

void FUNC_2(struct nes_device *VAR_0,
    struct nes_cqp_request *VAR_1)
{
 if (FUNC_0(&VAR_1->refcount))
  FUNC_1(VAR_0, VAR_1);
}

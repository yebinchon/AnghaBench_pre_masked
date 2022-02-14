
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long cancel_key; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {scalar_t__ format; } ;
struct ibmvfc_event {TYPE_3__ iu; TYPE_1__ crq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ibmvfc_event *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;

 if (VAR_1->crq.format == VAR_0 &&
     VAR_1->iu.cmd.cancel_key == VAR_3)
  return 1;
 return 0;
}

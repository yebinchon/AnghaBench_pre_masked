
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smd_channel {TYPE_2__* send; TYPE_1__* recv; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct smd_channel *VAR_1)
{
 return (VAR_1->recv->state == VAR_0) &&
  (VAR_1->send->state == VAR_0);
}

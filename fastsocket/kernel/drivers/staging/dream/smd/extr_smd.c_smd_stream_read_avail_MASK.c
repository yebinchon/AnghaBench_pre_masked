
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smd_channel {TYPE_1__* recv; } ;
struct TYPE_2__ {int head; int tail; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct smd_channel *VAR_1)
{
 return (VAR_1->recv->head - VAR_1->recv->tail) & (VAR_0 - 1);
}

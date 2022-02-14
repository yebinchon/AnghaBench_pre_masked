
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smd_channel {TYPE_1__* recv; } ;
struct TYPE_2__ {unsigned int head; unsigned int tail; scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct smd_channel *VAR_1, void **VAR_2)
{
 unsigned VAR_3 = VAR_1->recv->head;
 unsigned VAR_4 = VAR_1->recv->tail;
 *VAR_2 = (void *) (VAR_1->recv->data + VAR_4);

 if (VAR_4 <= VAR_3)
  return VAR_3 - VAR_4;
 else
  return VAR_0 - VAR_4;
}

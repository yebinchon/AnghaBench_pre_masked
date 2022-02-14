
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smd_channel {TYPE_1__* send; } ;
struct TYPE_2__ {unsigned int head; unsigned int tail; scalar_t__ data; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(struct smd_channel *VAR_1, void **VAR_2)
{
 unsigned VAR_3 = VAR_1->send->head;
 unsigned VAR_4 = VAR_1->send->tail;
 *VAR_2 = (void *) (VAR_1->send->data + VAR_3);

 if (VAR_3 < VAR_4) {
  return VAR_4 - VAR_3 - 1;
 } else {
  if (VAR_4 == 0)
   return VAR_0 - VAR_3 - 1;
  else
   return VAR_0 - VAR_3;
 }
}

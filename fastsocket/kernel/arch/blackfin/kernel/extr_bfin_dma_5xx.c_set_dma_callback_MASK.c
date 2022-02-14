
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * irq_handler_t ;
struct TYPE_2__ {scalar_t__ chan_status; unsigned int irq; void* data; int device_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (unsigned int,int *,int ,int ,void*) ;

int FUNC_3(unsigned int VAR_4, irq_handler_t VAR_5, void *VAR_6)
{
 FUNC_0(VAR_4 >= VAR_2 ||
   VAR_3[VAR_4].chan_status == VAR_0);

 if (VAR_5 != ((void*)0)) {
  int VAR_7;
  unsigned int VAR_8 = FUNC_1(VAR_4);

  VAR_7 = FUNC_2(VAR_8, VAR_5, VAR_1,
   VAR_3[VAR_4].device_id, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_3[VAR_4].irq = VAR_8;
  VAR_3[VAR_4].data = VAR_6;
 }
 return 0;
}

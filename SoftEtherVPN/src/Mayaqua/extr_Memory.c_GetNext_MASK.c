
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_item; int fifo; } ;
typedef TYPE_1__ QUEUE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void**,int) ;

void *FUNC_2(QUEUE *VAR_1)
{
 void *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1->num_item == 0)
 {

  return ((void*)0);
 }


 FUNC_1(VAR_1->fifo, &VAR_2, sizeof(void *));
 VAR_1->num_item--;


 FUNC_0(VAR_0);

 return VAR_2;
}

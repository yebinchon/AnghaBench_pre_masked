
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; scalar_t__ sig; int size; int rsize; struct TYPE_5__* data; scalar_t__ refcount; } ;
typedef TYPE_1__ ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,TYPE_1__*,size_t,int) ;

void FUNC_2(ccv_array_t* VAR_3)
{
 if (!VAR_2 || !(VAR_3->type & VAR_0) || VAR_3->sig == 0)
 {
  VAR_3->refcount = 0;
  FUNC_0(VAR_3->data);
  FUNC_0(VAR_3);
 } else {
  size_t VAR_4 = sizeof(ccv_array_t) + VAR_3->size * VAR_3->rsize;
  FUNC_1(&VAR_1, VAR_3->sig, VAR_3, VAR_4, 1 );
 }
}

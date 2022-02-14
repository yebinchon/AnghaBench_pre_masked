
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ sig; int size; int rsize; int data; int type; } ;
typedef TYPE_1__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ) ;

void FUNC_2(ccv_array_t* VAR_2)
{
 FUNC_0(VAR_2->sig == 0);
 VAR_2->type &= ~VAR_1;

 VAR_2->sig = FUNC_1(VAR_2->data, VAR_2->size * VAR_2->rsize, (uint64_t)VAR_2->rsize, VAR_0);
}

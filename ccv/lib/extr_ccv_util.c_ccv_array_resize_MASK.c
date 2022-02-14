
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int rnum; scalar_t__ rsize; int data; } ;
typedef TYPE_1__ ccv_array_t ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,size_t) ;

void FUNC_4(ccv_array_t* VAR_0, int VAR_1)
{
 if (VAR_1 > VAR_0->size)
 {
  VAR_0->size = FUNC_2(VAR_0->size * 3 / 2, VAR_1);
  VAR_0->data = FUNC_0(VAR_0->data, (size_t)VAR_0->size * (size_t)VAR_0->rsize);
 }
 FUNC_3(FUNC_1(VAR_0, VAR_0->rnum), 0, (size_t)VAR_0->rsize * (size_t)(VAR_1 - VAR_0->rnum));
 VAR_0->rnum = VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {int nrents; int imask; scalar_t__* fifobar; int merge; scalar_t__ reset; scalar_t__ tail; scalar_t__ head; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, int VAR_2)
{
 struct fifo *VAR_3 = VAR_1;
 int VAR_4;


 VAR_3->head = 0;
 VAR_3->tail = 0;
 VAR_3->reset = 0;
 VAR_3->nrents = VAR_2;
 VAR_3->imask = VAR_2 - 1;
 VAR_3->merge = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->fifobar[VAR_4] = 0;
}

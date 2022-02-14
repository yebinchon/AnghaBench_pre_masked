
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {size_t port; } ;
struct qib_devdata {unsigned int num_pports; unsigned long* pio_writing; unsigned long* pioavailkernel; int pioavail_lock; int pport; int (* f_sendctrl ) (int ,int ) ;int pio_need_disarm; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct qib_devdata*,unsigned int) ;
 struct qib_pportdata* FUNC_3 (struct qib_devdata*,unsigned int) ;
 int FUNC_4 (struct qib_pportdata*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (unsigned int,unsigned long*) ;

void FUNC_9(struct qib_devdata *VAR_1, unsigned long *VAR_2,
       unsigned VAR_3)
{
 struct qib_pportdata *VAR_4, *VAR_5[VAR_0];
 unsigned VAR_6;
 unsigned long VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_pports; VAR_6++)
  VAR_5[VAR_6] = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  int VAR_8;
  if (!FUNC_8(VAR_6, VAR_2))
   continue;




  VAR_4 = FUNC_3(VAR_1, VAR_6);
  if (VAR_4) {
   VAR_5[VAR_4->port] = VAR_4;
   continue;
  }




  FUNC_5(&VAR_1->pioavail_lock, VAR_7);
  if (FUNC_8(VAR_6, VAR_1->pio_writing) ||
      (!FUNC_8(VAR_6 << 1, VAR_1->pioavailkernel) &&
       FUNC_2(VAR_1, VAR_6))) {
   FUNC_1(VAR_6, VAR_1->pio_need_disarm);
   VAR_8 = 0;
  } else {
   VAR_8 = 1;
   VAR_1->f_sendctrl(VAR_1->pport, FUNC_0(VAR_6));
  }
  FUNC_6(&VAR_1->pioavail_lock, VAR_7);
 }


 for (VAR_6 = 0; VAR_6 < VAR_1->num_pports; VAR_6++)
  if (VAR_5[VAR_6])
   FUNC_4(VAR_5[VAR_6]);
}

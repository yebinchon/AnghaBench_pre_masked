
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilo_hwinfo {int fifo_lock; } ;
struct fifo {int* fifobar; int tail; int imask; int merge; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fifo* FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ilo_hwinfo *VAR_2, char *VAR_3, int VAR_4)
{
 struct fifo *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_1(&VAR_2->fifo_lock, VAR_6);
 if (!(VAR_5->fifobar[(VAR_5->tail + 1) & VAR_5->imask]
       & VAR_1)) {
  VAR_5->fifobar[VAR_5->tail & VAR_5->imask] |=
    (VAR_4 & VAR_0) | VAR_5->merge;
  VAR_5->tail += 1;
  VAR_7 = 1;
 }
 FUNC_2(&VAR_2->fifo_lock, VAR_6);

 return VAR_7;
}

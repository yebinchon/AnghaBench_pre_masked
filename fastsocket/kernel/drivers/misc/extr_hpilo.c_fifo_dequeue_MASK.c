
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ilo_hwinfo {int fifo_lock; } ;
struct fifo {int* fifobar; size_t head; size_t imask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fifo* FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ilo_hwinfo *VAR_3, char *VAR_4, int *VAR_5)
{
 struct fifo *VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7;
 int VAR_8 = 0;
 u64 VAR_9;

 FUNC_1(&VAR_3->fifo_lock, VAR_7);
 VAR_9 = VAR_6->fifobar[VAR_6->head & VAR_6->imask];
 if (VAR_9 & VAR_1) {
  if (VAR_5)
   *VAR_5 = VAR_9 & VAR_2;

  VAR_6->fifobar[VAR_6->head & VAR_6->imask] =
       (VAR_9 | VAR_0) + 1;
  VAR_6->head += 1;
  VAR_8 = 1;
 }
 FUNC_2(&VAR_3->fifo_lock, VAR_7);

 return VAR_8;
}

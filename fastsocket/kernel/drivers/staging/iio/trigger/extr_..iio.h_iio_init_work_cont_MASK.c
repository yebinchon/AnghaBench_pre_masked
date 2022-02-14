
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_work_cont {int address; int mask; void* st; int ws_nocheck; int ws; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;

__attribute__((used)) static inline void
FUNC_1(struct iio_work_cont *VAR_0,
     void (*VAR_1)(struct work_struct *),
     void (*VAR_2)(struct work_struct *),
     int VAR_3, int VAR_4, void *VAR_5)
{
 FUNC_0(&(VAR_0)->ws, VAR_1);
 FUNC_0(&(VAR_0)->ws_nocheck, VAR_2);
 VAR_0->address = VAR_3;
 VAR_0->mask = VAR_4;
 VAR_0->st = VAR_5;
}

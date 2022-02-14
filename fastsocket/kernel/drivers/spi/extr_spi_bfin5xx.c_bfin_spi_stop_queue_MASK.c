
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {int lock; scalar_t__ busy; int queue; int run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_4(struct driver_data *VAR_2)
{
 unsigned long VAR_3;
 unsigned VAR_4 = 500;
 int VAR_5 = 0;

 FUNC_2(&VAR_2->lock, VAR_3);







 VAR_2->run = VAR_1;
 while (!FUNC_0(&VAR_2->queue) && VAR_2->busy && VAR_4--) {
  FUNC_3(&VAR_2->lock, VAR_3);
  FUNC_1(10);
  FUNC_2(&VAR_2->lock, VAR_3);
 }

 if (!FUNC_0(&VAR_2->queue) || VAR_2->busy)
  VAR_5 = -VAR_0;

 FUNC_3(&VAR_2->lock, VAR_3);

 return VAR_5;
}

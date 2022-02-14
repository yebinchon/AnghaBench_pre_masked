
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13783 {int io_lock; } ;


 int FUNC_0 (struct mc13783*,int,int*) ;
 int FUNC_1 (struct mc13783*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mc13783 *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 FUNC_2(&VAR_0->io_lock);

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 VAR_4 = (VAR_4 & ~VAR_2) | VAR_3;
 if (VAR_5 == 0)
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);

 FUNC_3(&VAR_0->io_lock);

 return VAR_5;
}

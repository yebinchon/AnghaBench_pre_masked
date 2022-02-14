
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13783 {int io_lock; } ;


 int FUNC_0 (struct mc13783*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mc13783 *VAR_0, int VAR_1, u32 *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->io_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->io_lock);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa5249_device {int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct saa5249_device* FUNC_2 (struct file*) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long,int ) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static long FUNC_5(struct file *VAR_1,
    unsigned int VAR_2, unsigned long VAR_3)
{
 struct saa5249_device *VAR_4 = FUNC_2(VAR_1);
 long VAR_5;

 VAR_2 = FUNC_4(VAR_2);
 FUNC_0(&VAR_4->lock);
 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0);
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}

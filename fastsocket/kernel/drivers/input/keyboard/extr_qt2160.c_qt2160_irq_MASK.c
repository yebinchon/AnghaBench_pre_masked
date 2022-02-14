
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qt2160_data {int lock; int dwork; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct qt2160_data *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_0(&VAR_3->dwork);
 FUNC_1(&VAR_3->dwork, 0);

 FUNC_3(&VAR_3->lock, VAR_4);

 return VAR_0;
}

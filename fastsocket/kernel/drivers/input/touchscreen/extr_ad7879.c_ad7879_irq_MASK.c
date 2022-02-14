
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7879 {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ad7879 *VAR_3 = VAR_2;






 if (!FUNC_1(&VAR_3->work))
  FUNC_0(&VAR_3->work);

 return VAR_0;
}

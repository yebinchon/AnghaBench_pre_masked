
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at24_data {int lock; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t FUNC_0 (struct at24_data*,char*,int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(struct at24_data *VAR_0,
  char *VAR_1, loff_t VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = 0;

 if (FUNC_3(!VAR_3))
  return VAR_3;





 FUNC_1(&VAR_0->lock);

 while (VAR_3) {
  ssize_t VAR_5;

  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_5 <= 0) {
   if (VAR_4 == 0)
    VAR_4 = VAR_5;
   break;
  }
  VAR_1 += VAR_5;
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
 }

 FUNC_2(&VAR_0->lock);

 return VAR_4;
}

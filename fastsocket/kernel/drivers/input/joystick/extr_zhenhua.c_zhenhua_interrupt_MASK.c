
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zhenhua {scalar_t__ idx; int * data; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zhenhua* FUNC_0 (struct serio*) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (struct zhenhua*) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct serio *VAR_2, unsigned char VAR_3, unsigned int VAR_4)
{
 struct zhenhua *VAR_5 = FUNC_0(VAR_2);





 if (VAR_3 == 0xef)
  VAR_5->idx = 0;
 else if (VAR_5->idx == 0)
  return VAR_0;

 if (VAR_5->idx < VAR_1)
  VAR_5->data[VAR_5->idx++] = FUNC_1(VAR_3);

 if (VAR_5->idx == VAR_1) {
  FUNC_2(VAR_5);
  VAR_5->idx = 0;
 }

 return VAR_0;
}

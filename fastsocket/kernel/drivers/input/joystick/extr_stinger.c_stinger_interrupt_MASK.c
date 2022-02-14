
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stinger {int idx; unsigned char* data; } ;
struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct stinger* FUNC_0 (struct serio*) ;
 int FUNC_1 (struct stinger*) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct serio *VAR_2,
 unsigned char VAR_3, unsigned int VAR_4)
{
 struct stinger *VAR_5 = FUNC_0(VAR_2);



 if (VAR_5->idx < VAR_1)
  VAR_5->data[VAR_5->idx++] = VAR_3;

 if (VAR_5->idx == 4) {
  FUNC_1(VAR_5);
  VAR_5->idx = 0;
 }

 return VAR_0;
}

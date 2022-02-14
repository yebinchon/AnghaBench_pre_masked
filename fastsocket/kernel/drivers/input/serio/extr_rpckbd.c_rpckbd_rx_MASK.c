
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct serio*,unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct serio *VAR_6 = VAR_5;
 unsigned int VAR_7;
 int VAR_8 = VAR_3;

 while (FUNC_0(VAR_1) & (1 << 5)) {
  VAR_7 = FUNC_0(VAR_0);

  FUNC_1(VAR_6, VAR_7, 0);
  VAR_8 = VAR_2;
 }
 return VAR_8;
}

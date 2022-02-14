
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pid {int setpoint; scalar_t__ deadband; int p_gain; int integral; int d_gain; int last_err; int i_gain; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static signed int FUNC_4(struct _pid *VAR_0, int VAR_1)
{
 signed int VAR_2, VAR_3;
 int32_t VAR_4, VAR_5, VAR_6;
 int32_t VAR_7;

 VAR_2 = VAR_0->setpoint - VAR_1;
 VAR_6 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_2) <= VAR_0->deadband)
  return 0;

 VAR_4 = FUNC_3(VAR_0->p_gain, VAR_6);

 VAR_0->integral += VAR_6;


 VAR_7 = FUNC_2(30);
 if (VAR_0->integral > VAR_7)
  VAR_0->integral = VAR_7;
 if (VAR_0->integral < -VAR_7)
  VAR_0->integral = -VAR_7;

 VAR_5 = FUNC_3(VAR_0->d_gain, (VAR_2 - VAR_0->last_err));
 VAR_0->last_err = VAR_2;

 VAR_3 = VAR_4 + FUNC_3(VAR_0->integral, VAR_0->i_gain) + VAR_5;

 return (signed int)FUNC_1(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 char const* VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (int ) ;

__attribute__((used)) static const char *FUNC_4(struct i2c_client *VAR_1)
{
 struct cx25840_state *VAR_2 = FUNC_3(FUNC_0(VAR_1));

 if (VAR_0[0])
  return VAR_0;
 if (FUNC_2(VAR_2))
  return "v4l-cx23885-avcore-01.fw";
 if (FUNC_1(VAR_2))
  return "v4l-cx231xx-avcore-01.fw";
 return "v4l-cx25840.fw";
}

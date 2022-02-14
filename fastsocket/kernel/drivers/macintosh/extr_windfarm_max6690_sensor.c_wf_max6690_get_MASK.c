
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;
struct wf_6690_sensor {int * i2c; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct wf_6690_sensor* FUNC_1 (struct wf_sensor*) ;

__attribute__((used)) static int FUNC_2(struct wf_sensor *VAR_2, s32 *VAR_3)
{
 struct wf_6690_sensor *VAR_4 = FUNC_1(VAR_2);
 s32 VAR_5;

 if (VAR_4->i2c == ((void*)0))
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_4->i2c, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 *VAR_3 = VAR_5 << 16;
 return 0;
}

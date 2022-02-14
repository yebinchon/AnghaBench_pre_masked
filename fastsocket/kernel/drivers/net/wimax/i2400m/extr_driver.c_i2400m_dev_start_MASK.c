
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int updown; int init_mutex; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int FUNC_0 (struct i2400m*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
int FUNC_3(struct i2400m *VAR_0, enum i2400m_bri VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_0->init_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  VAR_0->updown = 1;
 FUNC_2(&VAR_0->init_mutex);
 return VAR_2;
}

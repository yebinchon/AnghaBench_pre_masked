
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_i2c_stuff {int i2c_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct via_i2c_stuff *VAR_2 = (struct via_i2c_stuff *)VAR_1;

 if (FUNC_0(VAR_0, VAR_2->i2c_port) & 0x08)
  return 1;
 return 0;
}

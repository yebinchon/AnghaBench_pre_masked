
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {int baseminor; int major; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct char_device_struct*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct char_device_struct*) ;
 struct char_device_struct* FUNC_3 (int ,unsigned int,unsigned int,char const*) ;

int FUNC_4(dev_t *VAR_0, unsigned VAR_1, unsigned VAR_2,
   const char *VAR_3)
{
 struct char_device_struct *VAR_4;
 VAR_4 = FUNC_3(0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);
 *VAR_0 = FUNC_1(VAR_4->major, VAR_4->baseminor);
 return 0;
}

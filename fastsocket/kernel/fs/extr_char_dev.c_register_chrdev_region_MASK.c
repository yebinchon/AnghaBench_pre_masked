
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_device_struct {int dummy; } ;
typedef unsigned int dev_t ;


 scalar_t__ FUNC_0 (struct char_device_struct*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct char_device_struct*) ;
 struct char_device_struct* FUNC_5 (scalar_t__,int ,unsigned int,char const*) ;
 int FUNC_6 (scalar_t__,int ,unsigned int) ;
 int FUNC_7 (int ) ;

int FUNC_8(dev_t VAR_0, unsigned VAR_1, const char *VAR_2)
{
 struct char_device_struct *VAR_3;
 dev_t VAR_4 = VAR_0 + VAR_1;
 dev_t VAR_5, VAR_6;

 for (VAR_5 = VAR_0; VAR_5 < VAR_4; VAR_5 = VAR_6) {
  VAR_6 = FUNC_3(FUNC_1(VAR_5)+1, 0);
  if (VAR_6 > VAR_4)
   VAR_6 = VAR_4;
  VAR_3 = FUNC_5(FUNC_1(VAR_5), FUNC_2(VAR_5),
          VAR_6 - VAR_5, VAR_2);
  if (FUNC_0(VAR_3))
   goto fail;
 }
 return 0;
fail:
 VAR_4 = VAR_5;
 for (VAR_5 = VAR_0; VAR_5 < VAR_4; VAR_5 = VAR_6) {
  VAR_6 = FUNC_3(FUNC_1(VAR_5)+1, 0);
  FUNC_7(FUNC_6(FUNC_1(VAR_5), FUNC_2(VAR_5), VAR_6 - VAR_5));
 }
 return FUNC_4(VAR_3);
}

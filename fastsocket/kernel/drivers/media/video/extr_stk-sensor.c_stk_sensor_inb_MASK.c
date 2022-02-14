
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct stk_camera {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct stk_camera*,int ,int*) ;
 scalar_t__ FUNC_2 (struct stk_camera*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stk_camera *VAR_7, u8 VAR_8, u8 *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (FUNC_2(VAR_7, VAR_3, VAR_8))
  return 1;
 if (FUNC_2(VAR_7, VAR_1, VAR_2))
  return 1;
 do {
  if (FUNC_1(VAR_7, VAR_5, &VAR_11))
   return 1;
  VAR_10++;
 } while (VAR_11 == 0 && VAR_10 < VAR_0);
 if (VAR_11 != VAR_6) {
  if (VAR_11)
   FUNC_0("stk_sensor_inb failed, status=0x%02x\n",
    VAR_11);
  return 1;
 }

 if (FUNC_1(VAR_7, VAR_4, &VAR_11))
  return 1;

 *VAR_9 = (u8) VAR_11;
 return 0;
}

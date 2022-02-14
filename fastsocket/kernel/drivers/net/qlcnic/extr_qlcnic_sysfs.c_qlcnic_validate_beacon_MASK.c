
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_4, u16 VAR_5,
      u8 *VAR_6, u8 *VAR_7)
{
 *VAR_7 = FUNC_0(VAR_5);
 *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(VAR_4, VAR_0, "rate %x state %x\n", *VAR_7, *VAR_6);

 if (!*VAR_6) {
  *VAR_7 = VAR_2;
  return 0;
 } else if (*VAR_6 > VAR_3) {
  return -VAR_1;
 }

 if ((!*VAR_7) || (*VAR_7 > VAR_2))
  return -VAR_1;

 return 0;
}

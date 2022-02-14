
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct flexcop_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct flexcop_device*,int ,int,scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct flexcop_device *VAR_2, u16 VAR_3,
  u8 *VAR_4, u16 VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0)
  if (FUNC_0(VAR_4, VAR_5 - 1) != VAR_4[VAR_5 - 1])
   VAR_7 = -VAR_0;
 return VAR_7;
}

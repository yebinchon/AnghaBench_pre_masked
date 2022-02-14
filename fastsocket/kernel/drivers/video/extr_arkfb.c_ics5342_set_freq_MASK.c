
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dac_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 TYPE_1__* FUNC_0 (struct dac_info*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dac_info*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int*,int*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct dac_info *VAR_4, int VAR_5, u32 VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9;


 int VAR_10 = FUNC_2((FUNC_0(VAR_4)->mode == VAR_0)
      ? &VAR_3 : &VAR_2,
      VAR_6, &VAR_7, &VAR_8, &VAR_9, 0);

 if (VAR_10 < 0) {
  return -VAR_1;
 } else {
  u8 VAR_11[6] = {4, 3, 5, VAR_7-2, 5, (VAR_8-2) | (VAR_9 << 5)};
  FUNC_1(VAR_4, VAR_11, 3);
  return 0;
 }
}

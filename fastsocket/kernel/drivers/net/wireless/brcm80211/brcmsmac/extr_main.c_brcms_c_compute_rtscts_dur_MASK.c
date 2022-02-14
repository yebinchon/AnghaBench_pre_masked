
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcms_c_info {int band; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct brcms_c_info*,int ,int ) ;
 scalar_t__ FUNC_1 (struct brcms_c_info*,int ,int ) ;
 scalar_t__ FUNC_2 (struct brcms_c_info*,int ,int ) ;
 scalar_t__ FUNC_3 (struct brcms_c_info*,int ,int ,int ) ;
 int FUNC_4 (int ) ;

u16
FUNC_5(struct brcms_c_info *VAR_1, bool VAR_2,
      u32 VAR_3,
      u32 VAR_4, u8 VAR_5,
      u8 VAR_6, uint VAR_7, bool VAR_8)
{
 u16 VAR_9, VAR_10;

 VAR_10 = FUNC_4(VAR_1->band);

 if (!VAR_2) {

  VAR_9 = 3 * VAR_10;
  VAR_9 +=
      (u16) FUNC_2(VAR_1, VAR_3,
            VAR_5);
 } else {

  VAR_9 = 2 * VAR_10;
 }

 VAR_9 +=
     (u16) FUNC_3(VAR_1, VAR_4, VAR_6,
      VAR_7);
 if (VAR_8)
  VAR_9 +=
      (u16) FUNC_1(VAR_1, VAR_4,
           VAR_0);
 else
  VAR_9 +=
      (u16) FUNC_0(VAR_1, VAR_4,
            VAR_6);
 return VAR_9;
}

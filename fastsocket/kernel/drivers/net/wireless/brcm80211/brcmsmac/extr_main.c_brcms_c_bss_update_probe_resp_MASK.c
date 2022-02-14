
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_c_info {int hw; } ;
struct brcms_bss_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct brcms_c_info*,int ,int ,struct brcms_bss_cfg*,int *,int*) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int FUNC_4 (struct brcms_c_info*,int ) ;
 int FUNC_5 (struct brcms_c_info*,struct brcms_bss_cfg*) ;
 int FUNC_6 (struct brcms_c_info*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;

__attribute__((used)) static void
FUNC_9(struct brcms_c_info *VAR_7,
         struct brcms_bss_cfg *VAR_8,
         bool VAR_9)
{
 u16 *VAR_10;
 int VAR_11 = VAR_0;

 VAR_10 = FUNC_8(VAR_0, VAR_3);
 if (!VAR_10)
  return;







 FUNC_2(VAR_7, VAR_4, 0,
     VAR_8, VAR_10, &VAR_11);

 if (VAR_9)
  FUNC_6(VAR_7);


 FUNC_1(VAR_7->hw, VAR_6,
        (VAR_11 + 3) & ~3, VAR_10);


 FUNC_0(VAR_7->hw, VAR_5, (u16) VAR_11);


 FUNC_5(VAR_7, VAR_8);







 VAR_11 += (-VAR_1 + VAR_2);
 FUNC_4(VAR_7, (u16) VAR_11);

 if (VAR_9)
  FUNC_3(VAR_7);

 FUNC_7(VAR_10);
}

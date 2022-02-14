
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct brcms_c_info {int hw; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t* VAR_5 ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_6, u8 VAR_7,
       u8 VAR_8)
{
 u8 VAR_9, VAR_10;
 u8 VAR_11, VAR_12;
 u16 VAR_13, VAR_14;
 u16 VAR_15;


 VAR_13 = FUNC_2(VAR_8) ? VAR_3 : VAR_4;


 VAR_14 = FUNC_2(VAR_7) ? VAR_1 : VAR_2;





 VAR_9 = VAR_5[VAR_7] & VAR_0;
 VAR_11 = VAR_5[VAR_8] & VAR_0;
 VAR_10 = VAR_9 & 0xf;
 VAR_12 = VAR_11 & 0xf;




 VAR_15 = FUNC_0(VAR_6->hw, (VAR_13 + VAR_12 * 2));




 FUNC_1(VAR_6->hw, (VAR_14 + VAR_10 * 2), VAR_15);
}

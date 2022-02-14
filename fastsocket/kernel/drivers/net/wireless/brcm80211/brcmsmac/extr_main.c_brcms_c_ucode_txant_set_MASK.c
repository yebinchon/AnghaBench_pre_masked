
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_hardware {int bmac_phytxant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcms_hardware*,scalar_t__) ;
 int FUNC_1 (struct brcms_hardware*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6 = VAR_4->bmac_phytxant;
 u16 VAR_7 = VAR_3;


 VAR_5 = FUNC_0(VAR_4, VAR_1 + VAR_0);
 VAR_5 = (VAR_5 & ~VAR_7) | VAR_6;
 FUNC_1(VAR_4, VAR_1 + VAR_0, VAR_5);


 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 = (VAR_5 & ~VAR_7) | VAR_6;
 FUNC_1(VAR_4, VAR_2, VAR_5);
}

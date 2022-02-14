
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct brcms_hardware {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_hardware*,int) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t* VAR_3 ;

u16 FUNC_2(struct brcms_hardware *VAR_4, u8 VAR_5)
{
 u16 VAR_6;
 u8 VAR_7, VAR_8;


 if (FUNC_1(VAR_5))
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;




 VAR_7 = VAR_3[VAR_5] & VAR_0;
 VAR_8 = VAR_7 & 0xf;




 return 2 * FUNC_0(VAR_4, VAR_6 + (VAR_8 * 2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,int,int) ;
 int FUNC_1 (struct asd_ha_struct*,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct asd_ha_struct *VAR_1,
       u16 VAR_2, u16 VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 u16 VAR_6 = VAR_3 & ~1;
 u16 VAR_7;
 u16 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_6);
 if (VAR_3 & 1) {
  if ((VAR_8 >> 8) != VAR_4)
   return -VAR_0;
  VAR_8 = (VAR_5 << 8) | (VAR_8 & 0xFF);
  VAR_7 = (VAR_4 << 8) | (VAR_8 & 0xFF);
 } else {
  if ((VAR_8 & 0xFF) != VAR_4)
   return -VAR_0;
  VAR_8 = (VAR_8 & 0xFF00) | VAR_5;
  VAR_7 = (VAR_8 & 0xFF00) | VAR_4;
 }
 return FUNC_1(VAR_1, VAR_2, VAR_6, VAR_7, VAR_8);
}

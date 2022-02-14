
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct asd_ha_struct*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct asd_ha_struct *VAR_8,
       u16 VAR_9, u16 VAR_10,
       u16 VAR_11, u16 VAR_12)
{
 u8 VAR_13;
 u16 VAR_14 = FUNC_0(VAR_8, VAR_9, VAR_10);
 if (VAR_14 != VAR_11)
  return -VAR_6;
 FUNC_2(VAR_8, VAR_1, VAR_11);
 FUNC_2(VAR_8, VAR_0, VAR_12);
 do {
  VAR_13 = FUNC_1(VAR_8, VAR_4);
 } while (!(VAR_13 & VAR_2));
 if (VAR_13 & VAR_3)
  return -VAR_7;
 else if (VAR_13 & VAR_5)
  return 0;
 else
  return -VAR_6;
}

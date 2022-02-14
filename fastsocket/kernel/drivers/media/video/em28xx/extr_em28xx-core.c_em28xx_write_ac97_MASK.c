
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct em28xx {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,int ,int*,int) ;

int FUNC_3(struct em28xx *VAR_2, u8 VAR_3, u16 VAR_4)
{
 int VAR_5;
 u8 VAR_6 = VAR_3 & 0x7f;
 __le16 VAR_7;

 VAR_7 = FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, (u8 *) &VAR_7, 2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_6, 1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}

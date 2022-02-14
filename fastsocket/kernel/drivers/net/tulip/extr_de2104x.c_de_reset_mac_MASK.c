
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct de_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (struct de_private *VAR_8)
{
 u32 VAR_9, VAR_10;






 if (FUNC_0(VAR_0) == 0xffffffff)
  return -VAR_2;


 FUNC_1 (VAR_0, VAR_1);
 FUNC_2 (1);

 FUNC_1 (VAR_0, VAR_7);
 FUNC_2 (1);

 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  FUNC_0 (VAR_0);
  FUNC_2 (1);
 }

 FUNC_2 (1);

 VAR_9 = FUNC_0(VAR_4);
 if (VAR_9 & (VAR_5 | VAR_6))
  return -VAR_2;
 if (VAR_9 == 0xffffffff)
  return -VAR_3;
 return 0;
}

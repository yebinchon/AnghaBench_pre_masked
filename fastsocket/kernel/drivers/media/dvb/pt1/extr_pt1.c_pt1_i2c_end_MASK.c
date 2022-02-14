
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt1*,int,int,int ,int,int,int) ;
 int FUNC_1 (struct pt1*,int ) ;
 int FUNC_2 (struct pt1*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pt1 *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3, VAR_4, 1, 0, 0, 0, VAR_4 + 1);
 FUNC_0(VAR_3, VAR_4 + 1, 1, 0, 1, 0, VAR_4 + 2);
 FUNC_0(VAR_3, VAR_4 + 2, 1, 0, 1, 1, 0);

 FUNC_2(VAR_3, 0, 0x00000004);
 do {
  if (FUNC_4(VAR_2))
   return -VAR_0;
  FUNC_3((VAR_1 + 999) / 1000);
 } while (FUNC_1(VAR_3, 0) & 0x00000080);
 return 0;
}

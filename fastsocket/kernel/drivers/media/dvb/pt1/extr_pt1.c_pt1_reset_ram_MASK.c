
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct pt1*,char*) ;
 int FUNC_1 (struct pt1*,int ) ;
 int FUNC_2 (struct pt1*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pt1 *VAR_3)
{
 int VAR_4;
 FUNC_2(VAR_3, 0, 0x02020000);
 FUNC_2(VAR_3, 0, 0x02000000);
 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  if (FUNC_1(VAR_3, 0) & 0x00000002)
   return 0;
  FUNC_3((VAR_1 + 999) / 1000);
 }
 FUNC_0(VAR_2, VAR_3, "could not reset RAM\n");
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pt1*,char*) ;
 int FUNC_1 (struct pt1*,int ) ;
 int FUNC_2 (struct pt1*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pt1 *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 57; VAR_3++) {
  if (FUNC_1(VAR_2, 0) & 0x20000000)
   return 0;
  FUNC_2(VAR_2, 0, 0x00000008);
 }
 FUNC_0(VAR_1, VAR_2, "could not sync\n");
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int VAR_1,
     __le16 *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1 <= 0)
  return;
 --VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_4 >= VAR_1)
   break;
  VAR_0[VAR_4] = (char)(FUNC_0(VAR_2[VAR_4]));
 }
 VAR_0[VAR_4] = 0x00;
}

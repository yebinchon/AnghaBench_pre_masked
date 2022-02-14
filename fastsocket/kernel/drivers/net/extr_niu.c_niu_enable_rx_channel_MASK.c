
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_3, int VAR_4, int VAR_5)
{
 u64 VAR_6 = FUNC_1(FUNC_0(VAR_4));
 int VAR_7;

 if (VAR_5)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_2(FUNC_0(VAR_4), VAR_6);

 VAR_7 = 1000;
 while (--VAR_7 > 0) {
  if (FUNC_1(FUNC_0(VAR_4)) & VAR_2)
   break;
  FUNC_3(10);
 }
 if (VAR_7 <= 0)
  return -VAR_0;
 return 0;
}

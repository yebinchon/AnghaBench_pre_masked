
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_8);
 int VAR_10, VAR_11;
 u32 VAR_12;


 VAR_10 = VAR_2;
 if (FUNC_1(VAR_8))
  VAR_10 *= 100;


 FUNC_4(VAR_8, VAR_7,
        (VAR_6 << VAR_9));

 for (VAR_11 = 0; VAR_11 < VAR_10*10; VAR_11++) {
  VAR_12 = FUNC_3(VAR_8, VAR_7);
  if (!(VAR_12 & (VAR_5 << VAR_9)))
   break;

  FUNC_6(5);
 }

 if (VAR_12 & (VAR_5 << VAR_9)) {
  FUNC_2(VAR_0 | VAR_1,
     "cannot free access to nvram interface\n");
  return -VAR_3;
 }


 FUNC_5(VAR_8, VAR_4);
 return 0;
}

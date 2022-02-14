
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2*,int ) ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 struct bnx2* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_12, u32 VAR_13)
{
 struct bnx2 *VAR_14 = FUNC_4(VAR_12);
 int VAR_15;
 u32 VAR_16;

 FUNC_2(VAR_14, VAR_9);

 if (VAR_13 == 0)
  VAR_13 = 2;

 VAR_16 = FUNC_0(VAR_14, VAR_7);
 FUNC_1(VAR_14, VAR_7, VAR_8);

 for (VAR_15 = 0; VAR_15 < (VAR_13 * 2); VAR_15++) {
  if ((VAR_15 % 2) == 0) {
   FUNC_1(VAR_14, VAR_0, VAR_4);
  }
  else {
   FUNC_1(VAR_14, VAR_0, VAR_4 |
    VAR_1 |
    VAR_2 |
    VAR_3 |
    VAR_6 |
    VAR_5);
  }
  FUNC_3(500);
  if (FUNC_6(VAR_11))
   break;
 }
 FUNC_1(VAR_14, VAR_0, 0);
 FUNC_1(VAR_14, VAR_7, VAR_16);

 if (!FUNC_5(VAR_12))
  FUNC_2(VAR_14, VAR_10);

 return 0;
}

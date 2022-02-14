
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct niu {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct niu* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct niu*,int) ;
 int FUNC_4 (struct niu*,int ) ;
 int FUNC_5 (struct niu*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, u32 VAR_2)
{
 struct niu *VAR_3 = FUNC_1(VAR_1);
 u64 VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 if (VAR_2 == 0)
  VAR_2 = 2;

 VAR_4 = FUNC_5(VAR_3);
 for (VAR_5 = 0; VAR_5 < (VAR_2 * 2); VAR_5++) {
  int VAR_6 = ((VAR_5 % 2) == 0);

  FUNC_3(VAR_3, VAR_6);

  if (FUNC_0(500))
   break;
 }
 FUNC_4(VAR_3, VAR_4);

 return 0;
}

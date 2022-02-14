
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tg3*) ;
 int VAR_3 ;
 struct tg3* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*,int) ;
 int FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*,int ,int) ;
 int FUNC_7 (struct tg3*) ;
 int FUNC_8 (struct tg3*) ;
 int FUNC_9 (struct tg3*) ;
 int FUNC_10 (struct tg3*) ;
 int FUNC_11 (struct tg3*,int) ;
 int FUNC_12 (struct net_device*,struct tg3*,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_4, int VAR_5)
{
 struct tg3 *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;
 bool VAR_8 = 0;

 if (VAR_5 < VAR_3 || VAR_5 > FUNC_0(VAR_6))
  return -VAR_1;

 if (!FUNC_2(VAR_4)) {



  FUNC_12(VAR_4, VAR_6, VAR_5);
  return 0;
 }

 FUNC_10(VAR_6);

 FUNC_8(VAR_6);

 FUNC_4(VAR_6, 1);

 FUNC_6(VAR_6, VAR_2, 1);

 FUNC_12(VAR_4, VAR_6, VAR_5);




 if (FUNC_3(VAR_6) == VAR_0)
  VAR_8 = 1;

 VAR_7 = FUNC_11(VAR_6, VAR_8);

 if (!VAR_7)
  FUNC_7(VAR_6);

 FUNC_5(VAR_6);

 if (!VAR_7)
  FUNC_9(VAR_6);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (int) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 struct bnx2x* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, int VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_5(VAR_4);
 int VAR_7, VAR_8 = 0;

 switch (VAR_5) {
 case 129:
  if (FUNC_4(VAR_6)) {
   VAR_8 = FUNC_3(VAR_6) *
          VAR_0;
  } else
   VAR_8 = 0;
  if (FUNC_2(VAR_6)) {
   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    if (FUNC_1(VAR_7))
     VAR_8++;
  } else
   VAR_8 += VAR_1;

  return VAR_8;

 case 128:
  return FUNC_0(VAR_6);

 case 130:
  return VAR_2;

 default:
  return -VAR_3;
 }
}

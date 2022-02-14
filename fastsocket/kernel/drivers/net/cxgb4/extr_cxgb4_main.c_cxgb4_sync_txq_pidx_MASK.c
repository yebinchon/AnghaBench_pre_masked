
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct adapter*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 int FUNC_6 () ;

int FUNC_7(struct net_device *VAR_1, u16 VAR_2, u16 VAR_3,
   u16 VAR_4)
{
 struct adapter *VAR_5 = FUNC_3(VAR_1);
 u16 VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_2, &VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 if (VAR_3 != VAR_6) {
  u16 VAR_9;

  if (VAR_3 >= VAR_6)
   VAR_9 = VAR_3 - VAR_6;
  else
   VAR_9 = VAR_4 - VAR_6 + VAR_3;
  FUNC_6();
  FUNC_5(VAR_5, FUNC_0(VAR_0),
        FUNC_2(VAR_2) | FUNC_1(VAR_9));
 }
out:
 return VAR_8;
}

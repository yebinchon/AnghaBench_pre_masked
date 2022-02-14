
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct amd8111e_priv {int lock; scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, int VAR_6)
{
 struct amd8111e_priv *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;

 if ((VAR_6 < VAR_1) || (VAR_6 > VAR_0))
  return -VAR_3;

 if (!FUNC_2(VAR_5)) {


  VAR_5->mtu = VAR_6;
  return 0;
 }

 FUNC_4(&VAR_7->lock);


 FUNC_6(VAR_4, VAR_7->mmio + VAR_2);

 VAR_5->mtu = VAR_6;

 VAR_8 = FUNC_0(VAR_5);
 FUNC_5(&VAR_7->lock);
 if(!VAR_8)
  FUNC_3(VAR_5);
 return VAR_8;
}

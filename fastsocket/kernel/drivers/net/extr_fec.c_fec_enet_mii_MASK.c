
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int mii_lock; scalar_t__ hwp; } ;
struct TYPE_4__ {int mii_regval; struct TYPE_4__* mii_next; int (* mii_func ) (int ,struct net_device*) ;} ;
typedef TYPE_1__ mii_list_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_3)
{
 struct fec_enet_private *VAR_4;
 mii_list_t *VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_3(&VAR_4->mii_lock);

 if ((VAR_5 = VAR_2) == ((void*)0)) {
  FUNC_1("MII and no head!\n");
  goto unlock;
 }

 if (VAR_5->mii_func != ((void*)0))
  (*(VAR_5->mii_func))(FUNC_2(VAR_4->hwp + VAR_0), VAR_3);

 VAR_2 = VAR_5->mii_next;
 VAR_5->mii_next = VAR_1;
 VAR_1 = VAR_5;

 if ((VAR_5 = VAR_2) != ((void*)0))
  FUNC_6(VAR_5->mii_regval, VAR_4->hwp + VAR_0);

unlock:
 FUNC_4(&VAR_4->mii_lock);
}

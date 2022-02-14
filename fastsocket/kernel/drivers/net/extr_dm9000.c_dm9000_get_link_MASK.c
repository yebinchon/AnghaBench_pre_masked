
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int flags; int mii; } ;
typedef TYPE_1__ board_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_3)
{
 board_info_t *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;

 if (VAR_4->flags & VAR_1)
  VAR_5 = FUNC_1(&VAR_4->mii);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_0) & VAR_2 ? 1 : 0;

 return VAR_5;
}

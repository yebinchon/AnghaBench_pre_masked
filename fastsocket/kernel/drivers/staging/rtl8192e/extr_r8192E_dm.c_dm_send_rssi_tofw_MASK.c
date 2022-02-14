
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int Length; scalar_t__ Value; int Op; } ;
typedef TYPE_1__ DCMD_TXCMD_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *,int ,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 DCMD_TXCMD_T VAR_4;
 struct r8192_priv *VAR_5 = FUNC_1(VAR_3);




 FUNC_2(VAR_3, VAR_1, (u8)VAR_5->undecorated_smoothed_pwdb);
 return;

 VAR_4.Op = VAR_2;
 VAR_4.Length = 4;
 VAR_4.Value = VAR_5->undecorated_smoothed_pwdb;

 FUNC_0(VAR_3, (u8*)&VAR_4,
        VAR_0, sizeof(DCMD_TXCMD_T));

}

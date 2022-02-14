
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct r8192_priv {int wx_sem; TYPE_1__* pFirmware; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int fixed; int value; } ;
struct TYPE_2__ {int FirmwareVersion; } ;


 int FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
  struct iw_request_info *VAR_1,
  struct iw_param *VAR_2, char *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_0);
 u16 VAR_5;

 FUNC_0(&VAR_4->wx_sem);
 VAR_5 = VAR_4->pFirmware->FirmwareVersion;
 VAR_2->value = VAR_5;
 VAR_2->fixed = 1;

 FUNC_2(&VAR_4->wx_sem);
 return 0;
}

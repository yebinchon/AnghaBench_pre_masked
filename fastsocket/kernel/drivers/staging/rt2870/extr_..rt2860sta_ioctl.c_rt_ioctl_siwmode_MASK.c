
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {TYPE_2__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;
struct TYPE_5__ {int WpaState; } ;
struct TYPE_6__ {TYPE_1__ StaCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_4 ;

int FUNC_3(struct net_device *VAR_5,
     struct iw_request_info *VAR_6,
     __u32 *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = VAR_5->ml_priv;


    if(!FUNC_1(VAR_9, VAR_4))
    {
     FUNC_0(VAR_2, ("INFO::Network is down!\n"));
        return -VAR_1;
    }

 switch (*VAR_7)
 {
  case 130:
   FUNC_2(VAR_9, "Adhoc");
   break;
  case 129:
   FUNC_2(VAR_9, "Infra");
   break;
        case 128:
   FUNC_2(VAR_9, "Monitor");
   break;
  default:
   FUNC_0(VAR_2, ("===>rt_ioctl_siwmode::SIOCSIWMODE (unknown %d)\n", *VAR_7));
   return -VAR_0;
 }


 VAR_9->StaCfg.WpaState = VAR_3;

 return 0;
}

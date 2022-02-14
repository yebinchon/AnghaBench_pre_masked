
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_10__ {char* name; int (* set_proc ) (TYPE_1__*,char*) ;} ;
struct TYPE_9__ {int ioctl_if; int ioctl_if_type; } ;
struct TYPE_8__ {scalar_t__ OS_Cookie; } ;
typedef char* PSTRING ;
typedef TYPE_1__* PRTMP_ADAPTER ;
typedef TYPE_2__* POS_COOKIE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 TYPE_5__* VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_8, struct iw_request_info *VAR_9,
    void *VAR_10, char *VAR_11)
{
 PRTMP_ADAPTER VAR_12;
 POS_COOKIE VAR_13;
 PSTRING VAR_14 = VAR_11;
 PSTRING VAR_15;
 int VAR_16=0;

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12 == ((void*)0))
 {


  return -VAR_1;
 }

 VAR_13 = (POS_COOKIE) VAR_12->OS_Cookie;
 {
  VAR_13->ioctl_if_type = VAR_2;
        VAR_13->ioctl_if = VAR_3;
 }


 if(!FUNC_2(VAR_12, VAR_7))
 {
  FUNC_0(VAR_6, ("INFO::Network is down!\n"));
   return -VAR_1;
 }

 if (!*VAR_14)
  return -VAR_0;

 if ((VAR_15 = FUNC_3(VAR_14, '=')) != ((void*)0))
     *VAR_15++ = 0;

 if (!VAR_15 && (FUNC_4(VAR_14, "SiteSurvey") != 0))
     return -VAR_0;
 else
  goto SET_PROC;


    if (!*VAR_15 && (FUNC_4(VAR_14, "SSID") != 0))
        return -VAR_0;

SET_PROC:
 for (VAR_4 = VAR_5; VAR_4->name; VAR_4++)
 {
     if (FUNC_4(VAR_14, VAR_4->name) == 0)
     {
         if(!VAR_4->set_proc(VAR_12, VAR_15))
         {
       VAR_16 = -VAR_0;
         }
      break;
     }
 }

 if(VAR_4->name == ((void*)0))
 {
     VAR_16 = -VAR_0;
     FUNC_0(VAR_6, ("===>rt_ioctl_setparam:: (iwpriv) Not Support Set Command [%s=%s]\n", VAR_14, VAR_15));
 }

    return VAR_16;
}

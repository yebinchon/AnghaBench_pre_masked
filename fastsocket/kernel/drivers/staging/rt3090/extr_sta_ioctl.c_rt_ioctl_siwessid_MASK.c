
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; scalar_t__ flags; } ;
typedef char* PSTRING ;
typedef int PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int VAR_9 ;
 char* FUNC_6 (scalar_t__,int ) ;

int FUNC_7(struct net_device *VAR_10,
    struct iw_request_info *VAR_11,
    struct iw_point *VAR_12, char *VAR_13)
{
 PRTMP_ADAPTER VAR_14 = FUNC_3(VAR_10);


    if(!FUNC_4(VAR_14, VAR_9))
    {
 FUNC_0(VAR_8, ("INFO::Network is down!\n"));
 return -VAR_2;
    }

 if (VAR_12->flags)
 {
  PSTRING VAR_15 = ((void*)0);


  if (VAR_12->length > (VAR_5 + 1))
   return -VAR_0;

  VAR_15 = FUNC_6(VAR_6+1, VAR_7);
  if (VAR_15)
        {
   FUNC_2(VAR_15, VAR_6+1);
   FUNC_1(VAR_15, VAR_13, VAR_12->length);
   if (FUNC_5(VAR_14, VAR_15) == VAR_4)
    return -VAR_1;
  }
  else
   return -VAR_3;
  }
 else
    {

  if (FUNC_5(VAR_14, "") == VAR_4)
   return -VAR_1;
    }
 return 0;
}

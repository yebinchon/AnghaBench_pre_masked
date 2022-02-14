
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; scalar_t__ flags; } ;
typedef int PRTMP_ADAPTER ;
typedef char* PCHAR ;
typedef char CHAR ;


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
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

int FUNC_6(struct net_device *VAR_10,
    struct iw_request_info *VAR_11,
    struct iw_point *VAR_12, char *VAR_13)
{
 PRTMP_ADAPTER VAR_14 = VAR_10->ml_priv;


    if(!FUNC_3(VAR_14, VAR_9))
    {
        FUNC_0(VAR_8, ("INFO::Network is down!\n"));
        return -VAR_2;
    }

 if (VAR_12->flags)
 {
  PCHAR VAR_15 = ((void*)0);


  if (VAR_12->length > (VAR_5 + 1))
   return -VAR_0;

  VAR_15 = (CHAR *) FUNC_5(VAR_6+1, VAR_7);
  if (VAR_15)
  {
   FUNC_2(VAR_15, VAR_6+1);
   FUNC_1(VAR_15, VAR_13, VAR_12->length);
   if (FUNC_4(VAR_14, VAR_15) == VAR_4)
    return -VAR_1;
  }
  else
   return -VAR_3;
 }
 else
 {

  if (FUNC_4(VAR_14, "") == VAR_4)
   return -VAR_1;
    }
 return 0;
}

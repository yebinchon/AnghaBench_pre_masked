
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {scalar_t__ length; } ;
struct TYPE_3__ {scalar_t__ nickname; } ;
typedef int PSTRING ;
typedef TYPE_1__* PRTMP_ADAPTER ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    struct iw_point *VAR_3, char *VAR_4)
{
 PRTMP_ADAPTER VAR_5 = FUNC_0(VAR_1);

 if (VAR_5 == ((void*)0))
 {


  return -VAR_0;
 }

 if (VAR_3->length > FUNC_2((PSTRING) VAR_5->nickname) + 1)
  VAR_3->length = FUNC_2((PSTRING) VAR_5->nickname) + 1;
 if (VAR_3->length > 0) {
  FUNC_1(VAR_4, VAR_5->nickname, VAR_3->length-1);
  VAR_4[VAR_3->length-1] = '\0';
 }
 return 0;
}

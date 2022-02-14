
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3,
       struct iw_request_info *VAR_4,
       union iwreq_data *VAR_5,
       char *VAR_6)
{
 if(VAR_2)
  VAR_5->mode = VAR_1;
 else
  VAR_5->mode = VAR_0;

 return 0;
}

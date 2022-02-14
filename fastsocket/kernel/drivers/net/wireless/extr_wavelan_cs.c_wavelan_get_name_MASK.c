
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
       struct iw_request_info *VAR_1,
       union iwreq_data *VAR_2,
       char *VAR_3)
{
 FUNC_0(VAR_2->name, "WaveLAN");
 return 0;
}

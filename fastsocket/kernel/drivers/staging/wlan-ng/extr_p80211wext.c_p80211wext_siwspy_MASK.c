
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spy_number; int spy_stat; struct sockaddr** spy_address; } ;
typedef TYPE_1__ wlandevice_t ;
struct sockaddr {char* sa_data; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {int dummy; } ;
struct iw_point {int length; } ;
struct TYPE_5__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_2,
        struct iw_request_info *VAR_3,
        struct iw_point *VAR_4, char *VAR_5)
{
 wlandevice_t *VAR_6 = VAR_2->ml_priv;
 struct sockaddr VAR_7[VAR_1];
 int VAR_8 = VAR_4->length;
 int VAR_9;


 FUNC_0(VAR_7, VAR_5, sizeof(struct sockaddr) * VAR_8);

 VAR_6->spy_number = 0;

 if (VAR_8 > 0) {


  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

   FUNC_0(VAR_6->spy_address[VAR_9], VAR_7[VAR_9].sa_data,
          VAR_0);
  }


  FUNC_1(VAR_6->spy_stat, 0,
         sizeof(struct iw_quality) * VAR_1);


  VAR_6->spy_number = VAR_8;
 }

 return 0;
}

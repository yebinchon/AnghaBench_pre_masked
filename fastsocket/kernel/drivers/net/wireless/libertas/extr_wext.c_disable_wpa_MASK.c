
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct enc_key {int dummy; } ;
struct TYPE_3__ {scalar_t__ WPA2enabled; scalar_t__ WPAenabled; } ;
struct TYPE_4__ {int flags; } ;
struct assoc_request {int flags; TYPE_1__ secinfo; TYPE_2__ wpa_unicast_key; TYPE_2__ wpa_mcast_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct assoc_request *VAR_6)
{
 FUNC_0(VAR_5);

 FUNC_2(&VAR_6->wpa_mcast_key, 0, sizeof (struct enc_key));
 VAR_6->wpa_mcast_key.flags = VAR_3;
 FUNC_3(VAR_1, &VAR_6->flags);

 FUNC_2(&VAR_6->wpa_unicast_key, 0, sizeof (struct enc_key));
 VAR_6->wpa_unicast_key.flags = VAR_4;
 FUNC_3(VAR_2, &VAR_6->flags);

 VAR_6->secinfo.WPAenabled = 0;
 VAR_6->secinfo.WPA2enabled = 0;
 FUNC_3(VAR_0, &VAR_6->flags);

 FUNC_1(VAR_5);
}

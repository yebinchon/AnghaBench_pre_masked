
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {scalar_t__ alg; int ext_flags; } ;
struct ipw_priv {TYPE_1__* ieee; } ;
struct TYPE_2__ {int host_mc_decrypt; int host_encrypt_msdu; int host_decrypt; scalar_t__ host_encrypt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ipw_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,struct iw_request_info*,union iwreq_data*,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_0(VAR_3);
 struct iw_encode_ext *VAR_8 = (struct iw_encode_ext *)VAR_6;

 if (VAR_2) {
  if (VAR_8->alg == VAR_0) {


   if (VAR_8->ext_flags & VAR_1)
    VAR_7->ieee->host_mc_decrypt = 1;
   else {
    VAR_7->ieee->host_encrypt = 0;
    VAR_7->ieee->host_encrypt_msdu = 1;
    VAR_7->ieee->host_decrypt = 1;
   }
  } else {
   VAR_7->ieee->host_encrypt = 0;
   VAR_7->ieee->host_encrypt_msdu = 0;
   VAR_7->ieee->host_decrypt = 0;
   VAR_7->ieee->host_mc_decrypt = 0;
  }
 }

 return FUNC_1(VAR_7->ieee, VAR_4, VAR_5, VAR_6);
}

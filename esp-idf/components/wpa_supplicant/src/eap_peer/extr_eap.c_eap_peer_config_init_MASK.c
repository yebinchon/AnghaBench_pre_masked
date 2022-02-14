
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int fragment_size; scalar_t__ anonymous_identity_len; scalar_t__ identity_len; scalar_t__ password_len; scalar_t__ new_password_len; int * new_password; int * password; int * identity; int * anonymous_identity; int * ca_path; int * ca_cert; int * private_key; int * client_cert; int const* private_key_passwd; } ;
struct eap_sm {TYPE_2__ config; TYPE_1__* blob; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(
 struct eap_sm *VAR_8, const u8 *VAR_9,
 int VAR_10)
{
 if (!VAR_8)
  return -1;

 VAR_8->config.anonymous_identity = ((void*)0);
 VAR_8->config.identity = ((void*)0);
 VAR_8->config.password = ((void*)0);
 VAR_8->config.new_password = ((void*)0);

 VAR_8->config.private_key_passwd = VAR_9;
 VAR_8->config.client_cert = (u8 *)VAR_8->blob[0].name;
 VAR_8->config.private_key = (u8 *)VAR_8->blob[1].name;
 VAR_8->config.ca_cert = (u8 *)VAR_8->blob[2].name;

 VAR_8->config.ca_path = ((void*)0);

 VAR_8->config.fragment_size = 1400;


 if (VAR_0 && VAR_1 > 0) {
     VAR_8->config.anonymous_identity_len = VAR_1;
     VAR_8->config.anonymous_identity = (u8 *)FUNC_1(VAR_8->config.anonymous_identity_len);
     if (VAR_8->config.anonymous_identity == ((void*)0))
      return -2;
     FUNC_0(VAR_8->config.anonymous_identity, VAR_0, VAR_1);
 }


 if (VAR_6 && VAR_7 > 0) {
  VAR_8->config.identity_len = VAR_7;
  VAR_8->config.identity = (u8 *)FUNC_1(VAR_8->config.identity_len);
  if (VAR_8->config.identity == ((void*)0)) {
   return -2;
  }
  FUNC_0(VAR_8->config.identity, VAR_6, VAR_7);
 }

 if (VAR_4 && VAR_5) {
  VAR_8->config.password_len = VAR_5;
  VAR_8->config.password = (u8 *)FUNC_1(VAR_8->config.password_len);
  if (VAR_8->config.password == ((void*)0))
   return -2;
  FUNC_0(VAR_8->config.password, VAR_4, VAR_8->config.password_len);
 }

 if (VAR_2 && VAR_3) {
  VAR_8->config.new_password_len = VAR_3;
  VAR_8->config.new_password = (u8 *)FUNC_1(VAR_8->config.new_password_len);
  if (VAR_8->config.new_password == ((void*)0))
   return -2;
  FUNC_0(VAR_8->config.new_password, VAR_2,
     VAR_8->config.new_password_len);
 }

 return 0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ version; } ;
typedef TYPE_1__ coap_tls_version_t ;


 int VAR_0 ;

coap_tls_version_t *
FUNC_0(void) {
  static coap_tls_version_t VAR_1;
  VAR_1.version = 0;
  VAR_1.type = VAR_0;
  return &VAR_1;
}

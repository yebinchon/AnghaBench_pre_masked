
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hmac_hashctxt1; TYPE_1__* hmac_hash; } ;
struct TYPE_4__ {int (* hmac_hupdate ) (int ,unsigned char const*,unsigned int) ;} ;
typedef TYPE_2__ HMAC_context ;


 int FUNC_0 (int ,unsigned char const*,unsigned int) ;

int FUNC_1(HMAC_context * VAR_0,
                     const unsigned char *VAR_1,
                     unsigned int VAR_2)
{

  (*VAR_0->hmac_hash->hmac_hupdate)(VAR_0->hmac_hashctxt1, VAR_1, VAR_2);
  return 0;
}

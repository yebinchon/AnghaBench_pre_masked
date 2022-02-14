
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hmac_hashctxt2; scalar_t__ hmac_hashctxt1; TYPE_1__* hmac_hash; } ;
struct TYPE_4__ {int hmac_ctxtsize; int (* hmac_hfinal ) (unsigned char*,scalar_t__) ;int hmac_resultlen; int (* hmac_hupdate ) (scalar_t__,unsigned char*,int ) ;} ;
typedef TYPE_1__ HMAC_params ;
typedef TYPE_2__ HMAC_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char*,int ) ;
 int FUNC_3 (unsigned char*,scalar_t__) ;

int FUNC_4(HMAC_context *VAR_0, unsigned char *VAR_1)
{
  const HMAC_params * VAR_2 = VAR_0->hmac_hash;




  if(!VAR_1)
    VAR_1 = (unsigned char *) VAR_0->hmac_hashctxt2 +
     VAR_0->hmac_hash->hmac_ctxtsize;

  (*VAR_2->hmac_hfinal)(VAR_1, VAR_0->hmac_hashctxt1);
  (*VAR_2->hmac_hupdate)(VAR_0->hmac_hashctxt2,
   VAR_1, VAR_2->hmac_resultlen);
  (*VAR_2->hmac_hfinal)(VAR_1, VAR_0->hmac_hashctxt2);
  FUNC_0((char *) VAR_0);
  return 0;
}

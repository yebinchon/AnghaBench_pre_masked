
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* hmac_hashctxt2; void* hmac_hashctxt1; TYPE_1__ const* hmac_hash; } ;
struct TYPE_6__ {int hmac_ctxtsize; int hmac_resultlen; unsigned int hmac_maxkeylen; int (* hmac_hupdate ) (void*,int*,int) ;int (* hmac_hinit ) (void*) ;int (* hmac_hfinal ) (unsigned char*,void*) ;} ;
typedef TYPE_1__ HMAC_params ;
typedef TYPE_2__ HMAC_context ;


 unsigned char const VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (size_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,unsigned char const*,unsigned int) ;
 int FUNC_3 (unsigned char*,void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,unsigned char*,int) ;
 int FUNC_7 (void*,unsigned char*,int) ;
 int FUNC_8 (void*,unsigned char const*,int) ;
 int FUNC_9 (void*,int*,int) ;

HMAC_context *
FUNC_10(const HMAC_params * VAR_2,
               const unsigned char *VAR_3,
               unsigned int VAR_4)
{
  size_t VAR_5;
  HMAC_context *VAR_6;
  unsigned char *VAR_7;
  unsigned char VAR_8;


  VAR_5 = sizeof(*VAR_6) + 2 * VAR_2->hmac_ctxtsize +
    VAR_2->hmac_resultlen;
  VAR_6 = FUNC_0(VAR_5);

  if(!VAR_6)
    return VAR_6;

  VAR_6->hmac_hash = VAR_2;
  VAR_6->hmac_hashctxt1 = (void *) (VAR_6 + 1);
  VAR_6->hmac_hashctxt2 = (void *) ((char *) VAR_6->hmac_hashctxt1 +
      VAR_2->hmac_ctxtsize);


  if(VAR_4 > VAR_2->hmac_maxkeylen) {
    (*VAR_2->hmac_hinit)(VAR_6->hmac_hashctxt1);
    (*VAR_2->hmac_hupdate)(VAR_6->hmac_hashctxt1, VAR_3, VAR_4);
    VAR_7 = (unsigned char *) VAR_6->hmac_hashctxt2 + VAR_2->hmac_ctxtsize;
    (*VAR_2->hmac_hfinal)(VAR_7, VAR_6->hmac_hashctxt1);
    VAR_3 = VAR_7;
    VAR_4 = VAR_2->hmac_resultlen;
  }


  (*VAR_2->hmac_hinit)(VAR_6->hmac_hashctxt1);
  (*VAR_2->hmac_hinit)(VAR_6->hmac_hashctxt2);

  for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    VAR_8 = (unsigned char)(*VAR_3 ^ VAR_0);
    (*VAR_2->hmac_hupdate)(VAR_6->hmac_hashctxt1, &VAR_8, 1);
    VAR_8 = (unsigned char)(*VAR_3++ ^ VAR_1);
    (*VAR_2->hmac_hupdate)(VAR_6->hmac_hashctxt2, &VAR_8, 1);
  }

  for(; VAR_5 < VAR_2->hmac_maxkeylen; VAR_5++) {
    (*VAR_2->hmac_hupdate)(VAR_6->hmac_hashctxt1, &VAR_0, 1);
    (*VAR_2->hmac_hupdate)(VAR_6->hmac_hashctxt2, &VAR_1, 1);
  }


  return VAR_6;
}

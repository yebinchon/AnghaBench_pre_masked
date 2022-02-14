
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_4__* crypto_ctx_t ;
struct TYPE_8__ {int * dec; int * enc; int ** ikey; } ;
struct TYPE_9__ {scalar_t__ keylen; int * key; int ** ckey; TYPE_3__ ks; TYPE_2__* dec_mode; TYPE_1__* enc_mode; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int size; } ;


 int FUNC_0 (int *,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(crypto_ctx_t VAR_3)
{
 VAR_3->ks.ikey[VAR_1] = ((void*)0);
 if (VAR_3->ks.ikey[VAR_0] && VAR_3->key != VAR_3->ks.ikey[VAR_0]) {
  FUNC_1(VAR_3->keylen, VAR_3->ks.ikey[VAR_0]);
  FUNC_0(VAR_3->ks.ikey[VAR_0], VAR_2);
 }
 VAR_3->ks.ikey[VAR_0] = ((void*)0);
 if (VAR_3->ks.enc) {
  FUNC_2(VAR_3->enc_mode->size, VAR_3->ks.enc);
  FUNC_0(VAR_3->ks.enc, VAR_2);
  VAR_3->ks.enc = ((void*)0);
 }
 if (VAR_3->ks.dec) {
  FUNC_2(VAR_3->dec_mode->size, VAR_3->ks.dec);
  FUNC_0(VAR_3->ks.dec, VAR_2);
  VAR_3->ks.dec = ((void*)0);
 }
 if (VAR_3->ckey[VAR_1] && VAR_3->ckey[VAR_1] != VAR_3->key) {
  FUNC_1(VAR_3->keylen, VAR_3->ckey[VAR_1]);
  FUNC_0(VAR_3->ckey[VAR_1], VAR_2);
 }
 VAR_3->ckey[VAR_1] = ((void*)0);
 if (VAR_3->ckey[VAR_0] && VAR_3->ckey[VAR_0] != VAR_3->key) {
  FUNC_1(VAR_3->keylen, VAR_3->ckey[VAR_0]);
  FUNC_0(VAR_3->ckey[VAR_0], VAR_2);
 }
 VAR_3->ckey[VAR_0] = ((void*)0);
 VAR_3->key = ((void*)0);
 VAR_3->keylen = 0;
}

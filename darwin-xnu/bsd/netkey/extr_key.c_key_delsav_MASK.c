
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ le_next; scalar_t__ le_prev; } ;
struct secasvar {scalar_t__ refcnt; struct secasvar* iv; struct secasvar* lft_s; struct secasvar* lft_h; struct secasvar* lft_c; int * replay; struct secasvar* sched; int schedlen; struct secasvar* key_enc; struct secasvar* key_auth; TYPE_1__ spihash; } ;


 int FUNC_0 (struct secasvar*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct secasvar*,int ) ;
 struct secasvar* FUNC_3 (struct secasvar*) ;
 int FUNC_4 (struct secasvar*) ;
 scalar_t__ FUNC_5 (struct secasvar*) ;
 int FUNC_6 (struct secasvar*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_9(
     struct secasvar *VAR_5)
{

 FUNC_1(VAR_3, VAR_0);


 if (VAR_5 == ((void*)0))
  FUNC_8("key_delsav: NULL pointer is passed.\n");

 if (VAR_5->refcnt > 0)
  return;


 if (FUNC_5(VAR_5))
  FUNC_2(VAR_5, VAR_1);
 VAR_2--;

 if (VAR_5->spihash.le_prev || VAR_5->spihash.le_next)
  FUNC_2(VAR_5, VAR_4);

 if (VAR_5->key_auth != ((void*)0)) {
  FUNC_6(FUNC_3(VAR_5->key_auth), FUNC_4(VAR_5->key_auth));
  FUNC_0(VAR_5->key_auth);
  VAR_5->key_auth = ((void*)0);
 }
 if (VAR_5->key_enc != ((void*)0)) {
  FUNC_6(FUNC_3(VAR_5->key_enc), FUNC_4(VAR_5->key_enc));
  FUNC_0(VAR_5->key_enc);
  VAR_5->key_enc = ((void*)0);
 }
 if (VAR_5->sched) {
  FUNC_6(VAR_5->sched, VAR_5->schedlen);
  FUNC_0(VAR_5->sched);
  VAR_5->sched = ((void*)0);
 }
 if (VAR_5->replay != ((void*)0)) {
  FUNC_7(VAR_5->replay);
  VAR_5->replay = ((void*)0);
 }
 if (VAR_5->lft_c != ((void*)0)) {
  FUNC_0(VAR_5->lft_c);
  VAR_5->lft_c = ((void*)0);
 }
 if (VAR_5->lft_h != ((void*)0)) {
  FUNC_0(VAR_5->lft_h);
  VAR_5->lft_h = ((void*)0);
 }
 if (VAR_5->lft_s != ((void*)0)) {
  FUNC_0(VAR_5->lft_s);
  VAR_5->lft_s = ((void*)0);
 }
 if (VAR_5->iv != ((void*)0)) {
  FUNC_0(VAR_5->iv);
  VAR_5->iv = ((void*)0);
 }

 FUNC_0(VAR_5);

 return;
}

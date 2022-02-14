
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct digestdata {void* userhash; void* stale; int algo; scalar_t__ nc; int algorithm; int qop; int opaque; int realm; int cnonce; int nonce; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;

void FUNC_1(struct digestdata *VAR_2)
{
  FUNC_0(VAR_2->nonce);
  FUNC_0(VAR_2->cnonce);
  FUNC_0(VAR_2->realm);
  FUNC_0(VAR_2->opaque);
  FUNC_0(VAR_2->qop);
  FUNC_0(VAR_2->algorithm);

  VAR_2->nc = 0;
  VAR_2->algo = VAR_0;
  VAR_2->stale = VAR_1;
  VAR_2->userhash = VAR_1;
}

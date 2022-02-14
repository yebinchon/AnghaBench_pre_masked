
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lucid_context_t ;
typedef TYPE_3__* gss_ctx_id_t ;
struct TYPE_7__ {TYPE_3__* key_val; } ;
struct TYPE_8__ {TYPE_1__ key; } ;
struct TYPE_10__ {TYPE_2__ ctx_key; } ;
struct TYPE_9__ {TYPE_5__ gss_lucid_ctx; int gss_cryptor; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_5__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(gss_ctx_id_t VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(&VAR_1->gss_cryptor);
 FUNC_0(VAR_1->gss_lucid_ctx.ctx_key.key.key_val, VAR_0);
 FUNC_1(sizeof (lucid_context_t), &VAR_1->gss_lucid_ctx);
 FUNC_0(VAR_1, VAR_0);
}

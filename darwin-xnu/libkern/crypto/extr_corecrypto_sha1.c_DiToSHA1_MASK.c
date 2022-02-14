
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccdigest_info {int state_size; int block_size; } ;
struct ccdigest_ctx {int dummy; } ;
struct TYPE_7__ {int b8; } ;
struct TYPE_6__ {int b8; } ;
struct TYPE_8__ {TYPE_2__ h; TYPE_1__ m; } ;
typedef TYPE_3__ SHA1_CTX ;


 int FUNC_0 (struct ccdigest_info const*,struct ccdigest_ctx*) ;
 int FUNC_1 (struct ccdigest_info const*,struct ccdigest_ctx*) ;
 scalar_t__ FUNC_2 (struct ccdigest_info const*,struct ccdigest_ctx*) ;
 int FUNC_3 (struct ccdigest_info const*,struct ccdigest_ctx*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(const struct ccdigest_info *VAR_0, struct ccdigest_ctx *VAR_1, SHA1_CTX *VAR_2)
{
 FUNC_5(VAR_2, FUNC_1(VAR_0, VAR_1)/8+FUNC_2(VAR_0, VAR_1));
 FUNC_4(VAR_2->m.b8, FUNC_0(VAR_0, VAR_1), VAR_0->block_size);
 FUNC_4(VAR_2->h.b8, FUNC_3(VAR_0, VAR_1), VAR_0->state_size);
}

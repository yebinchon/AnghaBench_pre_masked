
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int flags; int tfm; } ;
struct TYPE_2__ {int flags; int tfm; } ;
struct padlock_sha_desc {TYPE_1__ fallback; } ;
struct padlock_sha_ctx {int fallback; } ;


 int VAR_0 ;
 struct padlock_sha_ctx* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void const*) ;
 struct padlock_sha_desc* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_1, const void *VAR_2)
{
 struct padlock_sha_desc *VAR_3 = FUNC_2(VAR_1);
 struct padlock_sha_ctx *VAR_4 = FUNC_0(VAR_1->tfm);

 VAR_3->fallback.tfm = VAR_4->fallback;
 VAR_3->fallback.flags = VAR_1->flags & VAR_0;
 return FUNC_1(&VAR_3->fallback, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct crypt_walker_ctx {int length; int iv; int crypt_ctx; TYPE_1__* ccmode; } ;
typedef struct crypt_walker_ctx* crypt_walker_ctx_t ;
struct TYPE_2__ {int block_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int *,int *) ;

int
FUNC_2(void *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
 struct crypt_walker_ctx *VAR_3 = (crypt_walker_ctx_t)VAR_0;
 uint32_t VAR_4;

 VAR_4 = VAR_2 / VAR_3->ccmode->block_size;
 FUNC_0(VAR_2 % VAR_3->ccmode->block_size == 0);
 FUNC_1(VAR_3->ccmode, VAR_3->crypt_ctx, VAR_3->iv, VAR_4, VAR_1, VAR_1);
 VAR_3->length += VAR_2;

 return (0);
}

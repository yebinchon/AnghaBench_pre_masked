
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ccmode_cbc {int block_size; } ;
typedef int aes_rval ;
struct TYPE_4__ {int ctx; } ;
typedef TYPE_1__ aes_encrypt_ctx ;
struct TYPE_5__ {struct ccmode_cbc* ccaes_cbc_encrypt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ccmode_cbc const*,int ,unsigned char const*) ;
 int FUNC_2 (struct ccmode_cbc const*,int ,int ,unsigned int,unsigned char const*,unsigned char*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

aes_rval FUNC_3(const unsigned char *VAR_3, const unsigned char *VAR_4, unsigned int VAR_5,
      unsigned char *VAR_6, aes_encrypt_ctx VAR_7[1])
{
 const struct ccmode_cbc *VAR_8 = VAR_2->ccaes_cbc_encrypt;
 FUNC_0(VAR_8->block_size, VAR_1);

 FUNC_1(VAR_8, VAR_1, VAR_4);
 FUNC_2(VAR_8, VAR_7[0].ctx, VAR_1, VAR_5, VAR_3, VAR_6);

 return VAR_0;
}

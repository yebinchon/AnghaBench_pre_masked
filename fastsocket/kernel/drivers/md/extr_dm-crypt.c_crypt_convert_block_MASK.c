
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dm_crypt_request {int sg_out; int sg_in; struct convert_context* ctx; } ;
struct crypt_config {TYPE_1__* iv_gen_ops; int tfm; } ;
struct convert_context {scalar_t__ offset_in; scalar_t__ offset_out; int bio_in; int sector; int idx_out; int idx_in; int bio_out; } ;
struct bio_vec {scalar_t__ bv_offset; scalar_t__ bv_len; int bv_page; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_2__ {int (* generator ) (struct crypt_config*,int *,int ) ;} ;


 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ablkcipher_request*,int *,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct bio_vec* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (struct ablkcipher_request*) ;
 struct dm_crypt_request* FUNC_7 (struct crypt_config*,struct ablkcipher_request*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ,int,scalar_t__) ;
 int FUNC_10 (struct crypt_config*,int *,int ) ;

__attribute__((used)) static int FUNC_11(struct crypt_config *VAR_2,
          struct convert_context *VAR_3,
          struct ablkcipher_request *VAR_4)
{
 struct bio_vec *VAR_5 = FUNC_3(VAR_3->bio_in, VAR_3->idx_in);
 struct bio_vec *VAR_6 = FUNC_3(VAR_3->bio_out, VAR_3->idx_out);
 struct dm_crypt_request *VAR_7;
 u8 *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_7(VAR_2, VAR_4);
 VAR_8 = (u8 *)FUNC_0((unsigned long)(VAR_7 + 1),
    FUNC_4(VAR_2->tfm) + 1);

 VAR_7->ctx = VAR_3;
 FUNC_8(&VAR_7->sg_in, 1);
 FUNC_9(&VAR_7->sg_in, VAR_5->bv_page, 1 << VAR_0,
      VAR_5->bv_offset + VAR_3->offset_in);

 FUNC_8(&VAR_7->sg_out, 1);
 FUNC_9(&VAR_7->sg_out, VAR_6->bv_page, 1 << VAR_0,
      VAR_6->bv_offset + VAR_3->offset_out);

 VAR_3->offset_in += 1 << VAR_0;
 if (VAR_3->offset_in >= VAR_5->bv_len) {
  VAR_3->offset_in = 0;
  VAR_3->idx_in++;
 }

 VAR_3->offset_out += 1 << VAR_0;
 if (VAR_3->offset_out >= VAR_6->bv_len) {
  VAR_3->offset_out = 0;
  VAR_3->idx_out++;
 }

 if (VAR_2->iv_gen_ops) {
  VAR_9 = VAR_2->iv_gen_ops->generator(VAR_2, VAR_8, VAR_3->sector);
  if (VAR_9 < 0)
   return VAR_9;
 }

 FUNC_1(VAR_4, &VAR_7->sg_in, &VAR_7->sg_out,
         1 << VAR_0, VAR_8);

 if (FUNC_2(VAR_3->bio_in) == VAR_1)
  VAR_9 = FUNC_6(VAR_4);
 else
  VAR_9 = FUNC_5(VAR_4);

 return VAR_9;
}

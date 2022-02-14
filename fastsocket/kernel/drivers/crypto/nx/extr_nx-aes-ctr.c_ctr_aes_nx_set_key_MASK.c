
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int key; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_6__ {TYPE_2__ aes_ctr; TYPE_1__ hdr; } ;
struct nx_csbcpb {TYPE_3__ cpb; } ;
struct nx_crypto_ctx {int * props; int * ap; struct nx_csbcpb* csbcpb; } ;
struct crypto_tfm {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nx_csbcpb*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 struct nx_crypto_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct nx_crypto_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_9,
         const u8 *VAR_10,
         unsigned int VAR_11)
{
 struct nx_crypto_ctx *VAR_12 = FUNC_1(VAR_9);
 struct nx_csbcpb *VAR_13 = VAR_12->csbcpb;

 FUNC_3(VAR_12, VAR_1);

 switch (VAR_11) {
 case 130:
  FUNC_0(VAR_13, VAR_2);
  VAR_12->ap = &VAR_12->props[VAR_6];
  break;
 case 129:
  FUNC_0(VAR_13, VAR_3);
  VAR_12->ap = &VAR_12->props[VAR_7];
  break;
 case 128:
  FUNC_0(VAR_13, VAR_4);
  VAR_12->ap = &VAR_12->props[VAR_8];
  break;
 default:
  return -VAR_0;
 }

 VAR_13->cpb.hdr.mode = VAR_5;
 FUNC_2(VAR_13->cpb.aes_ctr.key, VAR_10, VAR_11);

 return 0;
}

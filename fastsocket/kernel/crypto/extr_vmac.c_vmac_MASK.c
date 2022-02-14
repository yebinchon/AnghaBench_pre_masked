
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__* cached_aes; scalar_t__* cached_nonce; } ;
struct vmac_ctx_t {TYPE_1__ __vmac_ctx; int child; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned int,scalar_t__*,TYPE_1__*) ;

__attribute__((used)) static u64 FUNC_4(unsigned char VAR_0[], unsigned int VAR_1,
   unsigned char VAR_2[16], u64 *VAR_3,
   struct vmac_ctx_t *VAR_4)
{
 u64 *VAR_5, *VAR_6;
 u64 VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = VAR_4->__vmac_ctx.cached_nonce;
 VAR_6 = VAR_4->__vmac_ctx.cached_aes;

 VAR_9 = VAR_2[15] & 1;
 if ((*(u64 *)(VAR_2+8) != VAR_5[1]) || (*(u64 *)(VAR_2) != VAR_5[0])) {
  VAR_5[0] = *(u64 *)(VAR_2);
  VAR_5[1] = *(u64 *)(VAR_2+8);
  ((unsigned char *)VAR_5)[15] &= 0xFE;
  FUNC_1(VAR_4->child,
   (unsigned char *)VAR_6, (unsigned char *)VAR_5);

  ((unsigned char *)VAR_5)[15] |= (unsigned char)(1-VAR_9);
 }
 VAR_7 = FUNC_0(VAR_6 + VAR_9);
 VAR_8 = FUNC_3(VAR_0, VAR_1, (u64 *)0, &VAR_4->__vmac_ctx);
 return FUNC_2(VAR_7 + VAR_8);
}

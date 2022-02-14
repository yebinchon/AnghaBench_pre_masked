
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct md5_ctx {int block; int hash; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct md5_ctx *VAR_0)
{
 FUNC_0(VAR_0->block, sizeof(VAR_0->block) / sizeof(u32));
 FUNC_1(VAR_0->hash, VAR_0->block);
}

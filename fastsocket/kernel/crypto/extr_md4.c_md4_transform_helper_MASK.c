
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md4_ctx {int block; int hash; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct md4_ctx *VAR_0)
{
 FUNC_1(VAR_0->block, FUNC_0(VAR_0->block));
 FUNC_2(VAR_0->hash, VAR_0->block);
}

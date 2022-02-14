
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmac_ctx {scalar_t__ first_block_processed; int * polykey; int * polytmp; } ;



__attribute__((used)) static void FUNC_0(struct vmac_ctx *VAR_0)
{
 VAR_0->polytmp[0] = VAR_0->polykey[0] ;
 VAR_0->polytmp[1] = VAR_0->polykey[1] ;
 VAR_0->first_block_processed = 0;
}

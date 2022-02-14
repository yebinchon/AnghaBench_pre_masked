
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct rmd128_ctx {int buffer; int * state; scalar_t__ byte_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct rmd128_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_4)
{
 struct rmd128_ctx *VAR_5 = FUNC_1(VAR_4);

 VAR_5->byte_count = 0;

 VAR_5->state[0] = VAR_0;
 VAR_5->state[1] = VAR_1;
 VAR_5->state[2] = VAR_2;
 VAR_5->state[3] = VAR_3;

 FUNC_0(VAR_5->buffer, 0, sizeof(VAR_5->buffer));

 return 0;
}

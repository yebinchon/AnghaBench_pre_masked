
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct rmd256_ctx {int buffer; int * state; scalar_t__ byte_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 struct rmd256_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_8)
{
 struct rmd256_ctx *VAR_9 = FUNC_1(VAR_8);

 VAR_9->byte_count = 0;

 VAR_9->state[0] = VAR_0;
 VAR_9->state[1] = VAR_1;
 VAR_9->state[2] = VAR_2;
 VAR_9->state[3] = VAR_3;
 VAR_9->state[4] = VAR_4;
 VAR_9->state[5] = VAR_5;
 VAR_9->state[6] = VAR_6;
 VAR_9->state[7] = VAR_7;

 FUNC_0(VAR_9->buffer, 0, sizeof(VAR_9->buffer));

 return 0;
}

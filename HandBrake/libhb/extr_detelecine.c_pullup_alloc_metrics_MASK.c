
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {void* var; void* comb; void* diffs; } ;
struct pullup_context {int metric_len; } ;


 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1( struct pullup_context * VAR_0,
                                  struct pullup_field * VAR_1 )
{
    VAR_1->diffs = FUNC_0( VAR_0->metric_len, sizeof(int) );
    VAR_1->comb = FUNC_0( VAR_0->metric_len, sizeof(int) );
    VAR_1->var = FUNC_0( VAR_0->metric_len, sizeof(int) );
}

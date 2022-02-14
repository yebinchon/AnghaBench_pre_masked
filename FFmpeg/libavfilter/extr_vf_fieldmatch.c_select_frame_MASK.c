
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * src; int * nxt; int * prv; } ;
typedef TYPE_1__ FieldMatchContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static AVFrame *FUNC_0(FieldMatchContext *VAR_4, int VAR_5)
{
    if (VAR_5 == VAR_2 || VAR_5 == VAR_0) return VAR_4->prv;
    else if (VAR_5 == VAR_1 || VAR_5 == VAR_3) return VAR_4->nxt;
    else return VAR_4->src;
}

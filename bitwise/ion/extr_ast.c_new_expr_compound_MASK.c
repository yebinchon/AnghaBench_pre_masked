
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_5__ {size_t num_fields; int fields; int * type; } ;
struct TYPE_6__ {TYPE_1__ compound; } ;
typedef int SrcPos ;
typedef TYPE_2__ Expr ;
typedef int CompoundField ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Expr *FUNC_2(SrcPos VAR_1, Typespec *VAR_2, CompoundField *VAR_3, size_t VAR_4) {
    Expr *VAR_5 = FUNC_1(VAR_0, VAR_1);
    VAR_5->compound.type = VAR_2;
    VAR_5->compound.fields = FUNC_0(VAR_3);
    VAR_5->compound.num_fields = VAR_4;
    return VAR_5;
}

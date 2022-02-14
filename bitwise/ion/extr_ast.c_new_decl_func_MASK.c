
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_5__ {size_t num_params; int has_varargs; int block; int * varargs_type; int * ret_type; int params; } ;
struct TYPE_6__ {TYPE_1__ func; } ;
typedef int StmtList ;
typedef int SrcPos ;
typedef int FuncParam ;
typedef TYPE_2__ Decl ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,char const*) ;

Decl *FUNC_2(SrcPos VAR_1, const char *VAR_2, FuncParam *VAR_3, size_t VAR_4, Typespec *VAR_5, bool VAR_6, Typespec *VAR_7, StmtList VAR_8) {
    Decl *VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2);
    VAR_9->func.params = FUNC_0(VAR_3);
    VAR_9->func.num_params = VAR_4;
    VAR_9->func.ret_type = VAR_5;
    VAR_9->func.has_varargs = VAR_6;
    VAR_9->func.varargs_type = VAR_7;
    VAR_9->func.block = VAR_8;
    return VAR_9;
}

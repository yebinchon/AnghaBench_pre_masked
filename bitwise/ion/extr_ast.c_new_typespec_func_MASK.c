
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t num_args; int has_varargs; TYPE_2__* ret; int args; } ;
struct TYPE_9__ {TYPE_1__ func; } ;
typedef TYPE_2__ Typespec ;
typedef int SrcPos ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Typespec *FUNC_2(SrcPos VAR_1, Typespec **VAR_2, size_t VAR_3, Typespec *VAR_4, bool VAR_5) {
    Typespec *VAR_6 = FUNC_1(VAR_0, VAR_1);
    VAR_6->func.args = FUNC_0(VAR_2);
    VAR_6->func.num_args = VAR_3;
    VAR_6->func.ret = VAR_4;
    VAR_6->func.has_varargs = VAR_5;
    return VAR_6;
}

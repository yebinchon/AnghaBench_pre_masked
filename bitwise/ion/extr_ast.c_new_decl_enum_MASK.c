
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Typespec ;
struct TYPE_5__ {size_t num_items; int items; int * type; } ;
struct TYPE_6__ {TYPE_1__ enum_decl; } ;
typedef int SrcPos ;
typedef int EnumItem ;
typedef TYPE_2__ Decl ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,char const*) ;

Decl *FUNC_2(SrcPos VAR_1, const char *VAR_2, Typespec *VAR_3, EnumItem *VAR_4, size_t VAR_5) {
    Decl *VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
    VAR_6->enum_decl.type = VAR_3;
    VAR_6->enum_decl.items = FUNC_0(VAR_4);
    VAR_6->enum_decl.num_items = VAR_5;
    return VAR_6;
}

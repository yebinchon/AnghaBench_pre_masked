
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_relative; size_t num_names; int import_all; size_t num_items; void* items; void* names; } ;
struct TYPE_6__ {char const* name; TYPE_1__ import; } ;
typedef int SrcPos ;
typedef char const* ImportItem ;
typedef TYPE_2__ Decl ;


 void* FUNC_0 (char const**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int *) ;

Decl *FUNC_2(SrcPos VAR_1, const char *VAR_2, bool VAR_3, const char **VAR_4, size_t VAR_5, bool VAR_6, ImportItem *VAR_7, size_t VAR_8) {
    Decl *VAR_9 = FUNC_1(VAR_0, VAR_1, ((void*)0));
    VAR_9->name = VAR_2;
    VAR_9->import.is_relative = VAR_3;
    VAR_9->import.names = FUNC_0(VAR_4);
    VAR_9->import.num_names = VAR_5;
    VAR_9->import.import_all = VAR_6;
    VAR_9->import.items = FUNC_0(VAR_7);
    VAR_9->import.num_items = VAR_8;
    return VAR_9;
}

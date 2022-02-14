
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num_names; int names; } ;
typedef TYPE_1__ Typespec ;
typedef int SrcPos ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

Typespec *FUNC_2(SrcPos VAR_1, const char **VAR_2, size_t VAR_3) {
    Typespec *VAR_4 = FUNC_1(VAR_0, VAR_1);
    VAR_4->names = FUNC_0(VAR_2);
    VAR_4->num_names = VAR_3;
    return VAR_4;

}

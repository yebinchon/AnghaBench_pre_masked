
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t num_fields; int fields; } ;
struct TYPE_8__ {TYPE_1__ tuple; } ;
typedef TYPE_2__ Typespec ;
typedef int SrcPos ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ) ;

Typespec *FUNC_2(SrcPos VAR_1, Typespec **VAR_2, size_t VAR_3) {
    Typespec *VAR_4 = FUNC_1(VAR_0, VAR_1);
    VAR_4->tuple.fields = FUNC_0(VAR_2);
    VAR_4->tuple.num_fields = VAR_3;
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* buffer; } ;
typedef TYPE_1__ KXLDArrayPool ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static KXLDArrayPool *
FUNC_5(size_t VAR_1)
{
    KXLDArrayPool *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    FUNC_4(VAR_2, VAR_0);

    VAR_2->buffer = FUNC_2(VAR_1);
    FUNC_4(VAR_2->buffer, VAR_0);
    FUNC_0(VAR_2->buffer, VAR_1);

    VAR_3 = VAR_2;
    VAR_2 = ((void*)0);

finish:
    if (VAR_2) FUNC_3(VAR_2, VAR_1);
    return VAR_3;
}

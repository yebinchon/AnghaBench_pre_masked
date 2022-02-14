
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffer; } ;
typedef TYPE_1__ KXLDArrayPool ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static void
FUNC_2(KXLDArrayPool *VAR_0, size_t VAR_1)
{
    if (VAR_0) {
        if (VAR_0->buffer) FUNC_1(VAR_0->buffer, VAR_1);
        FUNC_0(VAR_0, sizeof(*VAR_0));
    }
}

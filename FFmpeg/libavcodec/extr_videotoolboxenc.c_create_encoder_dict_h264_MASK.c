
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pict_type; } ;
typedef int * CFDictionaryRef ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,void const**,void const**,int,int *,int *) ;
 int VAR_1 ;
 void const* VAR_2 ;
 void const* VAR_3 ;

__attribute__((used)) static int FUNC_2(const AVFrame *VAR_4,
                                    CFDictionaryRef* VAR_5)
{
    CFDictionaryRef VAR_6 = ((void*)0);
    if (VAR_4->pict_type == VAR_0) {
        const void *VAR_7[] = { VAR_3 };
        const void *VAR_8[] = { VAR_2 };

        VAR_6 = FUNC_1(((void*)0), VAR_7, VAR_8, 1, ((void*)0), ((void*)0));
        if(!VAR_6) return FUNC_0(VAR_1);
    }

    *VAR_5 = VAR_6;
    return 0;
}

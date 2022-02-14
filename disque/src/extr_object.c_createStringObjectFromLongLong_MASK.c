
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* ptr; int encoding; } ;
typedef TYPE_1__ robj ;
struct TYPE_7__ {TYPE_1__** integers; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (long long) ;
 TYPE_2__ VAR_5 ;

robj *FUNC_3(long long VAR_6) {
    robj *VAR_7;
    if (VAR_6 >= 0 && VAR_6 < VAR_3) {
        FUNC_1(VAR_5.integers[VAR_6]);
        VAR_7 = VAR_5.integers[VAR_6];
    } else {
        if (VAR_6 >= VAR_1 && VAR_6 <= VAR_0) {
            VAR_7 = FUNC_0(VAR_4, ((void*)0));
            VAR_7->encoding = VAR_2;
            VAR_7->ptr = (void*)((long)VAR_6);
        } else {
            VAR_7 = FUNC_0(VAR_4,FUNC_2(VAR_6));
        }
    }
    return VAR_7;
}

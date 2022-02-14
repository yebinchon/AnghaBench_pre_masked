
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* sds ;
struct TYPE_10__ {scalar_t__ type; int refcount; scalar_t__ encoding; void* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {TYPE_1__** integers; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (void*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (void*) ;
 size_t FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 size_t FUNC_7 (void*) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_9 (void*,size_t,long*) ;

robj *FUNC_10(robj *VAR_7) {
    long VAR_8;
    sds VAR_9 = VAR_7->ptr;
    size_t VAR_10;





    FUNC_8(((void*)0),VAR_7,VAR_7->type == VAR_5);




    if (!FUNC_3(VAR_7)) return VAR_7;




     if (VAR_7->refcount > 1) return VAR_7;




    VAR_10 = FUNC_7(VAR_9);
    if (VAR_10 <= 21 && FUNC_9(VAR_9,VAR_10,&VAR_8)) {




        if (VAR_8 >= 0 && VAR_8 < VAR_4) {
            FUNC_1(VAR_7);
            FUNC_2(VAR_6.integers[VAR_8]);
            return VAR_6.integers[VAR_8];
        } else {
            if (VAR_7->encoding == VAR_3) FUNC_6(VAR_7->ptr);
            VAR_7->encoding = VAR_2;
            VAR_7->ptr = (void*) VAR_8;
            return VAR_7;
        }
    }





    if (VAR_10 <= VAR_1) {
        robj *VAR_11;

        if (VAR_7->encoding == VAR_0) return VAR_7;
        VAR_11 = FUNC_0(VAR_9,FUNC_7(VAR_9));
        FUNC_1(VAR_7);
        return VAR_11;
    }
    if (VAR_7->encoding == VAR_3 &&
        FUNC_5(VAR_9) > VAR_10/10)
    {
        VAR_7->ptr = FUNC_4(VAR_7->ptr);
    }


    return VAR_7;
}

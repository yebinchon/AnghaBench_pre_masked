
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* customAlloc ) (int ,size_t) ;int opaque; } ;
typedef TYPE_1__ ZSTD_customMem ;


 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (void* const,int ,size_t) ;
 void* FUNC_2 (int ,size_t) ;

void* FUNC_3(size_t VAR_0, ZSTD_customMem VAR_1)
{
    if (VAR_1.customAlloc) {


        void* const VAR_2 = VAR_1.customAlloc(VAR_1.opaque, VAR_0);
        FUNC_1(VAR_2, 0, VAR_0);
        return VAR_2;
    }
    return FUNC_0(1, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t max_processing_chunk; scalar_t__ (* read ) (TYPE_1__*,void*,size_t) ;size_t processed_bytes; int (* update_cksum ) (TYPE_1__*,void*,size_t) ;} ;
typedef TYPE_1__ rio ;


 scalar_t__ FUNC_0 (TYPE_1__*,void*,size_t) ;
 int FUNC_1 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static inline size_t FUNC_2(rio *VAR_0, void *VAR_1, size_t VAR_2) {
    while (VAR_2) {
        size_t VAR_3 = (VAR_0->max_processing_chunk && VAR_0->max_processing_chunk < VAR_2) ? VAR_0->max_processing_chunk : VAR_2;
        if (VAR_0->read(VAR_0,VAR_1,VAR_3) == 0)
            return 0;
        if (VAR_0->update_cksum) VAR_0->update_cksum(VAR_0,VAR_1,VAR_3);
        VAR_1 = (char*)VAR_1 + VAR_3;
        VAR_2 -= VAR_3;
        VAR_0->processed_bytes += VAR_3;
    }
    return 1;
}

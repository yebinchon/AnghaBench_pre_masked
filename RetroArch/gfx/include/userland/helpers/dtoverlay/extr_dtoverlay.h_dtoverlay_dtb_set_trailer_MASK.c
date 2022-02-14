
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trailer_len; scalar_t__ trailer_is_malloced; void* trailer; } ;
typedef TYPE_1__ DTBLOB_T ;



__attribute__((used)) static inline void FUNC_0(DTBLOB_T *VAR_0,
                                             void *VAR_1,
                                             int VAR_2)
{
    VAR_0->trailer = VAR_1;
    VAR_0->trailer_len = VAR_2;
    VAR_0->trailer_is_malloced = 0;
}

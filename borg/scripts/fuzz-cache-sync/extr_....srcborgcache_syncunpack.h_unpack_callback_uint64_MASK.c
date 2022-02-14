
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* csize; void* size; } ;
struct TYPE_5__ {int expect; TYPE_1__ current; } ;
typedef TYPE_2__ unpack_user ;
typedef void* int64_t ;


 int FUNC_0 (char*) ;

 int VAR_0 ;


__attribute__((used)) static inline int FUNC_1(unpack_user* VAR_1, int64_t VAR_2)
{
    switch(VAR_1->expect) {
        case 128:
            VAR_1->current.size = VAR_2;
            VAR_1->expect = 129;
            break;
        case 129:
            VAR_1->current.csize = VAR_2;
            VAR_1->expect = VAR_0;
            break;
        default:
            FUNC_0("integer");
    }
    return 0;
}

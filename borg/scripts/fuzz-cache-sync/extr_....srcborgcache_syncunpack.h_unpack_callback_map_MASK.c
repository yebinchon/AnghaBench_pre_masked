
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ csize; scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ level; scalar_t__ expect; scalar_t__ inside_chunks; TYPE_1__ item; scalar_t__ has_chunks; scalar_t__ part; } ;
typedef TYPE_2__ unpack_user ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_2(unpack_user* VAR_2, unsigned int VAR_3)
{
    (void)VAR_3;

    if(VAR_2->level == 0) {
        if(VAR_2->expect != VAR_0) {
            FUNC_0("Invalid state transition");
            return -1;
        }

        VAR_2->expect = VAR_1;
        VAR_2->part = 0;
        VAR_2->has_chunks = 0;
        VAR_2->item.size = 0;
        VAR_2->item.csize = 0;
    }

    if(VAR_2->inside_chunks) {
        FUNC_1("map");
    }

    VAR_2->level++;

    return 0;
}

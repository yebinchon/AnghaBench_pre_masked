
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ csize; scalar_t__ size; } ;
struct TYPE_7__ {int num_files; int csize; int size; } ;
struct TYPE_6__ {int num_files; int csize; int size; } ;
struct TYPE_9__ {scalar_t__ level; TYPE_3__ item; TYPE_2__ totals; TYPE_1__ parts; scalar_t__ part; scalar_t__ has_chunks; scalar_t__ inside_chunks; } ;
typedef TYPE_4__ unpack_user ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline int FUNC_1(unpack_user* VAR_0)
{
    VAR_0->level--;
    if(VAR_0->inside_chunks) {
        FUNC_0("Unexpected map end");
        return -1;
    }
    if(VAR_0->level == 0) {

        if(VAR_0->has_chunks) {
            if(VAR_0->part) {
                VAR_0->parts.num_files += 1;
                VAR_0->parts.size += VAR_0->item.size;
                VAR_0->parts.csize += VAR_0->item.csize;
            }
            VAR_0->totals.num_files += 1;
            VAR_0->totals.size += VAR_0->item.size;
            VAR_0->totals.csize += VAR_0->item.csize;
        }
    }
    return 0;
}

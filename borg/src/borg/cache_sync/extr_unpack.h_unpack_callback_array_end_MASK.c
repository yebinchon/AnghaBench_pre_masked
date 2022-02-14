
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int csize; int key; } ;
struct TYPE_5__ {int size; int csize; } ;
struct TYPE_7__ {int expect; int level; int inside_chunks; TYPE_2__ current; TYPE_1__ item; int chunks; } ;
typedef TYPE_3__ unpack_user ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;


 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static inline int FUNC_6(unpack_user* VAR_2)
{
    uint32_t *VAR_3;
    uint32_t VAR_4[3];
    uint64_t VAR_5;

    switch(VAR_2->expect) {
    case 128:


        VAR_3 = (uint32_t*) FUNC_4(VAR_2->chunks, VAR_2->current.key);
        if(VAR_3) {
            VAR_5 = FUNC_3(VAR_3[0]);
            if(VAR_5 > VAR_0) {
                FUNC_1("invalid reference count");
                return -1;
            }
            VAR_5 += 1;
            VAR_3[0] = FUNC_2(FUNC_0(VAR_5, VAR_0));
        } else {

            VAR_4[0] = FUNC_2(1);
            VAR_4[1] = FUNC_2(VAR_2->current.size);
            VAR_4[2] = FUNC_2(VAR_2->current.csize);
            if(!FUNC_5(VAR_2->chunks, VAR_2->current.key, VAR_4)) {
                FUNC_1("hashindex_set failed");
                return -1;
            }
        }
        VAR_2->item.size += VAR_2->current.size;
        VAR_2->item.csize += VAR_2->current.csize;

        VAR_2->expect = 129;
        break;
    case 129:



        VAR_2->inside_chunks = 0;
        VAR_2->expect = VAR_1;
        break;
    default:
        if(VAR_2->inside_chunks) {
            FUNC_1("Invalid state transition (unexpected array end)");
            return -1;
        } else {
            VAR_2->level--;
            return 0;
        }
    }
    return 0;
}

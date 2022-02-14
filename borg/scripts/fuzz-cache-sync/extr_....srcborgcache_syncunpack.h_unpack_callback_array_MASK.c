
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expect; int level; int inside_chunks; } ;
typedef TYPE_1__ unpack_user ;


 int FUNC_0 (char*) ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(unpack_user* VAR_1, unsigned int VAR_2)
{
    switch(VAR_1->expect) {
    case 129:


        VAR_1->expect = 128;
        break;
    case 128:


        if(VAR_2 != 3) {
            FUNC_0("Invalid chunk list entry length");
            return -1;
        }
        VAR_1->expect = VAR_0;
        break;
    default:
        if(VAR_1->inside_chunks) {
            FUNC_0("Unexpected array start");
            return -1;
        } else {
            VAR_1->level++;
            return 0;
        }
    }
    return 0;
}

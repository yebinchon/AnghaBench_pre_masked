
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int level; int expect; } ;
typedef TYPE_1__ unpack_user ;


 int FUNC_0 (char*) ;

 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(unpack_user* VAR_1, unsigned int VAR_2)
{
    (void)VAR_1; (void)VAR_2;

    if(VAR_1->level == 1) {
        switch(VAR_1->expect) {
        case 128:
            VAR_1->expect = VAR_0;
            break;
        default:
            FUNC_0("Unexpected map item");
            return -1;
        }
    }
    return 0;
}

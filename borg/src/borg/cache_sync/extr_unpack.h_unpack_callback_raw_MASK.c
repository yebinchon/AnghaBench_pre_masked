
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; } ;
struct TYPE_5__ {int expect; int inside_chunks; int has_chunks; int part; TYPE_1__ current; } ;
typedef TYPE_2__ unpack_user ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

 void* VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static inline int FUNC_3(unpack_user* VAR_3, const char* VAR_4, const char* VAR_5, unsigned int VAR_6)
{


    (void)VAR_4;

    switch(VAR_3->expect) {
    case 129:
        if(VAR_6 != 32) {
            FUNC_0("Incorrect key length");
            return -1;
        }
        FUNC_2(VAR_3->current.key, VAR_5, 32);
        VAR_3->expect = VAR_2;
        break;
    case 128:
        if(VAR_6 == 6 && !FUNC_1("chunks", VAR_5, 6)) {
            VAR_3->expect = VAR_0;
            VAR_3->inside_chunks = 1;
            VAR_3->has_chunks = 1;
        } else if(VAR_6 == 4 && !FUNC_1("part", VAR_5, 4)) {
            VAR_3->expect = VAR_1;
            VAR_3->part = 1;
        } else {
            VAR_3->expect = VAR_1;
        }
        break;
    default:
        if(VAR_3->inside_chunks) {
            FUNC_0("Unexpected bytes in chunks structure");
            return -1;
        }
    }
    return 0;
}

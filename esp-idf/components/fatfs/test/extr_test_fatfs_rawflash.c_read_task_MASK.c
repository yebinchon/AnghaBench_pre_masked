
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int rval ;
struct TYPE_2__ {size_t word_count; scalar_t__ val; int done; int result; int seed; int filename; } ;
typedef TYPE_1__ read_test_arg_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*,int,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void* VAR_3)
{
    read_test_arg_t* VAR_4 = (read_test_arg_t*) VAR_3;
    FILE* VAR_5 = FUNC_2(VAR_4->filename, "rb");
    if (VAR_5 == ((void*)0)) {
        VAR_4->result = VAR_0;
        goto done;
    }

    FUNC_4(VAR_4->seed);
    for (size_t VAR_6 = 0; VAR_6 < VAR_4->word_count; ++VAR_6) {
        uint32_t VAR_7;
        int VAR_8 = FUNC_3(&VAR_7, sizeof(VAR_7), 1, VAR_5);
        if (VAR_8 != 1 || VAR_7 != VAR_4->val) {
            FUNC_0("E(r): i=%d, cnt=%d rval=%d val=%d\n\n", VAR_6, VAR_8, VAR_7, VAR_4->val);
            VAR_4->result = VAR_1;
            goto close;
        }
    }
    VAR_4->result = VAR_2;

close:
    FUNC_1(VAR_5);

done:
    FUNC_7(VAR_4->done);
    FUNC_5(1);
    FUNC_6(((void*)0));
}

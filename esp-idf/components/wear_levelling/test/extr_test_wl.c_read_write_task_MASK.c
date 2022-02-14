
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int uint32_t ;
typedef int rval ;
struct TYPE_2__ {size_t word_count; int done; void* result; scalar_t__ offset; int handle; scalar_t__ write; int seed; } ;
typedef TYPE_1__ read_write_test_arg_t ;
typedef void* esp_err_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,size_t,size_t,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ,scalar_t__,int *,int) ;
 void* FUNC_6 (int ,scalar_t__,int *,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void* VAR_2)
{
    read_write_test_arg_t* VAR_3 = (read_write_test_arg_t*) VAR_2;
    esp_err_t VAR_4;
    FUNC_2(VAR_3->seed);
    for (size_t VAR_5 = 0; VAR_5 < VAR_3->word_count; ++VAR_5) {
        uint32_t VAR_6 = FUNC_1();
        if (VAR_3->write) {
            VAR_4 = FUNC_6(VAR_3->handle, VAR_3->offset + VAR_5 * sizeof(VAR_6), &VAR_6, sizeof(VAR_6));
            if (VAR_4 != VAR_1) {
                VAR_3->result = VAR_4;
                goto done;
            }
        } else {
            uint32_t VAR_7;
            VAR_4 = FUNC_5(VAR_3->handle, VAR_3->offset + VAR_5 * sizeof(VAR_7), &VAR_7, sizeof(VAR_7));
            if (VAR_4 != VAR_1 || VAR_7 != VAR_6) {
                FUNC_0("E: i=%d, cnt=%d rval=%d val=%d\n\n", VAR_5, VAR_3->word_count, VAR_7, VAR_6);
                VAR_3->result = VAR_0;
                goto done;
            }
        }
    }
    VAR_3->result = VAR_1;

done:
    FUNC_7(VAR_3->done);
    FUNC_3(1);
    FUNC_4(((void*)0));
}

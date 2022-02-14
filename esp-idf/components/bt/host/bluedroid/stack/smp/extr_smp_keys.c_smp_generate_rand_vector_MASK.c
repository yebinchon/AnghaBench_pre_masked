
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSMP_INT_DATA ;
struct TYPE_3__ {int rand_enc_proc_state; } ;
typedef TYPE_1__ tSMP_CB ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (tSMP_CB *VAR_1, tSMP_INT_DATA *VAR_2)
{
    FUNC_1(VAR_2);



    FUNC_0 ("smp_generate_rand_vector\n");
    VAR_1->rand_enc_proc_state = VAR_0;
    if (!FUNC_2((void *)FUNC_3)) {
        FUNC_3(((void*)0));
    }
}

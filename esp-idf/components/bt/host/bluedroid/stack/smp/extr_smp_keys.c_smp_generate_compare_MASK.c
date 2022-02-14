
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSMP_INT_DATA ;
struct TYPE_4__ {int local_bda; scalar_t__ rrand; int rand_enc_proc_state; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int UINT8 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (int *,int const*,int) ;

void FUNC_4 (tSMP_CB *VAR_1, tSMP_INT_DATA *VAR_2)
{
    FUNC_1(VAR_2);

    FUNC_0 ("smp_generate_compare \n");
    VAR_1->rand_enc_proc_state = VAR_0;
    FUNC_3 ((UINT8 *)VAR_1->rrand, (const UINT8 *)"peer rand", 16);
    FUNC_2(VAR_1, VAR_1->rrand, VAR_1->local_bda);
}

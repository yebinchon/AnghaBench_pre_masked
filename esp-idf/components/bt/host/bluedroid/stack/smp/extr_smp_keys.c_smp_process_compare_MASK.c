
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_data; int key_type; } ;
typedef TYPE_1__ tSMP_KEY ;
struct TYPE_6__ {int param_buf; } ;
typedef TYPE_2__ tSMP_ENC ;
typedef int tSMP_CB ;
typedef int UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(tSMP_CB *VAR_2, tSMP_ENC *VAR_3)
{
    tSMP_KEY VAR_4;

    FUNC_0 ("smp_process_compare \n");

    FUNC_0("Compare Generated\n");
    FUNC_1 (VAR_3->param_buf, (const UINT8 *)"Compare", 16);

    VAR_4.key_type = VAR_1;
    VAR_4.p_data = VAR_3->param_buf;

    FUNC_2(VAR_2, VAR_0, &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int p_data; int key_type; } ;
typedef TYPE_1__ tSMP_KEY ;
struct TYPE_9__ {int param_buf; } ;
typedef TYPE_2__ tSMP_ENC ;
struct TYPE_10__ {int loc_enc_size; } ;
typedef TYPE_3__ tSMP_CB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(tSMP_CB *VAR_2, tSMP_ENC *VAR_3)
{
    tSMP_KEY VAR_4;

    FUNC_0 ("smp_process_stk ");

    FUNC_1("STK Generated");

    FUNC_2(VAR_2->loc_enc_size, VAR_3->param_buf);

    VAR_4.key_type = VAR_1;
    VAR_4.p_data = VAR_3->param_buf;

    FUNC_3(VAR_2, VAR_0, &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* p_data; int key_type; } ;
typedef TYPE_1__ tSMP_KEY ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef void* BT_OCTET16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

void FUNC_3(BT_OCTET16 VAR_3, UINT32 VAR_4)
{
    UINT8 *VAR_5 = VAR_3;
    tSMP_KEY VAR_6;
    FUNC_0("smp_convert_string_to_tk\n");
    FUNC_1(VAR_5, VAR_4);

    VAR_6.key_type = VAR_1;
    VAR_6.p_data = VAR_3;

    FUNC_2(&VAR_2, VAR_0, &VAR_6);
}

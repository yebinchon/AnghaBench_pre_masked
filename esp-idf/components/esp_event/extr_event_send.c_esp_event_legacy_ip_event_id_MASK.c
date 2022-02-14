
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int system_event_id_t ;
typedef int int32_t ;


 int FUNC_0 (int ,char*,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static system_event_id_t FUNC_1(int32_t VAR_7)
{
    switch (VAR_7) {
    case 129:
        return VAR_4;

    case 128:
        return VAR_5;

    case 132:
        return VAR_0;

    case 130:
        return VAR_2;

    case 131:
        return VAR_1;

    default:
        FUNC_0(VAR_6, "invalid ip event id %d", VAR_7);
        return VAR_3;
    }
}

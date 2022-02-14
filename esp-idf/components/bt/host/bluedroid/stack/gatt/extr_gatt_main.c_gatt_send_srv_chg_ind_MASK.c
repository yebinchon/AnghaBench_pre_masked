
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tGATT_STATUS ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {scalar_t__ handle_of_h_r; } ;
typedef int * BD_ADDR ;


 int FUNC_0 (int ,scalar_t__,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int *) ;

tGATT_STATUS FUNC_5 (BD_ADDR VAR_5)
{
    UINT8 VAR_6[VAR_3];
    UINT8 *VAR_7 = VAR_6;
    UINT16 VAR_8;
    tGATT_STATUS VAR_9 = VAR_0;
    FUNC_1("gatt_send_srv_chg_ind");

    if (VAR_4.handle_of_h_r) {
        if ((VAR_8 = FUNC_4(VAR_5)) != VAR_1) {
            FUNC_3 (VAR_7, 1);
            FUNC_3 (VAR_7, 0xFFFF);
            VAR_9 = FUNC_0 (VAR_8,
                                         VAR_4.handle_of_h_r,
                                         VAR_3,
                                         VAR_6);
        } else {
            VAR_9 = VAR_2;
            FUNC_2("Unable to find conn_id for  %02x%02x%02x%02x%02x%02x ",
                             VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);
        }
    }
    return VAR_9;
}

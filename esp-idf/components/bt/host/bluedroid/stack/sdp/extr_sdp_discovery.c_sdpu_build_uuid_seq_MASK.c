
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uuid128; int uuid32; int uuid16; } ;
struct TYPE_5__ {int len; TYPE_1__ uu; } ;
typedef TYPE_2__ tSDP_UUID ;
typedef int UINT8 ;
typedef int UINT16 ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_5 ;

__attribute__((used)) static UINT8 *FUNC_4 (UINT8 *VAR_6, UINT16 VAR_7, tSDP_UUID *VAR_8)
{
    UINT16 VAR_9;
    UINT8 *VAR_10;


    FUNC_3 (VAR_6, (VAR_0 << 3) | VAR_2);


    VAR_10 = VAR_6;
    VAR_6 += 1;


    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_8++) {
        if (VAR_8->len == 2) {
            FUNC_3 (VAR_6, (VAR_5 << 3) | VAR_4);
            FUNC_1 (VAR_6, VAR_8->uu.uuid16);
        } else if (VAR_8->len == 4) {
            FUNC_3 (VAR_6, (VAR_5 << 3) | VAR_1);
            FUNC_2 (VAR_6, VAR_8->uu.uuid32);
        } else {
            FUNC_3 (VAR_6, (VAR_5 << 3) | VAR_3);
            FUNC_0 (VAR_6, VAR_8->uu.uuid128, VAR_8->len);
        }
    }


    VAR_9 = (UINT16)(VAR_6 - VAR_10 - 1);
    FUNC_3 (VAR_10, VAR_9);

    return (VAR_6);
}

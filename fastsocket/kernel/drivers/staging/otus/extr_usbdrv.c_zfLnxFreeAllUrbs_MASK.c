
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int * RegInUrb; int * RegOutUrb; int ** WlanRxDataUrb; int ** WlanTxDataUrb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct usbdrv_private *VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        if (VAR_2->WlanTxDataUrb[VAR_3] != ((void*)0))
        {
            FUNC_0(VAR_2->WlanTxDataUrb[VAR_3]);
        }
    }


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        if (VAR_2->WlanRxDataUrb[VAR_3] != ((void*)0))
        {
            FUNC_0(VAR_2->WlanRxDataUrb[VAR_3]);
        }
    }


    FUNC_0(VAR_2->RegOutUrb);
    FUNC_0(VAR_2->RegInUrb);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
struct TYPE_11__ {int protocol; int pkt_type; int ip_summed; scalar_t__ data; scalar_t__ mac_header; TYPE_1__* dev; } ;
typedef TYPE_2__ zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsAdditionInfo {int dummy; } ;
struct usbdrv_private {scalar_t__ forwardMgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,struct zsAdditionInfo*) ;

void FUNC_4(zdev_t* VAR_3, zbuf_t* VAR_4, struct zsAdditionInfo* VAR_5)
{
    u16_t VAR_6;
    u16_t VAR_7;
    u16_t VAR_8;
    zbuf_t *VAR_9;
    struct usbdrv_private *VAR_10 = VAR_3->ml_priv;


    VAR_7 = *(u8_t*)((u8_t*)VAR_4->data);
    VAR_6 = VAR_7 & 0xf;
    VAR_8 = VAR_7 & 0xf0;

    if ((VAR_6 == 0x0) && (VAR_10->forwardMgmt))
    {
        switch (VAR_8)
        {

            case 0x80 :

            case 0x50 :
                VAR_9 = FUNC_2(VAR_4, VAR_1);
                if(VAR_9 != ((void*)0))
                {
                    VAR_9->dev = VAR_3;
                    VAR_9->mac_header = VAR_9->data;
             VAR_9->ip_summed = VAR_0;
             VAR_9->pkt_type = VAR_2;
             VAR_9->protocol = FUNC_0(0x0019);
                 FUNC_1(VAR_9);
             }
                break;
            default:
                break;
        }
    }

    FUNC_3(VAR_3, VAR_4, VAR_5);
    return;
}

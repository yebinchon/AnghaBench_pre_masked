
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int other; } ;
struct ndrv_demux_desc {scalar_t__ type; int length; TYPE_1__ data; } ;
struct ifnet_demux_desc {scalar_t__ type; int datalen; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet_demux_desc*,int) ;

int
FUNC_1(struct ndrv_demux_desc* VAR_3, struct ifnet_demux_desc* VAR_4)
{
    FUNC_0(VAR_4, sizeof(*VAR_4));

    if (VAR_3->type < VAR_0)
    {

        return VAR_2;
    }

    if (VAR_3->length > 28)
    {
        return VAR_1;
    }

    VAR_4->type = VAR_3->type;
    VAR_4->data = VAR_3->data.other;
    VAR_4->datalen = VAR_3->length;

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ushort ;
struct sk_buff {int dummy; } ;
struct pcbit_dev {TYPE_1__* dev_if; int id; } ;
struct pcbit_chan {int s_refnum; int id; } ;
struct callb_data {int dummy; } ;
struct TYPE_5__ {int arg; int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcbit_chan*,struct sk_buff**) ;
 int VAR_2 ;
 int FUNC_1 (struct pcbit_dev*,int ,int,struct sk_buff*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct pcbit_dev * VAR_3, struct pcbit_chan* VAR_4,
        struct callb_data *VAR_5)
{
  struct sk_buff *VAR_6;
 int VAR_7;
        ushort VAR_8;
        isdn_ctrl VAR_9;

        if ((VAR_7 = FUNC_0(VAR_4, &VAR_6)) < 0) {
                FUNC_2("capi_disc_resp failed\n");
                return;
        }

        VAR_8 = VAR_2++ & 0x7fffU;
        VAR_4->s_refnum = VAR_8;

        FUNC_1(VAR_3, VAR_1, VAR_8, VAR_6, VAR_7);

        VAR_9.command = VAR_0;
        VAR_9.driver=VAR_3->id;
        VAR_9.arg=VAR_4->id;
        VAR_3->dev_if->statcallb(&VAR_9);
}

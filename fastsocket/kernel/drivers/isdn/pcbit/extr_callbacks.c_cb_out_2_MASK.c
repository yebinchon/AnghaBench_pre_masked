
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ushort ;
struct sk_buff {int dummy; } ;
struct pcbit_dev {TYPE_1__* dev_if; int id; } ;
struct pcbit_chan {void* s_refnum; int id; } ;
struct callb_data {int dummy; } ;
struct TYPE_5__ {int arg; int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcbit_chan*,struct sk_buff**) ;
 int FUNC_1 (struct pcbit_chan*,struct sk_buff**,int) ;
 int VAR_3 ;
 int FUNC_2 (struct pcbit_dev*,int ,void*,struct sk_buff*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct pcbit_dev * VAR_4, struct pcbit_chan* VAR_5,
       struct callb_data *VAR_6)
{
        isdn_ctrl VAR_7;
  struct sk_buff *VAR_8;
 int VAR_9;
        ushort VAR_10;

        if ((VAR_9=FUNC_0(VAR_5, &VAR_8)) < 0)
        {
                FUNC_3("capi_conn_active_req failed\n");
                return;
        }

        VAR_10 = VAR_3++ & 0x7fffU;
        VAR_5->s_refnum = VAR_10;

        FUNC_2(VAR_4, VAR_1, VAR_10, VAR_8, VAR_9);


        VAR_7.command = VAR_0;
        VAR_7.driver=VAR_4->id;
        VAR_7.arg=VAR_5->id;
        VAR_4->dev_if->statcallb(&VAR_7);





        if ((VAR_9=FUNC_1(VAR_5, &VAR_8, 1 )) < 0) {
                FUNC_3("capi_select_proto_req failed\n");
                return;
        }

        VAR_10 = VAR_3++ & 0x7fffU;
        VAR_5->s_refnum = VAR_10;

        FUNC_2(VAR_4, VAR_2, VAR_10, VAR_8, VAR_9);
}

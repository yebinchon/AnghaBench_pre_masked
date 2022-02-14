
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcbit_dev {int dummy; } ;
struct pcbit_chan {unsigned short s_refnum; } ;
struct callb_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcbit_chan*,struct sk_buff**,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pcbit_dev*,int ,unsigned short,struct sk_buff*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct pcbit_dev * VAR_2, struct pcbit_chan* VAR_3,
      struct callb_data *VAR_4)
{
        unsigned short VAR_5;
  struct sk_buff *VAR_6;
 int VAR_7;

        if ((VAR_7 = FUNC_0(VAR_3, &VAR_6, 0 )) < 0)
        {
                FUNC_2("capi_select_proto_req failed\n");
                return;
        }

        VAR_5 = VAR_1++ & 0x7fffU;
        VAR_3->s_refnum = VAR_5;

        FUNC_1(VAR_2, VAR_0, VAR_5, VAR_6, VAR_7);

}

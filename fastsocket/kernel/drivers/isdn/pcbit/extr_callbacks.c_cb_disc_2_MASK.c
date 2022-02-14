
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
struct sk_buff {int dummy; } ;
struct pcbit_dev {int dummy; } ;
struct pcbit_chan {int s_refnum; int callref; } ;
struct callb_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff**,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pcbit_dev*,int ,int,struct sk_buff*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct pcbit_dev * VAR_3, struct pcbit_chan* VAR_4,
        struct callb_data *VAR_5)
{
  struct sk_buff *VAR_6;
 int VAR_7;
        ushort VAR_8;

        if ((VAR_7 = FUNC_0(VAR_4->callref, &VAR_6, VAR_0)) < 0)
        {
                FUNC_2("capi_disc_req failed\n");
                return;
        }

        VAR_8 = VAR_2++ & 0x7fffU;
        VAR_4->s_refnum = VAR_8;

        FUNC_1(VAR_3, VAR_1, VAR_8, VAR_6, VAR_7);
}

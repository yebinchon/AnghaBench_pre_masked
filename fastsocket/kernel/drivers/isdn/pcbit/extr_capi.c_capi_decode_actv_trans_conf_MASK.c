
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
struct sk_buff {scalar_t__* data; } ;
struct pcbit_chan {scalar_t__ layer2link; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*,int) ;

int FUNC_2(struct pcbit_chan *VAR_0, struct sk_buff *VAR_1)
{
        ushort VAR_2;

        if (VAR_0->layer2link != *(VAR_1->data) )
                FUNC_0("capi_decode_actv_trans_conf: layer2link doesn't match\n");

        FUNC_1(VAR_1, 1);

        VAR_2 = *((ushort*) VAR_1->data);
        FUNC_1(VAR_1, 2);

        return VAR_2;
}

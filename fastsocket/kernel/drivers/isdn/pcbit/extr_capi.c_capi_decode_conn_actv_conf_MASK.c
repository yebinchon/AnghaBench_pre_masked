
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
struct sk_buff {scalar_t__ data; } ;
struct pcbit_chan {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int) ;

int FUNC_1(struct pcbit_chan * VAR_0, struct sk_buff *VAR_1)
{
        ushort VAR_2;

        VAR_2 = *((ushort*) VAR_1->data);
        FUNC_0(VAR_1, 2);




        return VAR_2;
}

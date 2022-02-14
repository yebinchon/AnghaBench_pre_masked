
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
struct sk_buff {scalar_t__ data; } ;
struct pcbit_dev {struct pcbit_chan* b2; struct pcbit_chan* b1; } ;
struct pcbit_chan {scalar_t__ callref; } ;


 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static inline struct pcbit_chan *
FUNC_1(struct pcbit_dev *VAR_0, struct sk_buff *VAR_1)
{
 ushort VAR_2;

 VAR_2 = *((ushort*) VAR_1->data);
 FUNC_0(VAR_1, 2);

 if (VAR_0->b1->callref == VAR_2)
  return VAR_0->b1;
 else if (VAR_0->b2->callref == VAR_2)
  return VAR_0->b2;

 return ((void*)0);
}

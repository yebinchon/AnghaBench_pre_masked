
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {int (* callback ) (struct hpsb_iso*) ;int waitq; } ;


 int FUNC_0 (struct hpsb_iso*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hpsb_iso *VAR_0)
{
 FUNC_1(&VAR_0->waitq);

 if (VAR_0->callback)
  VAR_0->callback(VAR_0);
}

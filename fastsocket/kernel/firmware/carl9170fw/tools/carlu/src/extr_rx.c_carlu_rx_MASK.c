
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int len; int data; } ;
struct carlu {scalar_t__ rx_stream; } ;


 int FUNC_0 (struct carlu*,int ,int ) ;
 int FUNC_1 (struct carlu*,struct frame*) ;

void FUNC_2(struct carlu *VAR_0, struct frame *VAR_1)
{
 if (VAR_0->rx_stream)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1->data, VAR_1->len);
}

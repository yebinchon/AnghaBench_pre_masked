
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int alloced; int payload; int len; int data; } ;
struct carlu {int dummy; } ;


 int VAR_0 ;
 struct frame* FUNC_0 (struct carlu*,int) ;
 int FUNC_1 (struct frame*) ;
 int FUNC_2 (struct frame*,int) ;
 int FUNC_3 (struct frame*,int) ;
 int FUNC_4 (struct frame*,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,char*,int ,int ) ;

void FUNC_7(struct carlu *VAR_1)
{
 struct frame *VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0x40);
 FUNC_4(VAR_2, 0x10);

 FUNC_5(FUNC_3(VAR_2, 0x10), 0x11, 0x10);
 FUNC_5(FUNC_3(VAR_2, 0x10), 0x22, 0x10);
 FUNC_5(FUNC_2(VAR_2, 0x10), 0x33, 0x10);
 FUNC_5(FUNC_3(VAR_2, 0x10), 0x44, 0x10);

 FUNC_6(VAR_0, "DATA:", VAR_2->data, VAR_2->len);

 FUNC_6(VAR_0, "PAYLOAD:", VAR_2->payload, VAR_2->alloced);

 FUNC_1(VAR_2);
}

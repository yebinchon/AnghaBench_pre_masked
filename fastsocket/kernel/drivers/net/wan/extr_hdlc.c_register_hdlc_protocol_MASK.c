
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlc_proto {struct hdlc_proto* next; } ;


 struct hdlc_proto* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(struct hdlc_proto *VAR_1)
{
 FUNC_0();
 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
 FUNC_1();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlc_proto {struct hdlc_proto* next; } ;


 int FUNC_0 (int) ;
 struct hdlc_proto* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct hdlc_proto *VAR_1)
{
 struct hdlc_proto **VAR_2;

 FUNC_1();
 VAR_2 = &VAR_0;
 while (*VAR_2 != VAR_1) {
  FUNC_0(!*VAR_2);
  VAR_2 = &((*VAR_2)->next);
 }
 *VAR_2 = VAR_1->next;
 FUNC_2();
}

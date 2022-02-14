
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {struct x509_certificate* next; } ;


 int FUNC_0 (struct x509_certificate*) ;

void FUNC_1(struct x509_certificate *VAR_0)
{
 struct x509_certificate *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  VAR_0->next = ((void*)0);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}

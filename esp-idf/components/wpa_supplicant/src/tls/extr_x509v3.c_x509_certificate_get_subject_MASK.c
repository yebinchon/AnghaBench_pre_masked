
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_name {int dummy; } ;
struct x509_certificate {int subject; struct x509_certificate* next; } ;


 scalar_t__ FUNC_0 (int *,struct x509_name*) ;

struct x509_certificate *
FUNC_1(struct x509_certificate *VAR_0,
        struct x509_name *VAR_1)
{
 struct x509_certificate *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(&VAR_2->subject, VAR_1) == 0)
   return VAR_2;
 }
 return ((void*)0);
}

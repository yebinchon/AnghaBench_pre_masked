
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void X509_NAME ;
struct TYPE_3__ {int Local; int State; int Country; int Unit; int Organization; int CommonName; } ;
typedef TYPE_1__ NAME ;


 int FUNC_0 (void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 () ;

void *FUNC_2(NAME *VAR_6)
{
 X509_NAME *VAR_7;

 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_1();
 if (VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_0(VAR_7, VAR_0, VAR_6->CommonName);
 FUNC_0(VAR_7, VAR_3, VAR_6->Organization);
 FUNC_0(VAR_7, VAR_4, VAR_6->Unit);
 FUNC_0(VAR_7, VAR_1, VAR_6->Country);
 FUNC_0(VAR_7, VAR_5, VAR_6->State);
 FUNC_0(VAR_7, VAR_2, VAR_6->Local);

 return VAR_7;
}

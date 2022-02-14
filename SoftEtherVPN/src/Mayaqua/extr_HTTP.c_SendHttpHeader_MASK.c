
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SecureMode; } ;
typedef TYPE_1__ SOCK ;
typedef int HTTP_HEADER ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_3 (char*) ;

bool FUNC_4(SOCK *VAR_0, HTTP_HEADER *VAR_1)
{
 char *VAR_2;
 bool VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_1(VAR_1);


 VAR_3 = FUNC_2(VAR_0, VAR_2, FUNC_3(VAR_2), VAR_0->SecureMode);

 FUNC_0(VAR_2);

 return VAR_3;
}

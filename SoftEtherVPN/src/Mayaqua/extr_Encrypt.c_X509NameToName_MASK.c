
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Local; void* State; void* Country; void* Unit; void* Organization; void* CommonName; } ;
typedef TYPE_1__ NAME ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int) ;

NAME *FUNC_2(void *VAR_6)
{
 NAME *VAR_7;

 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_1(sizeof(NAME));


 VAR_7->CommonName = FUNC_0(VAR_6, VAR_0);
 VAR_7->Organization = FUNC_0(VAR_6, VAR_3);
 VAR_7->Unit = FUNC_0(VAR_6, VAR_4);
 VAR_7->Country = FUNC_0(VAR_6, VAR_1);
 VAR_7->State = FUNC_0(VAR_6, VAR_5);
 VAR_7->Local = FUNC_0(VAR_6, VAR_2);

 return VAR_7;
}

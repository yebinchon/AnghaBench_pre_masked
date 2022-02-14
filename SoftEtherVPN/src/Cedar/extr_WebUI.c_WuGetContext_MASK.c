
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ExpireDate; } ;
typedef TYPE_1__ WU_CONTEXT ;
typedef int LIST ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static WU_CONTEXT *FUNC_2(LIST *VAR_1, char *VAR_2)
{
 WU_CONTEXT *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if(VAR_3 != ((void*)0))
 {
  VAR_3->ExpireDate = FUNC_1() + VAR_0;
 }
 return VAR_3;
}

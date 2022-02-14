
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; void* Str; } ;
typedef TYPE_1__ VALUE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*) ;

VALUE *FUNC_4(char *VAR_0)
{
 VALUE *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_1 = FUNC_0(sizeof(VALUE));


 VAR_1->Size = FUNC_2(VAR_0) + 1;
 VAR_1->Str = FUNC_0(VAR_1->Size);
 FUNC_1(VAR_1->Str, VAR_1->Size, VAR_0);

 FUNC_3(VAR_1->Str);

 return VAR_1;
}

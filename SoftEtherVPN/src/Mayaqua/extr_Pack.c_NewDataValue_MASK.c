
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Size; void* Data; } ;
typedef TYPE_1__ VALUE ;
typedef int UINT ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

VALUE *FUNC_2(void *VAR_0, UINT VAR_1)
{
 VALUE *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_2 = FUNC_1(sizeof(VALUE));


 VAR_2->Size = VAR_1;
 VAR_2->Data = FUNC_1(VAR_2->Size);
 FUNC_0(VAR_2->Data, VAR_0, VAR_1);

 return VAR_2;
}

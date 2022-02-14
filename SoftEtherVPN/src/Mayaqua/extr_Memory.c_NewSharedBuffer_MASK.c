
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Size; void* Data; int Ref; } ;
typedef TYPE_1__ SHARED_BUFFER ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int) ;

SHARED_BUFFER *FUNC_3(void *VAR_0, UINT VAR_1)
{
 SHARED_BUFFER *VAR_2 = FUNC_2(sizeof(SHARED_BUFFER));

 VAR_2->Ref = FUNC_1();
 VAR_2->Data = FUNC_2(VAR_1);
 VAR_2->Size = VAR_1;

 if (VAR_0 != ((void*)0))
 {
  FUNC_0(VAR_2->Data, VAR_0, VAR_1);
 }

 return VAR_2;
}

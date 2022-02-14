
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int IsFlooding; int Size; int SizeofData; void* Buf; void* Compressed; scalar_t__ Param1; scalar_t__ Ttl; scalar_t__ PriorityQoS; } ;
typedef TYPE_1__ BLOCK ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int,void*,int) ;
 void* VAR_0 ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 void* FUNC_3 (int) ;
 void* VAR_2 ;
 int FUNC_4 (void*,int,void*,int) ;

BLOCK *FUNC_5(void *VAR_3, UINT VAR_4, int VAR_5)
{
 BLOCK *VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_3(sizeof(BLOCK));

 VAR_6->IsFlooding = 0;

 VAR_6->PriorityQoS = VAR_6->Ttl = VAR_6->Param1 = 0;

 if (VAR_5 == 0)
 {

  VAR_6->Compressed = VAR_0;
  VAR_6->Buf = VAR_3;
  VAR_6->Size = VAR_4;
  VAR_6->SizeofData = VAR_4;
 }
 else if (VAR_5 == 1)
 {
  UINT VAR_7;


  VAR_6->Compressed = VAR_2;
  VAR_7 = FUNC_0(VAR_4);
  VAR_6->Buf = FUNC_3(VAR_7);
  VAR_6->Size = FUNC_1(VAR_6->Buf, VAR_7, VAR_3, VAR_4);
  VAR_6->SizeofData = VAR_4;


  FUNC_2(VAR_3);
 }
 else
 {

  UINT VAR_8;

  VAR_6->Compressed = VAR_0;
  VAR_8 = VAR_1;
  VAR_6->Buf = FUNC_3(VAR_8);
  VAR_6->Size = FUNC_4(VAR_6->Buf, VAR_8, VAR_3, VAR_4);
  VAR_6->SizeofData = VAR_4;


  FUNC_2(VAR_3);
 }

 return VAR_6;
}

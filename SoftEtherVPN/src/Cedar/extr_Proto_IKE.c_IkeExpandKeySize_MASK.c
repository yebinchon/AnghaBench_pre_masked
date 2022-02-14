
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_11__ {scalar_t__ Size; void* Buf; } ;
struct TYPE_10__ {scalar_t__ HashSize; } ;
typedef TYPE_1__ IKE_HASH ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,void*,scalar_t__,scalar_t__*,scalar_t__) ;
 TYPE_2__* FUNC_2 (void*,scalar_t__) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,scalar_t__*,scalar_t__) ;

BUF *FUNC_5(IKE_HASH *VAR_1, void *VAR_2, UINT VAR_3, UINT VAR_4)
{
 BUF *VAR_5, *VAR_6;
 UCHAR VAR_7[VAR_0];
 UINT VAR_8;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 if (VAR_3 >= VAR_4)
 {
  return FUNC_2(VAR_2, VAR_4);
 }

 VAR_7[0] = 0;
 VAR_8 = 1;
 VAR_5 = FUNC_3();

 do
 {
  FUNC_1(VAR_1, VAR_7, VAR_2, VAR_3, VAR_7, VAR_8);
  FUNC_4(VAR_5, VAR_7, VAR_1->HashSize);

  VAR_8 = VAR_1->HashSize;
 }
 while (VAR_5->Size < VAR_4);

 VAR_6 = FUNC_2(VAR_5->Buf, VAR_4);

 FUNC_0(VAR_5);

 return VAR_6;
}

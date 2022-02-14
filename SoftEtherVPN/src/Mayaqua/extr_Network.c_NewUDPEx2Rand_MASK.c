
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Size; int Buf; } ;
typedef int SOCK ;
typedef int IP ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (scalar_t__,int,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,void*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

SOCK *FUNC_7(bool VAR_4, IP *VAR_5, void *VAR_6, UINT VAR_7, UINT VAR_8)
{
 UINT VAR_9;

 if (VAR_6 == ((void*)0) || VAR_7 == 0)
 {
  return ((void*)0);
 }
 if (VAR_8 == 0)
 {
  VAR_8 = VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < (VAR_8 + 1);VAR_9++)
 {
  BUF *VAR_10 = FUNC_1();
  UCHAR VAR_11[VAR_3];
  UINT VAR_12 = 0;
  SOCK *VAR_13;

  FUNC_5(VAR_10, VAR_6, VAR_7);
  FUNC_6(VAR_10, VAR_9);

  FUNC_4(VAR_11, VAR_10->Buf, VAR_10->Size);

  FUNC_0(VAR_10);

  VAR_12 = FUNC_3(VAR_11);

  VAR_12 = VAR_2 + (VAR_12 % (VAR_1 - VAR_2));

  VAR_13 = FUNC_2(VAR_12, VAR_4, VAR_5);

  if (VAR_13 != ((void*)0))
  {
   return VAR_13;
  }
 }

 return FUNC_2(0, VAR_4, VAR_5);
}

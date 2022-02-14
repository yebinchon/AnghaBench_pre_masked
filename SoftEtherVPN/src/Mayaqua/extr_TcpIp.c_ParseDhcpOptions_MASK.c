
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int Size; int* Data; int Id; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int*,int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,void*,int) ;
 void* FUNC_9 (int) ;

LIST *FUNC_10(void *VAR_1, UINT VAR_2)
{
 BUF *VAR_3;
 LIST *VAR_4;
 DHCP_OPTION *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4();
 FUNC_8(VAR_3, VAR_1, VAR_2);
 FUNC_7(VAR_3, 0, 0);

 VAR_4 = FUNC_5(((void*)0));

 VAR_5 = ((void*)0);

 while (1)
 {
  UCHAR VAR_6 = 0;
  UCHAR VAR_7 = 0;
  DHCP_OPTION *VAR_8;
  if (FUNC_6(VAR_3, &VAR_6, 1) != 1)
  {
   break;
  }
  if (VAR_6 == 0xff)
  {
   break;
  }
  if (FUNC_6(VAR_3, &VAR_7, 1) != 1)
  {
   break;
  }

  if (VAR_6 == VAR_0 && VAR_5 != ((void*)0))
  {
   UINT VAR_9 = VAR_5->Size + (UINT)VAR_7;
   UCHAR *VAR_10 = FUNC_9(VAR_9);
   FUNC_1(VAR_10, VAR_5->Data, VAR_5->Size);
   FUNC_6(VAR_3, VAR_10 + VAR_5->Size, VAR_7);
   FUNC_2(VAR_5->Data);
   VAR_5->Data = VAR_10;
   VAR_5->Size = VAR_9;
  }
  else
  {
   VAR_8 = FUNC_9(sizeof(DHCP_OPTION));
   VAR_8->Id = (UINT)VAR_6;
   VAR_8->Size = (UINT)VAR_7;
   VAR_8->Data = FUNC_9((UINT)VAR_7);
   FUNC_6(VAR_3, VAR_8->Data, VAR_7);
   FUNC_0(VAR_4, VAR_8);

   VAR_5 = VAR_8;
  }
 }

 FUNC_3(VAR_3);

 return VAR_4;
}

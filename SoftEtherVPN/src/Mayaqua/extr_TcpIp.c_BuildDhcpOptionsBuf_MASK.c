
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_3__ {scalar_t__ Size; scalar_t__* Data; scalar_t__ Id; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION ;
typedef int BUF ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__*,int) ;

BUF *FUNC_4(LIST *VAR_1)
{
 BUF *VAR_2;
 UINT VAR_3;
 UCHAR VAR_4;
 UCHAR VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2();
 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_1);VAR_3++)
 {
  DHCP_OPTION *VAR_6 = FUNC_0(VAR_1, VAR_3);
  UINT VAR_7 = VAR_6->Size;
  UINT VAR_8 = 0;

  VAR_4 = (UCHAR)VAR_6->Id;
  if (VAR_6->Size <= 255)
  {
   VAR_5 = (UCHAR)VAR_6->Size;
  }
  else
  {
   VAR_5 = 0xFF;
  }
  FUNC_3(VAR_2, &VAR_4, 1);
  FUNC_3(VAR_2, &VAR_5, 1);
  FUNC_3(VAR_2, VAR_6->Data, VAR_5);

  VAR_7 -= VAR_5;
  VAR_8 += VAR_5;

  while (VAR_7 != 0)
  {
   VAR_4 = VAR_0;
   if (VAR_7 <= 255)
   {
    VAR_5 = (UCHAR)VAR_7;
   }
   else
   {
    VAR_5 = 0xFF;
   }
   FUNC_3(VAR_2, &VAR_4, 1);
   FUNC_3(VAR_2, &VAR_5, 1);
   FUNC_3(VAR_2, ((UCHAR *)VAR_6->Data) + VAR_8, VAR_5);

   VAR_7 -= VAR_5;
   VAR_8 += VAR_5;
  }

 }

 VAR_4 = 0xff;
 FUNC_3(VAR_2, &VAR_4, 1);

 return VAR_2;
}

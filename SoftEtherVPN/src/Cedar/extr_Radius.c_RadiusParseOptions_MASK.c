
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_4__ {int Id; int Size; int Data; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 TYPE_1__* FUNC_5 (int) ;

LIST *FUNC_6(BUF *VAR_0)
{
 LIST *VAR_1;
 UCHAR VAR_2;
 UCHAR VAR_3;
 USHORT VAR_4;
 UCHAR VAR_5[16];

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_3(((void*)0));

 FUNC_4(VAR_0, &VAR_2, 1);
 FUNC_4(VAR_0, &VAR_3, 1);
 VAR_4 = 0;
 FUNC_4(VAR_0, &VAR_4, 2);
 VAR_4 = FUNC_2(VAR_4);
 FUNC_4(VAR_0, VAR_5, 16);

 while (1)
 {
  UCHAR VAR_6;
  UCHAR VAR_7;
  UCHAR VAR_8[256];
  DHCP_OPTION *VAR_9;

  if (FUNC_4(VAR_0, &VAR_6, 1) != 1)
  {
   break;
  }

  if (FUNC_4(VAR_0, &VAR_7, 1) != 1)
  {
   break;
  }

  if (VAR_7 <= 2)
  {
   break;
  }

  VAR_7 -= 2;
  if (FUNC_4(VAR_0, VAR_8, VAR_7) != VAR_7)
  {
   break;
  }

  VAR_9 = FUNC_5(sizeof(DHCP_OPTION));
  VAR_9->Id = VAR_6;
  VAR_9->Size = VAR_7;
  VAR_9->Data = FUNC_1(VAR_8, VAR_9->Size);

  FUNC_0(VAR_1, VAR_9);
 }

 return VAR_1;
}

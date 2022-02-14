
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef int USHORT ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int WindowScaling; int MaxSegmentSize; } ;
typedef TYPE_1__ TCP_OPTION ;


 int FUNC_0 (int*,int*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(TCP_OPTION *VAR_0, void *VAR_1, UINT VAR_2)
{
 UCHAR *VAR_3 = (UCHAR *)VAR_1;
 UINT VAR_4 = 0;
 UINT VAR_5 = 0;
 UINT VAR_6 = 0;
 UCHAR VAR_7[128];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(TCP_OPTION));

 while(VAR_4 < VAR_2)
 {
  if (VAR_3[VAR_4] == 0)
  {
   return;
  }
  else if (VAR_3[VAR_4] == 1)
  {
   VAR_4++;
   continue;
  }
  else
  {
   VAR_6 = VAR_3[VAR_4];
   VAR_4++;
   if (VAR_4 >= VAR_2)
   {
    return;
   }
   VAR_5 = VAR_3[VAR_4];
   if (VAR_5 <= 1 || VAR_5 > sizeof(VAR_7))
   {
    return;
   }
   VAR_4++;
   if (VAR_4 >= VAR_2)
   {
    return;
   }
   VAR_5 -= 2;

   FUNC_0(VAR_7, &VAR_3[VAR_4], VAR_5);
   VAR_4 += VAR_5;
   if (VAR_4 > VAR_2)
   {
    return;
   }

   switch (VAR_6)
   {
   case 2:
    if (VAR_5 == 2)
    {
     USHORT *VAR_8 = (USHORT *)VAR_7;
     VAR_0->MaxSegmentSize = FUNC_1(*VAR_8);
    }
    break;

   case 3:
    if (VAR_5 == 1)
    {
     UCHAR *VAR_9 = (UCHAR *)VAR_7;
     VAR_0->WindowScaling = *VAR_9;
    }
    break;

   }
  }
 }
}

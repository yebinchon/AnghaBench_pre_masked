
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ IpMss; int NextId; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int *,scalar_t__,int *,int ) ;

void FUNC_2(VH *VAR_1, UINT VAR_2, UINT VAR_3, UCHAR VAR_4, void *VAR_5, UINT VAR_6, UCHAR VAR_7)
{
 UINT VAR_8;
 UCHAR *VAR_9;
 USHORT VAR_10;
 USHORT VAR_11;
 USHORT VAR_12;
 UINT VAR_13;

 if (VAR_1 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 || VAR_6 > VAR_0)
 {
  return;
 }


 VAR_8 = VAR_1->IpMss;


 VAR_9 = (UCHAR *)VAR_5;


 VAR_11 = (VAR_1->NextId++);


 VAR_12 = (USHORT)VAR_6;


 VAR_10 = 0;

 while (1)
 {
  bool VAR_14 = 0;

  VAR_13 = FUNC_0((USHORT)VAR_8, (VAR_12 - VAR_10));
  if ((VAR_10 + (USHORT)VAR_13) == VAR_12)
  {
   VAR_14 = 1;
  }


  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_11,
   VAR_12, VAR_10, VAR_4, VAR_9 + VAR_10, VAR_13, ((void*)0), VAR_7);
  if (VAR_14)
  {
   break;
  }

  VAR_10 += (USHORT)VAR_13;
 }
}

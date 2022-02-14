
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int NextId; TYPE_1__* v; } ;
struct TYPE_5__ {scalar_t__ IpMss; } ;
typedef TYPE_2__ NATIVE_NAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,int ) ;

void FUNC_3(NATIVE_NAT *VAR_1, UCHAR VAR_2, UCHAR VAR_3, UINT VAR_4, UINT VAR_5, void *VAR_6, UINT VAR_7, UINT VAR_8)
{
 UINT VAR_9 = 0;
 UCHAR *VAR_10;
 USHORT VAR_11;
 USHORT VAR_12;
 USHORT VAR_13;
 UINT VAR_14;

 if (VAR_1 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }


 if (VAR_8 > VAR_0)
 {
  VAR_9 = VAR_8 - VAR_0;
 }

 if (VAR_9 == 0)
 {
  VAR_9 = VAR_1->v->IpMss;
 }

 VAR_9 = FUNC_0(VAR_9, 1000);


 VAR_10 = (UCHAR *)VAR_6;


 VAR_12 = (VAR_1->NextId++);


 VAR_13 = (USHORT)VAR_7;


 VAR_11 = 0;

 while (1)
 {
  bool VAR_15 = 0;

  VAR_14 = FUNC_1((USHORT)VAR_9, (VAR_13 - VAR_11));
  if ((VAR_11 + (USHORT)VAR_14) == VAR_13)
  {
   VAR_15 = 1;
  }


  FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5, VAR_12, VAR_13, VAR_11,
   VAR_10 + VAR_11, VAR_14, VAR_3);
  if (VAR_15)
  {
   break;
  }

  VAR_11 += (USHORT)VAR_14;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rand_seed ;
struct TYPE_5__ {scalar_t__ DhcpIpStart; scalar_t__ DhcpIpEnd; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,scalar_t__) ;
 int * FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;

UINT FUNC_8(VH *VAR_0, UCHAR *VAR_1)
{
 UINT VAR_2, VAR_3;
 UINT VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_1(VAR_0->DhcpIpStart);
 VAR_3 = FUNC_1(VAR_0->DhcpIpEnd);

 if (VAR_2 > VAR_3)
 {
  return 0;
 }

 VAR_5 = (VAR_3 - VAR_2 + 1) * 2;
 VAR_5 = FUNC_2(VAR_5, 65536 * 2);

 for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
 {
  UCHAR VAR_6[sizeof(UINT) + 6];
  UCHAR VAR_7[16];
  UINT VAR_8;
  UINT VAR_9;

  FUNC_7(&VAR_6[0], VAR_4);
  FUNC_0(VAR_6 + sizeof(UINT), VAR_1, 6);

  FUNC_3(VAR_7, VAR_6, sizeof(VAR_6));

  VAR_8 = FUNC_4(VAR_7);

  VAR_9 = FUNC_1(VAR_2 + (VAR_8 % (VAR_3 - VAR_2 + 1)));

  if (FUNC_5(VAR_0, VAR_9) == ((void*)0) && FUNC_6(VAR_0, VAR_9) == ((void*)0))
  {

   return VAR_9;
  }
 }


 return 0;
}

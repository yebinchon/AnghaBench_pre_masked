
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_3__ {int Inited; scalar_t__ YourPort; scalar_t__ LastRecvTick; scalar_t__ Now; scalar_t__ FirstStableReceiveTick; scalar_t__ FastDetect; int YourIp; } ;
typedef TYPE_1__ UDP_ACCEL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_1(UDP_ACCEL *VAR_3, bool VAR_4)
{
 UINT64 VAR_5;

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->Inited == 0)
 {
  return 0;
 }

 if (VAR_3->YourPort == 0)
 {
  return 0;
 }

 if (FUNC_0(&VAR_3->YourIp))
 {
  return 0;
 }

 VAR_5 = VAR_0;

 if (VAR_3->FastDetect)
 {
  VAR_5 = VAR_1;
 }

 if (VAR_4)
 {
  if (VAR_3->LastRecvTick == 0 || ((VAR_3->LastRecvTick + VAR_5) < VAR_3->Now))
  {
   VAR_3->FirstStableReceiveTick = 0;
   return 0;
  }
  else
  {
   if ((VAR_3->FirstStableReceiveTick + (UINT64)VAR_2) <= VAR_3->Now)
   {
    return 1;
   }
   else
   {
    return 0;
   }
  }
 }

 return 1;
}

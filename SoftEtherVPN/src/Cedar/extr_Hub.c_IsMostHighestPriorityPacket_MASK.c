
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* TCPHeader; } ;
struct TYPE_7__ {scalar_t__ TypeL3; scalar_t__ TypeL4; scalar_t__ TypeL7; TYPE_2__ L4; } ;
struct TYPE_5__ {int Flag; } ;
typedef int SESSION ;
typedef TYPE_3__ PKT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

bool FUNC_0(SESSION *VAR_9, PKT *VAR_10)
{

 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return 0;
 }

 if (VAR_10->TypeL3 == VAR_0)
 {

  return 1;
 }

 if (VAR_10->TypeL3 == VAR_1)
 {
  if (VAR_10->TypeL4 == VAR_2)
  {

   return 1;
  }

  if (VAR_10->TypeL4 == VAR_3)
  {
   if ((VAR_10->L4.TCPHeader->Flag & VAR_8) || (VAR_10->L4.TCPHeader->Flag & VAR_6)
    || (VAR_10->L4.TCPHeader->Flag & VAR_7))
   {

    return 1;
   }
  }

  if (VAR_10->TypeL4 == VAR_4)
  {
   if (VAR_10->TypeL7 == VAR_5)
   {

    return 1;
   }
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* private; scalar_t__ ppDS; scalar_t__ ppbuf; scalar_t__ ppbufsec; } ;
typedef TYPE_1__ SexyAL_device ;
typedef TYPE_1__ DSFobby ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

int FUNC_5(SexyAL_device *VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->private)
  {
   DSFobby *VAR_1=VAR_0->private;
   if(VAR_1->ppbufsec)
   {
    FUNC_1(VAR_1->ppbufsec);
    FUNC_0(VAR_1->ppbufsec);
   }
   if(VAR_1->ppbuf)
   {
    FUNC_1(VAR_1->ppbuf);
    FUNC_0(VAR_1->ppbuf);
   }
   if(VAR_1->ppDS)
   {
    FUNC_2(VAR_1->ppDS);
   }
   FUNC_3(VAR_0->private);
  }
  FUNC_3(VAR_0);
  FUNC_4(1);
  return(1);
 }
 return(0);
}

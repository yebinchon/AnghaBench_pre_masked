
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int RadiusOptionLock; void* RadiusSecret; void* RadiusRetryInterval; scalar_t__ RadiusServerPort; int * RadiusServerName; } ;
typedef TYPE_1__ HUB ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 () ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,char*,int ) ;

void FUNC_9(HUB *VAR_2, char *VAR_3, UINT VAR_4, char *VAR_5, UINT VAR_6)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2->RadiusOptionLock);
 {
  if (VAR_2->RadiusServerName != ((void*)0))
  {
   FUNC_1(VAR_2->RadiusServerName);
  }

  if (VAR_3 == ((void*)0))
  {
   VAR_2->RadiusServerName = ((void*)0);
   VAR_2->RadiusServerPort = 0;
   VAR_2->RadiusRetryInterval = VAR_0;
   FUNC_2(VAR_2->RadiusSecret);
  }
  else
  {
   VAR_2->RadiusServerName = FUNC_0(VAR_3);
   VAR_2->RadiusServerPort = VAR_4;
   if (VAR_6 == 0)
   {
    VAR_2->RadiusRetryInterval = VAR_0;
   }
   else if (VAR_6 > VAR_1)
   {
    VAR_2->RadiusRetryInterval = VAR_1;
   }
   else
   {
    VAR_2->RadiusRetryInterval = VAR_6;
   }
   FUNC_2(VAR_2->RadiusSecret);

   if (VAR_5 == ((void*)0))
   {
    VAR_2->RadiusSecret = FUNC_4();
   }
   else
   {
    VAR_2->RadiusSecret = FUNC_4();
    FUNC_8(VAR_2->RadiusSecret, VAR_5, FUNC_6(VAR_5));
    FUNC_5(VAR_2->RadiusSecret, 0, 0);
   }
  }
 }
 FUNC_7(VAR_2->RadiusOptionLock);
}

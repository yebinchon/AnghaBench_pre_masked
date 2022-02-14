
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {char* RadiusServerName; char* RadiusSuffixFilter; int RadiusOptionLock; TYPE_1__* RadiusSecret; scalar_t__ RadiusRetryInterval; scalar_t__ RadiusServerPort; } ;
struct TYPE_4__ {int Size; int Buf; } ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (scalar_t__) ;

bool FUNC_6(HUB *VAR_0, char *VAR_1, UINT VAR_2, UINT *VAR_3, char *VAR_4, UINT VAR_5, UINT *VAR_6, char *VAR_7, UINT VAR_8)
{
 bool VAR_9 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0->RadiusOptionLock);
 {
  if (VAR_0->RadiusServerName != ((void*)0))
  {
   char *VAR_10;
   UINT VAR_11;
   FUNC_3(VAR_1, VAR_2, VAR_0->RadiusServerName);
   *VAR_3 = VAR_0->RadiusServerPort;
   *VAR_6 = VAR_0->RadiusRetryInterval;

   VAR_11 = VAR_0->RadiusSecret->Size + 1;
   VAR_10 = FUNC_5(VAR_11);
   FUNC_0(VAR_10, VAR_0->RadiusSecret->Buf, VAR_0->RadiusSecret->Size);
   FUNC_3(VAR_4, VAR_5, VAR_10);
   FUNC_1(VAR_10);

   if (VAR_7 != ((void*)0))
   {
    FUNC_3(VAR_7, VAR_8, VAR_0->RadiusSuffixFilter);
   }

   VAR_9 = 1;
  }
 }
 FUNC_4(VAR_0->RadiusOptionLock);

 return VAR_9;
}

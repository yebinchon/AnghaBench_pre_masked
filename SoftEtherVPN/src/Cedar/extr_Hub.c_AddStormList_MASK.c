
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_8__ {int StormList; } ;
struct TYPE_7__ {int StrictMode; int * MacAddress; int DestIp; int SrcIp; } ;
typedef TYPE_1__ STORM ;
typedef int IP ;
typedef TYPE_2__ HUB_PA ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

STORM *FUNC_3(HUB_PA *VAR_0, UCHAR *VAR_1, IP *VAR_2, IP *VAR_3, bool VAR_4)
{
 STORM *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2(sizeof(STORM));
 if (VAR_2 != ((void*)0))
 {
  FUNC_0(&VAR_5->SrcIp, VAR_2, sizeof(IP));
 }
 if (VAR_3 != ((void*)0))
 {
  FUNC_0(&VAR_5->DestIp, VAR_3, sizeof(IP));
 }
 FUNC_0(VAR_5->MacAddress, VAR_1, 6);
 VAR_5->StrictMode = VAR_4;

 FUNC_1(VAR_0->StormList, VAR_5);

 return VAR_5;
}

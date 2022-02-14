
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Name; } ;
typedef TYPE_1__ UNIX_VLAN ;
typedef size_t UINT ;
struct TYPE_9__ {int UnixVLanList; } ;
struct TYPE_8__ {size_t NumTokens; int * Token; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ CLIENT ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_7(CLIENT *VAR_2, char *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 {
  UNIX_VLAN *VAR_4;
  UINT VAR_5;
  bool VAR_6 = 0;

  FUNC_3(VAR_2->UnixVLanList);
  {
   for (VAR_5 = 0;VAR_5 < FUNC_2(VAR_2->UnixVLanList);VAR_5++)
   {
    VAR_4 = (UNIX_VLAN *)FUNC_1(VAR_2->UnixVLanList, VAR_5);
    if (FUNC_5(VAR_4->Name, VAR_3) == 0)
    {
     VAR_6 = 1;
    }
   }
  }
  FUNC_6(VAR_2->UnixVLanList);

  return VAR_6;
 }

}

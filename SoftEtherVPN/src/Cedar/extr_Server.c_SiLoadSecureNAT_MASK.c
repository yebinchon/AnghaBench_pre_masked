
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VH_OPTION ;
struct TYPE_4__ {int SecureNATOption; } ;
typedef TYPE_1__ HUB ;
typedef int FOLDER ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(HUB *VAR_0, FOLDER *VAR_1)
{
 VH_OPTION VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_3(&VAR_2, VAR_1);


 FUNC_1(VAR_0->SecureNATOption, &VAR_2, sizeof(VH_OPTION));

 FUNC_2(VAR_0, FUNC_0(VAR_1, "Disabled") ? 0 : 1);
}

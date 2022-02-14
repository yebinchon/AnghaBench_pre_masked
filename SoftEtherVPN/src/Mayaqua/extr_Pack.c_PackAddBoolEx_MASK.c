
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int JsonHint_IsBool; } ;
typedef int PACK ;
typedef TYPE_1__ ELEMENT ;


 TYPE_1__* FUNC_0 (int *,char*,int,int ,int ) ;

ELEMENT *FUNC_1(PACK *VAR_0, char *VAR_1, bool VAR_2, UINT VAR_3, UINT VAR_4)
{
 ELEMENT *VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2 ? 1 : 0, VAR_3, VAR_4);
 if (VAR_5 != ((void*)0))
 {
  VAR_5->JsonHint_IsBool = 1;
 }
 return VAR_5;
}

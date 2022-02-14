
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int ZeroFree; int Size; int Magic; } ;
typedef TYPE_1__ MEMTAG ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 void* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void *FUNC_4(UINT VAR_1, bool VAR_2)
{
 MEMTAG *VAR_3;
 UINT VAR_4;

 VAR_4 = FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_4);

 FUNC_3(VAR_3, sizeof(MEMTAG));
 VAR_3->Magic = VAR_0;
 VAR_3->Size = VAR_1;
 VAR_3->ZeroFree = VAR_2;

 return FUNC_2(VAR_3);
}

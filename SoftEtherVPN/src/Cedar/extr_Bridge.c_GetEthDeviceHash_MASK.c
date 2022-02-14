
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_10__ {size_t Num; TYPE_1__** Adapters; } ;
struct TYPE_9__ {size_t NumTokens; int * Token; } ;
struct TYPE_8__ {int Title; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ MS_ADAPTER_LIST ;


 int FUNC_0 (size_t*,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*) ;

UINT FUNC_8()
{
 UINT VAR_1 = 0;
 MS_ADAPTER_LIST *VAR_2 = FUNC_3(1);
 UINT VAR_3;
 UINT VAR_4;
 char VAR_5[4096];
 UCHAR VAR_6[VAR_0];

 VAR_5[0] = 0;
 if (VAR_2 != ((void*)0))
 {
  for (VAR_4 = 0;VAR_4 < VAR_2->Num;VAR_4++)
  {
   FUNC_6(VAR_5, sizeof(VAR_5), VAR_2->Adapters[VAR_4]->Title);
  }
 }
 FUNC_4(VAR_2);

 FUNC_5(VAR_6, VAR_5, FUNC_7(VAR_5));

 FUNC_0(&VAR_3, VAR_6, sizeof(UINT));

 return VAR_3;

}

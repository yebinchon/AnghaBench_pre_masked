
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int * Tap; scalar_t__ IsRawIpMode; } ;
typedef TYPE_1__ ETH ;


 int FUNC_0 (TYPE_1__*,void**) ;
 int FUNC_1 (TYPE_1__*,void**) ;
 int FUNC_2 (TYPE_1__*,void**) ;
 int FUNC_3 (TYPE_1__*,void**) ;
 int FUNC_4 (TYPE_1__*,void**) ;
 int VAR_0 ;
 int FUNC_5 (int *,void**,int *) ;

UINT FUNC_6(ETH *VAR_1, void **VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }
 if (VAR_1->Tap != ((void*)0))
 {


  void *VAR_3;
  UINT VAR_4;

  if (FUNC_5(VAR_1->Tap, &VAR_3, &VAR_4) == 0)
  {
   return VAR_0;
  }

  *VAR_2 = VAR_3;
  return VAR_4;



 }
}

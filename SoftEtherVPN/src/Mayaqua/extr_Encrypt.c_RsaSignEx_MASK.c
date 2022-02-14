
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hash ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int pkey; } ;
typedef TYPE_1__ K ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int,int *,void*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (void*,int) ;

bool FUNC_5(void *VAR_4, void *VAR_5, UINT VAR_6, K *VAR_7, UINT VAR_8)
{
 UCHAR VAR_9[VAR_3];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || FUNC_0(VAR_7->pkey) != VAR_0)
 {
  return 0;
 }
 if (VAR_8 == 0)
 {
  VAR_8 = VAR_1;
 }

 FUNC_4(VAR_4, VAR_8 / 8);


 if (FUNC_2(VAR_9, sizeof(VAR_9), VAR_5, VAR_6) == 0)
 {
  return 0;
 }


 if (FUNC_3(sizeof(VAR_9), VAR_9, VAR_4, FUNC_1(VAR_7->pkey), VAR_2) <= 0)
 {
  return 0;
 }

 return 1;
}

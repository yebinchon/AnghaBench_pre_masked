
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hash_data ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int private_key; int pkey; } ;
typedef int RSA ;
typedef TYPE_1__ K ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,void*,int) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int,void*,int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int * FUNC_7 (int) ;

bool FUNC_8(void *VAR_3, UINT VAR_4, void *VAR_5, K *VAR_6, UINT VAR_7)
{
 UCHAR VAR_8[VAR_2];
 UCHAR *VAR_9;
 RSA *VAR_10;
 UINT VAR_11;

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_6->private_key != 0)
 {
  return 0;
 }
 if (VAR_7 == 0)
 {
  VAR_7 = VAR_0;
 }

 VAR_10 = FUNC_1(VAR_6->pkey);
 if (VAR_10 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_3(VAR_8, sizeof(VAR_8), VAR_3, VAR_4) == 0)
 {
  return 0;
 }

 VAR_11 = FUNC_6(VAR_10);
 VAR_11 = FUNC_4(VAR_11, 1024);
 VAR_9 = FUNC_7(VAR_11);


 if (FUNC_5(VAR_7 / 8, VAR_5, VAR_9, VAR_10, VAR_1) <= 0)
 {
  FUNC_2(VAR_9);
  return 0;
 }


 if (FUNC_0(VAR_9, VAR_8, VAR_2) != 0)
 {
  FUNC_2(VAR_9);
  return 0;
 }

 FUNC_2(VAR_9);

 return 1;
}

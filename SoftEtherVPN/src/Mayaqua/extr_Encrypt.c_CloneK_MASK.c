
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int private_key; } ;
typedef TYPE_1__ K ;
typedef int BUF ;


 TYPE_1__* FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int,int *) ;

K *FUNC_3(K *VAR_0)
{
 BUF *VAR_1;
 K *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_0, 0, ((void*)0));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_1, VAR_0->private_key, 0, ((void*)0));
 FUNC_1(VAR_1);

 return VAR_2;
}

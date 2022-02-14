
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xv_pool {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xv_pool* FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct xv_pool *FUNC_3(void)
{
 u32 VAR_2;
 struct xv_pool *VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_3), VAR_1);
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->lock);

 return VAR_3;
}

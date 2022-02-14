
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_pool {int name; int slab; int mempool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,size_t,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

int FUNC_7(struct i2o_pool *VAR_3, const char *VAR_4,
     size_t VAR_5, int VAR_6)
{
 VAR_3->name = FUNC_1(FUNC_6(VAR_4) + 1, VAR_1);
 if (!VAR_3->name)
  goto exit;
 FUNC_5(VAR_3->name, VAR_4);

 VAR_3->slab =
     FUNC_2(VAR_3->name, VAR_5, 0, VAR_2, ((void*)0));
 if (!VAR_3->slab)
  goto free_name;

 VAR_3->mempool = FUNC_4(VAR_6, VAR_3->slab);
 if (!VAR_3->mempool)
  goto free_slab;

 return 0;

free_slab:
 FUNC_3(VAR_3->slab);

free_name:
 FUNC_0(VAR_3->name);

exit:
 return -VAR_0;
}

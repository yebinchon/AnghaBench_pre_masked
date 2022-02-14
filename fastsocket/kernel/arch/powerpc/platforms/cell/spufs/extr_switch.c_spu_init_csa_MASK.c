
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_state {int register_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct spu_state*) ;
 int FUNC_1 (struct spu_state*) ;
 int FUNC_2 (struct spu_state*) ;
 int FUNC_3 (struct spu_state*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spu_state*) ;

int FUNC_6(struct spu_state *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return -VAR_0;
 FUNC_3(VAR_1, 0, sizeof(struct spu_state));

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_4(&VAR_1->register_lock);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}

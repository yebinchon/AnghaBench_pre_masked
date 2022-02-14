
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_cmd {int iv; } ;
struct netfs_state {int eng; struct netfs_cmd cmd; } ;


 int FUNC_0 (int *,int ,void*,int *,unsigned int) ;
 int FUNC_1 (struct netfs_state*,void*,unsigned int) ;

int FUNC_2(struct netfs_state *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct netfs_cmd *VAR_3 = &VAR_0->cmd;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(&VAR_0->eng, VAR_3->iv, VAR_1, ((void*)0), VAR_2);
}

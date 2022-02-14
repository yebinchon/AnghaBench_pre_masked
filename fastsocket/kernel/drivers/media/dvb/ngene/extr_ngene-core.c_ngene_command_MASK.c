
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene_command {int dummy; } ;
struct ngene {int cmd_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ngene*,struct ngene_command*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ngene *VAR_0, struct ngene_command *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->cmd_mutex);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(&VAR_0->cmd_mutex);
 return VAR_2;
}

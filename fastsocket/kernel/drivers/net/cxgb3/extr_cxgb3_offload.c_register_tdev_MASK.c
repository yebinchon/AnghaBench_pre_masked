
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int ofld_dev_list; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int,char*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct t3cdev *VAR_2)
{
 static int VAR_3;

 FUNC_1(&VAR_0);
 FUNC_3(VAR_2->name, sizeof(VAR_2->name), "ofld_dev%d", VAR_3++);
 FUNC_0(&VAR_2->ofld_dev_list, &VAR_1);
 FUNC_2(&VAR_0);
}

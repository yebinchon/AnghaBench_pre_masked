
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int state; int req_list; int request_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct rndis_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct rndis_device *FUNC_3(void)
{
 struct rndis_device *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct rndis_device), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(&VAR_2->request_lock);

 FUNC_0(&VAR_2->req_list);

 VAR_2->state = VAR_1;

 return VAR_2;
}

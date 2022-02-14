
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_request {int list_ent; } ;
struct rndis_device {int request_lock; } ;


 int FUNC_0 (struct rndis_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct rndis_device *VAR_0,
       struct rndis_request *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->request_lock, VAR_2);
 FUNC_1(&VAR_1->list_ent);
 FUNC_3(&VAR_0->request_lock, VAR_2);

 FUNC_0(VAR_1);
}

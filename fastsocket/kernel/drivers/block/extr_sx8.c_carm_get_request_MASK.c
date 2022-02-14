
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carm_request {int sg; scalar_t__ n_elem; int * port; } ;
struct carm_host {scalar_t__ hw_sg_used; unsigned long long msg_alloc; scalar_t__ n_msgs; struct carm_request* req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static struct carm_request *FUNC_3(struct carm_host *VAR_4)
{
 unsigned int VAR_5;


 if (VAR_4->hw_sg_used >= (VAR_0 - VAR_2))
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if ((VAR_4->msg_alloc & (1ULL << VAR_5)) == 0) {
   struct carm_request *VAR_6 = &VAR_4->req[VAR_5];
   VAR_6->port = ((void*)0);
   VAR_6->n_elem = 0;

   VAR_4->msg_alloc |= (1ULL << VAR_5);
   VAR_4->n_msgs++;

   FUNC_1(VAR_4->n_msgs <= VAR_1);
   FUNC_2(VAR_6->sg, VAR_2);
   return VAR_6;
  }

 FUNC_0("no request available, returning NULL\n");
 return ((void*)0);
}

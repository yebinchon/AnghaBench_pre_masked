
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_list {int rq_pool; int * wait; scalar_t__ elvpriv; scalar_t__* starved; scalar_t__* count; } ;
struct request_queue {int node; struct request_list rq; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_7)
{
 struct request_list *VAR_8 = &VAR_7->rq;

 if (FUNC_2(VAR_8->rq_pool))
  return 0;

 VAR_8->count[VAR_2] = VAR_8->count[VAR_1] = 0;
 VAR_8->starved[VAR_2] = VAR_8->starved[VAR_1] = 0;
 VAR_8->elvpriv = 0;
 FUNC_0(&VAR_8->wait[VAR_2]);
 FUNC_0(&VAR_8->wait[VAR_1]);

 VAR_8->rq_pool = FUNC_1(VAR_0, VAR_4,
    VAR_5, VAR_6, VAR_7->node);

 if (!VAR_8->rq_pool)
  return -VAR_3;

 return 0;
}

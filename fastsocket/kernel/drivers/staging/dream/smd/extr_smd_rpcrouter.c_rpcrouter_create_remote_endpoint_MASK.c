
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rr_remote_endpoint {int list; int quota_lock; int quota_wait; int pid; int cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct rr_remote_endpoint* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rr_remote_endpoint*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(uint32_t VAR_5)
{
 struct rr_remote_endpoint *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_1(sizeof(struct rr_remote_endpoint), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_3(VAR_6, 0, sizeof(struct rr_remote_endpoint));

 VAR_6->cid = VAR_5;
 VAR_6->pid = VAR_2;
 FUNC_0(&VAR_6->quota_wait);
 FUNC_4(&VAR_6->quota_lock);

 FUNC_5(&VAR_4, VAR_7);
 FUNC_2(&VAR_6->list, &VAR_3);
 FUNC_6(&VAR_4, VAR_7);
 return 0;
}

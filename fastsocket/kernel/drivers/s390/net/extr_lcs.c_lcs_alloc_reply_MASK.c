
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_reply {int wait_q; scalar_t__ rc; scalar_t__ received; int sequence_no; int refcnt; } ;
struct lcs_cmd {int sequence_no; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct lcs_reply* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct lcs_reply *
FUNC_4(struct lcs_cmd *VAR_2)
{
 struct lcs_reply *VAR_3;

 FUNC_0(4, VAR_1, "getreply");

 VAR_3 = FUNC_3(sizeof(struct lcs_reply), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(&VAR_3->refcnt,1);
 VAR_3->sequence_no = VAR_2->sequence_no;
 VAR_3->received = 0;
 VAR_3->rc = 0;
 FUNC_2(&VAR_3->wait_q);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_request_reply {int status; int refs; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct ncp_request_reply* FUNC_2 (int,int ) ;

__attribute__((used)) static inline struct ncp_request_reply* FUNC_3(void)
{
 struct ncp_request_reply *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct ncp_request_reply), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->wq);
 FUNC_0(&VAR_2->refs, (1));
 VAR_2->status = VAR_1;

 return VAR_2;
}

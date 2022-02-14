
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int status; int gs; scalar_t__ fsf_req_seq_no; int qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct zfcp_adapter*,char*,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct zfcp_erp_action *VAR_4)
{
 struct zfcp_adapter *VAR_5 = VAR_4->adapter;


 FUNC_4(VAR_5->qdio);
 FUNC_3(VAR_5);
 VAR_5->fsf_req_seq_no = 0;
 FUNC_2(VAR_5->gs);

 FUNC_1(VAR_5, "erascl1", ((void*)0),
           VAR_3, VAR_0);

 FUNC_0(VAR_2 |
     VAR_1, &VAR_5->status);
}

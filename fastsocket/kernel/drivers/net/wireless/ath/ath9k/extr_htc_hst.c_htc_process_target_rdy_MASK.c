
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int target_wait; int tgt_ready; struct htc_endpoint* endpoint; int credit_size; } ;
struct htc_ready_msg {int credit_size; } ;
struct htc_endpoint {int max_msglen; int service_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct htc_target *VAR_3,
       void *VAR_4)
{
 struct htc_endpoint *VAR_5;
 struct htc_ready_msg *VAR_6 = (struct htc_ready_msg *) VAR_4;

 VAR_3->credit_size = FUNC_1(VAR_6->credit_size);

 VAR_5 = &VAR_3->endpoint[VAR_0];
 VAR_5->service_id = VAR_1;
 VAR_5->max_msglen = VAR_2;
 FUNC_0(&VAR_3->tgt_ready);
 FUNC_2(&VAR_3->target_wait);
}

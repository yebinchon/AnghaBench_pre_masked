
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int lock; int req_lim; int free_tx; } ;
struct srp_iu {int list; } ;
typedef enum srp_iu_type { ____Placeholder_srp_iu_type } srp_iu_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct srp_target_port *VAR_1, struct srp_iu *VAR_2,
     enum srp_iu_type VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1->lock, VAR_4);
 FUNC_0(&VAR_2->list, &VAR_1->free_tx);
 if (VAR_3 != VAR_0)
  ++VAR_1->req_lim;
 FUNC_2(&VAR_1->lock, VAR_4);
}

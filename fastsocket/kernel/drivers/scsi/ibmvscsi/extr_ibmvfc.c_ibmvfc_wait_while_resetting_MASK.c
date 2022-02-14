
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ state; scalar_t__ action; int init_wait_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct ibmvfc_host *VAR_7)
{
 long VAR_8 = FUNC_0(VAR_7->init_wait_q,
       ((VAR_7->state == VAR_2 ||
         VAR_7->state == VAR_4 ||
         VAR_7->state == VAR_5) &&
        VAR_7->action == VAR_3),
       (VAR_6 * VAR_1));

 return VAR_8 ? 0 : -VAR_0;
}

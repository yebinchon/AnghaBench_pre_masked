
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {int state; int lock; } ;
typedef enum iser_ib_conn_state { ____Placeholder_iser_ib_conn_state } iser_ib_conn_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iser_conn *VAR_0,
         enum iser_ib_conn_state VAR_1,
         enum iser_ib_conn_state VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->lock);
 if ((VAR_3 = (VAR_0->state == VAR_1)))
  VAR_0->state = VAR_2;
 FUNC_1(&VAR_0->lock);
 return VAR_3;
}

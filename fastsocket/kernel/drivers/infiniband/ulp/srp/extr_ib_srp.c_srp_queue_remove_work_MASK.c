
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {scalar_t__ state; int remove_work; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(struct srp_target_port *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->state != VAR_0) {
  VAR_2->state = VAR_0;
  VAR_3 = 1;
 }
 FUNC_2(&VAR_2->lock);

 if (VAR_3)
  FUNC_0(VAR_1, &VAR_2->remove_work);

 return VAR_3;
}

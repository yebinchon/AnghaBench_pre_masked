
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int connected; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct srp_target_port *VAR_0,
      bool VAR_1)
{
 bool VAR_2 = 0;

 FUNC_0(&VAR_0->lock);
 if (VAR_0->connected != VAR_1) {
  VAR_0->connected = VAR_1;
  VAR_2 = 1;
 }
 FUNC_1(&VAR_0->lock);

 return VAR_2;
}

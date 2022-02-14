
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcport_s {int speed; } ;
typedef enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;

enum bfa_port_speed
FUNC_1(struct bfa_s *VAR_0)
{
 struct bfa_fcport_s *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->speed;
}

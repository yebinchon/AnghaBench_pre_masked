
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip6asfrag {TYPE_2__* ip6af_up; TYPE_1__* ip6af_down; } ;
struct TYPE_4__ {TYPE_1__* ip6af_down; } ;
struct TYPE_3__ {TYPE_2__* ip6af_up; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct ip6asfrag *VAR_2)
{
 FUNC_0(&VAR_1, VAR_0);

 VAR_2->ip6af_up->ip6af_down = VAR_2->ip6af_down;
 VAR_2->ip6af_down->ip6af_up = VAR_2->ip6af_up;
}

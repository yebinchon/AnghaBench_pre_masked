
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6asfrag {struct ip6asfrag* ip6af_down; struct ip6asfrag* ip6af_up; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct ip6asfrag *VAR_2, struct ip6asfrag *VAR_3)
{
 FUNC_0(&VAR_1, VAR_0);

 VAR_2->ip6af_up = VAR_3;
 VAR_2->ip6af_down = VAR_3->ip6af_down;
 VAR_3->ip6af_down->ip6af_up = VAR_2;
 VAR_3->ip6af_down = VAR_2;
}

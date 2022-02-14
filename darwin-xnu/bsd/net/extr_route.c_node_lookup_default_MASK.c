
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {struct radix_node* (* rnh_lookup ) (int *,int *,struct radix_node_head*) ;} ;
struct radix_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct radix_node_head** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct radix_node* FUNC_1 (int *,int *,struct radix_node_head*) ;
 struct radix_node* FUNC_2 (int *,int *,struct radix_node_head*) ;

__attribute__((used)) static struct radix_node *
FUNC_3(int VAR_5)
{
 struct radix_node_head *VAR_6;

 FUNC_0(VAR_5 == VAR_0 || VAR_5 == VAR_1);
 VAR_6 = VAR_2[VAR_5];

 return (VAR_5 == VAR_0 ? VAR_6->rnh_lookup(&VAR_4, ((void*)0), VAR_6) :
     VAR_6->rnh_lookup(&VAR_3, ((void*)0), VAR_6));
}

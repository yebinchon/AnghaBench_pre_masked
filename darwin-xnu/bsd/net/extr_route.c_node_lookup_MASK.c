
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct radix_node_head {struct radix_node* (* rnh_lookup_args ) (struct sockaddr*,struct sockaddr*,struct radix_node_head*,int *,void*) ;} ;
struct radix_node {int rn_flags; } ;
struct matchleaf_arg {unsigned int member_0; } ;
typedef int rn_matchf_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct sockaddr* FUNC_0 (int,struct sockaddr*,struct sockaddr_storage*,unsigned int) ;
 int * VAR_4 ;
 struct radix_node_head** VAR_5 ;
 struct sockaddr* FUNC_1 (struct sockaddr*,struct sockaddr_storage*,unsigned int*) ;
 struct radix_node* FUNC_2 (struct sockaddr*,struct sockaddr*,struct radix_node_head*,int *,void*) ;

__attribute__((used)) static struct radix_node *
FUNC_3(struct sockaddr *VAR_6, struct sockaddr *VAR_7,
    unsigned int VAR_8)
{
 struct radix_node_head *VAR_9;
 struct radix_node *VAR_10;
 struct sockaddr_storage VAR_11, VAR_12;
 int VAR_13 = VAR_6->sa_family;
 struct matchleaf_arg VAR_14 = { VAR_8 };
 rn_matchf_t *VAR_15 = VAR_4;
 void *VAR_16 = &VAR_14;

 if (VAR_13 != VAR_0 && VAR_13 != VAR_1)
  return (((void*)0));

 VAR_9 = VAR_5[VAR_13];





 VAR_6 = FUNC_1(VAR_6, &VAR_11, (VAR_8 == VAR_2) ? ((void*)0) : &VAR_8);


 if (VAR_7 != ((void*)0))
  VAR_7 = FUNC_0(VAR_13, VAR_7, &VAR_12, VAR_8);

 if (VAR_8 == VAR_2)
  VAR_15 = VAR_16 = ((void*)0);

 VAR_10 = VAR_9->rnh_lookup_args(VAR_6, VAR_7, VAR_9, VAR_15, VAR_16);
 if (VAR_10 != ((void*)0) && (VAR_10->rn_flags & VAR_3))
  VAR_10 = ((void*)0);

 return (VAR_10);
}

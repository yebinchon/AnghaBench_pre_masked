
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int rnh_close; int rnh_matchaddr_args; int rnh_matchaddr; int rnh_deladdr; int rnh_addaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void**,int) ;
 int * VAR_6 ;

int
FUNC_2(void **VAR_7, int VAR_8)
{
 struct radix_node_head *VAR_9;


 FUNC_0(VAR_7 != (void **)&VAR_6[VAR_0] || *VAR_7 == ((void*)0));

 if (!FUNC_1(VAR_7, VAR_8))
  return (0);







 if (VAR_7 != (void **)&VAR_6[VAR_0])
  return (1);

 VAR_9 = *VAR_7;
 VAR_9->rnh_addaddr = VAR_1;
 VAR_9->rnh_deladdr = VAR_3;
 VAR_9->rnh_matchaddr = VAR_4;
 VAR_9->rnh_matchaddr_args = VAR_5;
 VAR_9->rnh_close = VAR_2;
 return (1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {scalar_t__ (* rnh_walktree ) (struct radix_node_head*,int ,int *) ;} ;
typedef int nstat_msg_add_all_srcs ;
typedef int nstat_control_state ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int VAR_3 ;
 struct radix_node_head** VAR_4 ;
 scalar_t__ FUNC_4 (struct radix_node_head*,int ,int *) ;

__attribute__((used)) static errno_t
FUNC_5(
 nstat_control_state *VAR_5,
 nstat_msg_add_all_srcs *VAR_6)
{
 int VAR_7;
 errno_t VAR_8 = 0;

 FUNC_1(VAR_3);

 VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (VAR_8 == 0)
 {
  FUNC_0(&VAR_2);

  for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++)
  {
   struct radix_node_head *VAR_9;
   VAR_9 = VAR_4[VAR_7];
   if (!VAR_9) continue;

   VAR_8 = VAR_9->rnh_walktree(VAR_9, VAR_1, VAR_5);
   if (VAR_8 != 0)
   {




    break;
   }
  }
 }
 FUNC_2(VAR_3);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_node {int dummy; } ;
struct fw_card {int generation; int broadcast_channel_allocated; int node_id; int lock; struct fw_node* local_node; int color; int reset_jiffies; scalar_t__ bm_retries; } ;


 struct fw_node* FUNC_0 (struct fw_card*,int *,int) ;
 int FUNC_1 (struct fw_card*,struct fw_node*,int ) ;
 int FUNC_2 (struct fw_card*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct fw_card*,int ) ;
 int FUNC_6 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct fw_card*,int *,int) ;
 int FUNC_11 (struct fw_card*,struct fw_node*) ;

void FUNC_12(struct fw_card *VAR_2, int VAR_3, int VAR_4,
         int VAR_5, u32 *VAR_6)
{
 struct fw_node *VAR_7;
 unsigned long VAR_8;






 if (!FUNC_6(VAR_4, VAR_2->generation) &&
     VAR_2->local_node != ((void*)0)) {
  FUNC_4("skipped bus generations, destroying all nodes\n");
  FUNC_2(VAR_2);
  VAR_2->bm_retries = 0;
 }

 FUNC_8(&VAR_2->lock, VAR_8);

 VAR_2->broadcast_channel_allocated = 0;
 VAR_2->node_id = VAR_3;




 FUNC_7();
 VAR_2->generation = VAR_4;
 VAR_2->reset_jiffies = VAR_0;
 FUNC_5(VAR_2, 0);

 VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);

 FUNC_10(VAR_2, VAR_6, VAR_5);

 VAR_2->color++;

 if (VAR_7 == ((void*)0)) {
  FUNC_3("topology build failed\n");

 } else if (VAR_2->local_node == ((void*)0)) {
  VAR_2->local_node = VAR_7;
  FUNC_1(VAR_2, VAR_7, VAR_1);
 } else {
  FUNC_11(VAR_2, VAR_7);
 }

 FUNC_9(&VAR_2->lock, VAR_8);
}

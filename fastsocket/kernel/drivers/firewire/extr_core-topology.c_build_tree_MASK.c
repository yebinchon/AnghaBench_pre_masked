
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct list_head {struct list_head* prev; } ;
struct TYPE_2__ {struct list_head* next; } ;
struct fw_node {int color; scalar_t__ phy_speed; TYPE_1__ link; struct fw_node** ports; } ;
struct fw_card {size_t color; int node_id; int gap_count; int beta_repeaters_present; struct fw_node* irm_node; struct fw_node* root_node; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct list_head*,struct list_head*) ;
 int * FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (char*,...) ;
 struct fw_node* FUNC_7 (struct list_head*) ;
 struct fw_node* FUNC_8 (int ,int,size_t) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__*,struct list_head*) ;
 int FUNC_11 (struct fw_node*) ;

__attribute__((used)) static struct fw_node *FUNC_12(struct fw_card *VAR_1,
      u32 *VAR_2, int VAR_3)
{
 struct fw_node *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct list_head VAR_8, *VAR_9;
 u32 *VAR_10, *VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 bool VAR_20;

 VAR_6 = ((void*)0);
 VAR_4 = ((void*)0);
 FUNC_0(&VAR_8);
 VAR_18 = 0;
 VAR_11 = VAR_2 + VAR_3;
 VAR_16 = 0;
 VAR_7 = ((void*)0);
 VAR_19 = FUNC_2(*VAR_2);
 VAR_20 = 0;

 while (VAR_2 < VAR_11) {
  VAR_10 = FUNC_5(VAR_2, &VAR_14, &VAR_15);

  if (VAR_10 == ((void*)0)) {
   FUNC_6("Inconsistent extended self IDs.\n");
   return ((void*)0);
  }

  VAR_12 = *VAR_2;
  if (VAR_16 != FUNC_3(VAR_12)) {
   FUNC_6("PHY ID mismatch in self ID: %d != %d.\n",
     VAR_16, FUNC_3(VAR_12));
   return ((void*)0);
  }

  if (VAR_15 > VAR_18) {
   FUNC_6("Topology stack underflow\n");
   return ((void*)0);
  }





  for (VAR_13 = 0, VAR_9 = &VAR_8; VAR_13 < VAR_15; VAR_13++)
   VAR_9 = VAR_9->prev;




  VAR_5 = FUNC_7(VAR_9);

  VAR_4 = FUNC_8(VAR_12, VAR_14, VAR_1->color);
  if (VAR_4 == ((void*)0)) {
   FUNC_6("Out of memory while building topology.\n");
   return ((void*)0);
  }

  if (VAR_16 == (VAR_1->node_id & 0x3f))
   VAR_6 = VAR_4;

  if (FUNC_1(VAR_12))
   VAR_7 = VAR_4;

  VAR_17 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   switch (FUNC_9(VAR_2, VAR_13)) {
   case 128:
    VAR_17++;
    VAR_4->color = VAR_13;
    break;

   case 129:
    VAR_4->ports[VAR_13] = VAR_5;




    VAR_5->ports[VAR_5->color] = VAR_4;
    VAR_5->color = VAR_1->color;
    VAR_5 = FUNC_7(VAR_5->link.next);
    break;
   }
  }






  if ((VAR_10 == VAR_11 && VAR_17 != 0) ||
      (VAR_10 < VAR_11 && VAR_17 != 1)) {
   FUNC_6("Parent port inconsistency for node %d: "
     "parent_count=%d\n", VAR_16, VAR_17);
   return ((void*)0);
  }


  FUNC_4(VAR_9->prev, &VAR_8);
  FUNC_10(&VAR_4->link, &VAR_8);
  VAR_18 += 1 - VAR_15;

  if (VAR_4->phy_speed == VAR_0 &&
      VAR_17 + VAR_15 > 1)
   VAR_20 = 1;





  if (FUNC_2(VAR_12) != VAR_19)
   VAR_19 = 0;

  FUNC_11(VAR_4);

  VAR_2 = VAR_10;
  VAR_16++;
 }

 VAR_1->root_node = VAR_4;
 VAR_1->irm_node = VAR_7;
 VAR_1->gap_count = VAR_19;
 VAR_1->beta_repeaters_present = VAR_20;

 return VAR_6;
}

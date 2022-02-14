
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {scalar_t__ phy_speed; scalar_t__ max_speed; int b_path; } ;
struct fw_card {scalar_t__ bm_retries; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fw_card*,struct fw_node*,int ) ;

__attribute__((used)) static void FUNC_1(struct fw_card *VAR_2,
         struct fw_node *VAR_3, struct fw_node *VAR_4)
{
 int VAR_5 = (VAR_3->phy_speed == VAR_1);

 if (VAR_4 != ((void*)0)) {

  VAR_3->max_speed = VAR_4->max_speed < VAR_3->phy_speed ?
     VAR_4->max_speed : VAR_3->phy_speed;
  VAR_3->b_path = VAR_4->b_path && VAR_5;
 } else {
  VAR_3->max_speed = VAR_3->phy_speed;
  VAR_3->b_path = VAR_5;
 }

 FUNC_0(VAR_2, VAR_3, VAR_0);


 VAR_2->bm_retries = 0;
}

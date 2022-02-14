
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct hfa384x_tx_frame {int frame_control; } ;
struct TYPE_3__ {int sta_tx_exc_list; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_3 (int ,int *,int) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 local_info_t *VAR_1 = (local_info_t *) VAR_0;
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_4(&VAR_1->sta_tx_exc_list)) != ((void*)0)) {
  struct hfa384x_tx_frame *VAR_3 =
   (struct hfa384x_tx_frame *) VAR_2->data;

  if (VAR_2->len >= sizeof(*VAR_3)) {


   int VAR_4 = FUNC_1(VAR_3->frame_control);
   FUNC_3(FUNC_5(VAR_2, sizeof(*VAR_3) - VAR_4),
    &VAR_3->frame_control, VAR_4);

   FUNC_2(VAR_1, VAR_2);
  }
  FUNC_0(VAR_2);
 }
}

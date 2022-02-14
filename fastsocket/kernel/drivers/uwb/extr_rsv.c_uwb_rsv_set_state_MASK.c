
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int unsafe_bm; int bm; int unsafe; int safe; } ;
struct TYPE_7__ {int unsafe_bm; int bm; int unsafe; int safe; } ;
struct uwb_rsv_move {TYPE_4__ companion_mas; TYPE_1__ final_mas; } ;
struct uwb_rsv {int state; int needs_release_companion_mas; TYPE_3__* rc; TYPE_4__ mas; struct uwb_rsv_move mv; } ;
typedef enum uwb_rsv_state { ____Placeholder_uwb_rsv_state } uwb_rsv_state ;
struct TYPE_8__ {int dev; } ;
struct TYPE_9__ {TYPE_2__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (struct uwb_rsv*) ;
 int FUNC_7 (char*,struct uwb_rsv*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct uwb_rsv*,int const) ;
 int FUNC_10 (struct uwb_rsv*) ;

void FUNC_11(struct uwb_rsv *VAR_1, enum uwb_rsv_state VAR_2)
{
 struct uwb_rsv_move *VAR_3 = &VAR_1->mv;

 if (VAR_1->state == VAR_2) {
  switch (VAR_1->state) {
  case 140:
  case 136:
  case 137:
  case 135:
  case 133:
  case 130:
  case 128:
  case 141:
   FUNC_10(VAR_1);
   break;
  default:


   break;
  }
  return;
 }

 FUNC_7("SC", VAR_1);

 switch (VAR_2) {
 case 141:
  FUNC_9(VAR_1, 141);
  FUNC_6(VAR_1);
  break;
 case 139:
  FUNC_9(VAR_1, 139);
  break;
 case 134:
  FUNC_9(VAR_1, 134);
  break;
 case 138:

  FUNC_0(VAR_1->mas.bm, VAR_1->mas.bm, VAR_3->companion_mas.bm, VAR_0);
  FUNC_9(VAR_1, 138);
  break;
 case 140:
  if (VAR_1->state == 138
      || VAR_1->state == 135) {
   FUNC_4(VAR_1->rc, &VAR_3->companion_mas);
   VAR_1->needs_release_companion_mas = 0;
  }
  FUNC_5(VAR_1->rc, &VAR_1->mas);
  FUNC_9(VAR_1, 140);
  FUNC_6(VAR_1);
  break;
 case 136:
  VAR_1->needs_release_companion_mas = 1;
  FUNC_9(VAR_1, 136);
  break;
 case 137:
  VAR_1->needs_release_companion_mas = 0;
  FUNC_5(VAR_1->rc, &VAR_3->companion_mas);
  FUNC_2(VAR_1->mas.bm, VAR_1->mas.bm, VAR_3->companion_mas.bm, VAR_0);
  VAR_1->mas.safe += VAR_3->companion_mas.safe;
  VAR_1->mas.unsafe += VAR_3->companion_mas.unsafe;
  FUNC_9(VAR_1, 137);
  break;
 case 135:
  FUNC_0(VAR_3->companion_mas.bm, VAR_1->mas.bm, VAR_3->final_mas.bm, VAR_0);
  VAR_1->needs_release_companion_mas = 1;
  VAR_1->mas.safe = VAR_3->final_mas.safe;
  VAR_1->mas.unsafe = VAR_3->final_mas.unsafe;
  FUNC_1(VAR_1->mas.bm, VAR_3->final_mas.bm, VAR_0);
  FUNC_1(VAR_1->mas.unsafe_bm, VAR_3->final_mas.unsafe_bm, VAR_0);
  FUNC_9(VAR_1, 135);
  break;
 case 133:
 case 128:
  VAR_1->needs_release_companion_mas = 0;
  FUNC_5(VAR_1->rc, &VAR_1->mas);
  FUNC_9(VAR_1, 133);
  FUNC_6(VAR_1);
  break;
 case 131:
  FUNC_9(VAR_1, 131);
  break;
 case 132:
  FUNC_9(VAR_1, 132);
  break;
 case 129:
  FUNC_9(VAR_1, 129);
  break;
 case 130:
  VAR_1->needs_release_companion_mas = 1;
  FUNC_5(VAR_1->rc, &VAR_3->companion_mas);
  FUNC_9(VAR_1, 130);
  break;
 default:
  FUNC_3(&VAR_1->rc->uwb_dev.dev, "unhandled state: %s (%d)\n",
   FUNC_8(VAR_2), VAR_2);
 }
}

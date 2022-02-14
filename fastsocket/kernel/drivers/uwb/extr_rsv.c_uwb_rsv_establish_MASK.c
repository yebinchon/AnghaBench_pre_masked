
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {int tiebreaker; int * owner; int rc_node; int mas; struct uwb_rc* rc; } ;
struct uwb_rc {int rsvs_mutex; int uwb_dev; int reservations; } ;
struct uwb_mas_bm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uwb_rc*,int *) ;
 int FUNC_6 (struct uwb_rc*,struct uwb_mas_bm*) ;
 int FUNC_7 (struct uwb_rsv*,struct uwb_mas_bm*,int *) ;
 int FUNC_8 (struct uwb_rsv*) ;
 int FUNC_9 (struct uwb_rsv*) ;
 int FUNC_10 (struct uwb_rsv*) ;
 int FUNC_11 (struct uwb_rsv*,int ) ;

int FUNC_12(struct uwb_rsv *VAR_3)
{
 struct uwb_rc *VAR_4 = VAR_3->rc;
 struct uwb_mas_bm VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->rsvs_mutex);
 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6)
  goto out;

 VAR_3->tiebreaker = FUNC_3() & 1;

 FUNC_6(VAR_4, &VAR_5);

 VAR_6 = FUNC_7(VAR_3, &VAR_5, &VAR_3->mas);
 if (VAR_6 == VAR_1) {
  VAR_6 = -VAR_0;
  FUNC_10(VAR_3);
  goto out;
 }

 VAR_6 = FUNC_5(VAR_4, &VAR_3->mas);
 if (VAR_6 != 0) {
  FUNC_10(VAR_3);
  goto out;
 }

 FUNC_8(VAR_3);
 FUNC_0(&VAR_3->rc_node, &VAR_4->reservations);
 VAR_3->owner = &VAR_4->uwb_dev;
 FUNC_4(VAR_3->owner);
 FUNC_11(VAR_3, VAR_2);
out:
 FUNC_2(&VAR_4->rsvs_mutex);
 return VAR_6;
}

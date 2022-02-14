
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int comp_mask; } ;
struct TYPE_8__ {TYPE_1__ sa_hdr; scalar_t__ data; } ;
struct mcast_req {size_t func; int func_list; int group_list; TYPE_3__ sa_mad; } ;
struct TYPE_9__ {int scope_join_state; } ;
struct mcast_group {int state; int prev_state; TYPE_2__* func; TYPE_5__ rec; } ;
struct ib_sa_mcmember_data {int dummy; } ;
struct TYPE_7__ {int num_pend_reqs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,struct ib_sa_mcmember_data*,int ) ;
 int FUNC_1 (struct mcast_group*,size_t,int) ;
 int FUNC_2 (struct mcast_req*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mcast_group*,TYPE_3__*) ;
 int FUNC_5 (size_t,struct mcast_group*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_6(struct mcast_group *VAR_1, u8 VAR_2,
      struct mcast_req *VAR_3)
{
 u8 VAR_4 = VAR_1->rec.scope_join_state & 7;
 int VAR_5 = 0;
 u16 VAR_6;
 struct ib_sa_mcmember_data *VAR_7 = (struct ib_sa_mcmember_data *)VAR_3->sa_mad.data;

 if (VAR_2 == (VAR_4 & VAR_2)) {

  VAR_6 = FUNC_0(&VAR_1->rec, VAR_7, VAR_3->sa_mad.sa_hdr.comp_mask);
  if (!VAR_6)
   FUNC_1(VAR_1, VAR_3->func, VAR_2);

  --VAR_1->func[VAR_3->func].num_pend_reqs;
  FUNC_5(VAR_3->func, VAR_1, &VAR_3->sa_mad, VAR_6);
  FUNC_3(&VAR_3->group_list);
  FUNC_3(&VAR_3->func_list);
  FUNC_2(VAR_3);
  ++VAR_5;
 } else {

  VAR_1->prev_state = VAR_1->state;
  if (FUNC_4(VAR_1, &VAR_3->sa_mad)) {
   --VAR_1->func[VAR_3->func].num_pend_reqs;
   FUNC_3(&VAR_3->group_list);
   FUNC_3(&VAR_3->func_list);
   FUNC_2(VAR_3);
   VAR_5 = 1;
   VAR_1->state = VAR_1->prev_state;
  } else
   VAR_1->state = VAR_0;
 }

 return VAR_5;
}

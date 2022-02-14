
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fc_exch_pool {int lock; } ;
struct fc_exch_mgr {scalar_t__ min_xid; scalar_t__ max_xid; int pool; } ;
struct fc_exch {scalar_t__ xid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fc_exch*) ;
 struct fc_exch* FUNC_1 (struct fc_exch_pool*,scalar_t__) ;
 struct fc_exch_pool* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct fc_exch *FUNC_5(struct fc_exch_mgr *VAR_2, u16 VAR_3)
{
 struct fc_exch_pool *VAR_4;
 struct fc_exch *VAR_5 = ((void*)0);

 if ((VAR_3 >= VAR_2->min_xid) && (VAR_3 <= VAR_2->max_xid)) {
  VAR_4 = FUNC_2(VAR_2->pool, VAR_3 & VAR_0);
  FUNC_3(&VAR_4->lock);
  VAR_5 = FUNC_1(VAR_4, (VAR_3 - VAR_2->min_xid) >> VAR_1);
  if (VAR_5 && VAR_5->xid == VAR_3)
   FUNC_0(VAR_5);
  FUNC_4(&VAR_4->lock);
 }
 return VAR_5;
}

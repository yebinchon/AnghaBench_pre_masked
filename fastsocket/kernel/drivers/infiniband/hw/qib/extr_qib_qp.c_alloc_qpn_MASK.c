
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qpn_map {int page; } ;
struct qib_qpn_table {unsigned int flags; int last; int mask; int nmaps; struct qpn_map* map; int lock; } ;
struct qib_devdata {int n_krcv_queues; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qib_qpn_table*,struct qpn_map*,int,int) ;
 int FUNC_1 (struct qib_qpn_table*,struct qpn_map*) ;
 int FUNC_2 (struct qib_qpn_table*,struct qpn_map*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct qib_devdata *VAR_8, struct qib_qpn_table *VAR_9,
       enum ib_qp_type VAR_10, u8 VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 struct qpn_map *VAR_16;
 u32 VAR_17;

 if (VAR_10 == VAR_5 || VAR_10 == VAR_4) {
  unsigned VAR_18;

  VAR_17 = VAR_10 == VAR_4;
  VAR_18 = 1 << (VAR_17 + 2 * (VAR_11 - 1));
  FUNC_3(&VAR_9->lock);
  if (VAR_9->flags & VAR_18)
   VAR_17 = -VAR_2;
  else
   VAR_9->flags |= VAR_18;
  FUNC_4(&VAR_9->lock);
  goto bail;
 }

 VAR_15 = VAR_9->last + 2;
 if (VAR_15 >= VAR_7)
  VAR_15 = 2;
 if (VAR_9->mask && ((VAR_15 & VAR_9->mask) >> 1) >= VAR_8->n_krcv_queues)
  VAR_15 = (VAR_15 | VAR_9->mask) + 2;
 VAR_13 = VAR_15 & VAR_1;
 VAR_16 = &VAR_9->map[VAR_15 / VAR_0];
 VAR_14 = VAR_9->nmaps - !VAR_13;
 for (VAR_12 = 0;;) {
  if (FUNC_6(!VAR_16->page)) {
   FUNC_1(VAR_9, VAR_16);
   if (FUNC_6(!VAR_16->page))
    break;
  }
  do {
   if (!FUNC_5(VAR_13, VAR_16->page)) {
    VAR_9->last = VAR_15;
    VAR_17 = VAR_15;
    goto bail;
   }
   VAR_13 = FUNC_0(VAR_9, VAR_16, VAR_13,
    VAR_8->n_krcv_queues);
   VAR_15 = FUNC_2(VAR_9, VAR_16, VAR_13);
  } while (VAR_13 < VAR_0 && VAR_15 < VAR_7);





  if (++VAR_12 > VAR_14) {
   if (VAR_9->nmaps == VAR_6)
    break;
   VAR_16 = &VAR_9->map[VAR_9->nmaps++];
   VAR_13 = 0;
  } else if (VAR_16 < &VAR_9->map[VAR_9->nmaps]) {
   ++VAR_16;
   VAR_13 = 0;
  } else {
   VAR_16 = &VAR_9->map[0];
   VAR_13 = 2;
  }
  VAR_15 = FUNC_2(VAR_9, VAR_16, VAR_13);
 }

 VAR_17 = -VAR_3;

bail:
 return VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qpn_map {int n_free; int page; } ;
struct ipath_qp_table {int last; int nmaps; struct qpn_map* map; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qpn_map*,int) ;
 int FUNC_3 (struct ipath_qp_table*,struct qpn_map*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ipath_qp_table*,struct qpn_map*,int) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ipath_qp_table *VAR_8, enum ib_qp_type VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 struct qpn_map *VAR_14;
 u32 VAR_15 = -1;

 if (VAR_9 == VAR_5)
  VAR_15 = 0;
 else if (VAR_9 == VAR_4)
  VAR_15 = 1;

 if (VAR_15 != -1) {
  VAR_14 = &VAR_8->map[0];
  if (FUNC_7(!VAR_14->page)) {
   FUNC_3(VAR_8, VAR_14);
   if (FUNC_7(!VAR_14->page)) {
    VAR_15 = -VAR_3;
    goto bail;
   }
  }
  if (!FUNC_6(VAR_15, VAR_14->page))
   FUNC_0(&VAR_14->n_free);
  else
   VAR_15 = -VAR_2;
  goto bail;
 }

 VAR_13 = VAR_8->last + 1;
 if (VAR_13 >= VAR_7)
  VAR_13 = 2;
 VAR_11 = VAR_13 & VAR_1;
 VAR_14 = &VAR_8->map[VAR_13 / VAR_0];
 VAR_12 = VAR_8->nmaps - !VAR_11;
 for (VAR_10 = 0;;) {
  if (FUNC_7(!VAR_14->page)) {
   FUNC_3(VAR_8, VAR_14);
   if (FUNC_7(!VAR_14->page))
    break;
  }
  if (FUNC_4(FUNC_1(&VAR_14->n_free))) {
   do {
    if (!FUNC_6(VAR_11, VAR_14->page)) {
     FUNC_0(&VAR_14->n_free);
     VAR_8->last = VAR_13;
     VAR_15 = VAR_13;
     goto bail;
    }
    VAR_11 = FUNC_2(VAR_14, VAR_11);
    VAR_13 = FUNC_5(VAR_8, VAR_14, VAR_11);
   } while (VAR_11 < VAR_0 && VAR_13 < VAR_7);
  }





  if (++VAR_10 > VAR_12) {
   if (VAR_8->nmaps == VAR_6)
    break;
   VAR_14 = &VAR_8->map[VAR_8->nmaps++];
   VAR_11 = 0;
  } else if (VAR_14 < &VAR_8->map[VAR_8->nmaps]) {
   ++VAR_14;
   VAR_11 = 0;
  } else {
   VAR_14 = &VAR_8->map[0];
   VAR_11 = 2;
  }
  VAR_13 = FUNC_5(VAR_8, VAR_14, VAR_11);
 }

 VAR_15 = -VAR_3;

bail:
 return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf {int lf_start; int lf_end; scalar_t__ lf_id; struct lockf* lf_next; } ;
typedef int overlap_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct lockf* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,struct lockf*) ;
 int VAR_10 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static overlap_t
FUNC_3(struct lockf *VAR_11, struct lockf *VAR_12, int VAR_13,
        struct lockf ***VAR_14, struct lockf **VAR_15)
{
 off_t VAR_16, VAR_17;
 int VAR_18 = 0;

 *VAR_15 = VAR_11;
 if (VAR_11 == VAR_1)
  return (0);




 VAR_16 = VAR_12->lf_start;
 VAR_17 = VAR_12->lf_end;
 while (VAR_11 != VAR_1) {
  if (((VAR_13 & VAR_9) && VAR_11->lf_id != VAR_12->lf_id) ||
      ((VAR_13 & VAR_2) && VAR_11->lf_id == VAR_12->lf_id)) {
   if ((VAR_13 & VAR_9) && VAR_18) {
    return VAR_7;
   }

   *VAR_14 = &VAR_11->lf_next;
   *VAR_15 = VAR_11 = VAR_11->lf_next;
   continue;
  }

  if ((VAR_13 & VAR_9)) {
   VAR_18 = 1;
  }
  if ((VAR_11->lf_end != -1 && VAR_16 > VAR_11->lf_end) ||
      (VAR_17 != -1 && VAR_11->lf_start > VAR_17)) {

   FUNC_0(VAR_0, "no overlap\n");





   if ((VAR_13 & VAR_9) && VAR_17 != -1 && VAR_11->lf_start > VAR_17)
    return (VAR_7);
   *VAR_14 = &VAR_11->lf_next;
   *VAR_15 = VAR_11 = VAR_11->lf_next;
   continue;
  }
  if ((VAR_11->lf_start == VAR_16) && (VAR_11->lf_end == VAR_17)) {
   FUNC_0(VAR_0, "overlap == lock\n");
   return (VAR_6);
  }
  if ((VAR_11->lf_start <= VAR_16) &&
      (VAR_17 != -1) &&
      ((VAR_11->lf_end >= VAR_17) || (VAR_11->lf_end == -1))) {
   FUNC_0(VAR_0, "overlap contains lock\n");
   return (VAR_4);
  }
  if (VAR_16 <= VAR_11->lf_start &&
             (VAR_17 == -1 ||
      (VAR_11->lf_end != -1 && VAR_17 >= VAR_11->lf_end))) {
   FUNC_0(VAR_0, "lock contains overlap\n");
   return (VAR_3);
  }
  if ((VAR_11->lf_start < VAR_16) &&
   ((VAR_11->lf_end >= VAR_16) || (VAR_11->lf_end == -1))) {
   FUNC_0(VAR_0, "overlap starts before lock\n");
   return (VAR_8);
  }
  if ((VAR_11->lf_start > VAR_16) &&
   (VAR_17 != -1) &&
   ((VAR_11->lf_end > VAR_17) || (VAR_11->lf_end == -1))) {
   FUNC_0(VAR_0, "overlap ends after lock\n");
   return (VAR_5);
  }
  FUNC_2("lf_findoverlap: default");
 }
 return (VAR_7);
}

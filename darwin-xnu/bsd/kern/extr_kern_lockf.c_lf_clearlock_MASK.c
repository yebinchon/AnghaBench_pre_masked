
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf {scalar_t__ lf_type; scalar_t__ lf_boosted; int lf_end; int lf_start; struct lockf* lf_next; struct lockf** lf_head; } ;
typedef int overlap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lockf*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lockf* VAR_6 ;






 int VAR_7 ;
 int FUNC_1 (struct lockf*) ;
 int FUNC_2 (struct lockf*,struct lockf*,int ,struct lockf***,struct lockf**) ;
 int FUNC_3 (char*,struct lockf*) ;
 int FUNC_4 (char*,struct lockf*) ;
 int FUNC_5 (struct lockf*,struct lockf*) ;
 int FUNC_6 (struct lockf*,int ) ;
 int VAR_8 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct lockf *VAR_9)
{
 struct lockf **VAR_10 = VAR_9->lf_head;
 struct lockf *VAR_11 = *VAR_10;
 struct lockf *VAR_12, **VAR_13;
 overlap_t VAR_14;

 if (VAR_11 == VAR_6)
  return (0);






 VAR_13 = VAR_10;
 while ((VAR_14 = FUNC_2(VAR_11, VAR_9, VAR_7, &VAR_13, &VAR_12)) != 129) {



         FUNC_6(VAR_12, VAR_1);






  switch (VAR_14) {
  case 129:
   break;

  case 130:
   *VAR_13 = VAR_12->lf_next;
   FUNC_0(VAR_12, VAR_5);
   break;

  case 132:
   if (VAR_12->lf_start == VAR_9->lf_start) {
    VAR_12->lf_start = VAR_9->lf_end + 1;
    break;
   }




   if (FUNC_5(VAR_12, VAR_9))
    return (VAR_0);
   VAR_12->lf_next = VAR_9->lf_next;
   break;

  case 133:
   *VAR_13 = VAR_12->lf_next;
   VAR_11 = VAR_12->lf_next;
   FUNC_0(VAR_12, VAR_5);
   continue;

  case 128:
   VAR_12->lf_end = VAR_9->lf_start - 1;
   VAR_13 = &VAR_12->lf_next;
   VAR_11 = VAR_12->lf_next;
   continue;

  case 131:
   VAR_12->lf_start = VAR_9->lf_end + 1;
   break;
  }
  break;
 }




 return (0);
}

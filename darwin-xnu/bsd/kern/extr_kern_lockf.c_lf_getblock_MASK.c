
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lockf {int lf_flags; scalar_t__ lf_type; int lf_owner; struct lockf* lf_next; struct lockf** lf_head; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct lockf* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct lockf*,struct lockf*,int ,struct lockf***,struct lockf**) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct lockf *
FUNC_2(struct lockf *VAR_6, pid_t VAR_7)
{
 struct lockf **VAR_8, *VAR_9, *VAR_10 = *(VAR_6->lf_head);

 for (VAR_8 = VAR_6->lf_head;
     FUNC_0(VAR_10, VAR_6, VAR_4, &VAR_8, &VAR_9) != VAR_5;
     VAR_10 = VAR_9->lf_next) {







  if (VAR_7 != -1 &&
      (VAR_9->lf_flags & (VAR_1|VAR_0)) != 0 &&
      FUNC_1(VAR_9->lf_owner) != VAR_7)
   continue;




  if ((VAR_6->lf_type == VAR_2 || VAR_9->lf_type == VAR_2))
   return (VAR_9);
 }
 return (VAR_3);
}

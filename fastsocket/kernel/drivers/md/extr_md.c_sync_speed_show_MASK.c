
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ curr_resync; unsigned long curr_mark_cnt; unsigned long resync_mark; unsigned long resync_mark_cnt; int recovery_active; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 unsigned long VAR_1 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_2, char *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 if (VAR_2->curr_resync == 0)
  return FUNC_1(VAR_3, "none\n");
 VAR_4 = VAR_2->curr_mark_cnt - FUNC_0(&VAR_2->recovery_active);
 VAR_5 = (VAR_1 - VAR_2->resync_mark) / VAR_0;
 if (!VAR_5) VAR_5++;
 VAR_6 = VAR_4 - VAR_2->resync_mark_cnt;
 return FUNC_1(VAR_3, "%lu\n", VAR_6/VAR_5/2);
}

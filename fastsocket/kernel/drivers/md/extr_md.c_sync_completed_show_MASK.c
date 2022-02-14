
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int curr_resync; unsigned long long resync_max_sectors; unsigned long long dev_sectors; unsigned long long curr_resync_completed; int recovery; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_3, char *VAR_4)
{
 unsigned long long VAR_5, VAR_6;

 if (!FUNC_1(VAR_1, &VAR_3->recovery))
  return FUNC_0(VAR_4, "none\n");

 if (VAR_3->curr_resync == 1 ||
     VAR_3->curr_resync == 2)
  return FUNC_0(VAR_4, "delayed\n");

 if (FUNC_1(VAR_2, &VAR_3->recovery) ||
     FUNC_1(VAR_0, &VAR_3->recovery))
  VAR_5 = VAR_3->resync_max_sectors;
 else
  VAR_5 = VAR_3->dev_sectors;

 VAR_6 = VAR_3->curr_resync_completed;
 return FUNC_0(VAR_4, "%llu / %llu\n", VAR_6, VAR_5);
}

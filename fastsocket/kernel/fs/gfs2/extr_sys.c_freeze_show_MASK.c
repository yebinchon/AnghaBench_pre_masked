
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {unsigned int sd_freeze_count; int sd_freeze_lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_1, char *VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(&VAR_1->sd_freeze_lock);
 VAR_3 = VAR_1->sd_freeze_count;
 FUNC_1(&VAR_1->sd_freeze_lock);

 return FUNC_2(VAR_2, VAR_0, "%u\n", VAR_3);
}

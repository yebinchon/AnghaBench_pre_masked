
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {int gt_spin; } ;
struct gfs2_sbd {struct gfs2_tune sd_tune; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct gfs2_sbd *VAR_3, unsigned int *VAR_4,
   int VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct gfs2_tune *VAR_8 = &VAR_3->sd_tune;
 unsigned int VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_6, ((void*)0), 0);

 if (VAR_5 && !VAR_9)
  return -VAR_2;

 FUNC_2(&VAR_8->gt_spin);
 *VAR_4 = VAR_9;
 FUNC_3(&VAR_8->gt_spin);
 return VAR_7;
}

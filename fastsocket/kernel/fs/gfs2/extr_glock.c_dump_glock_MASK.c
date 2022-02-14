
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct gfs2_glock {int gl_spin; } ;


 int FUNC_0 (struct seq_file*,struct gfs2_glock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, struct gfs2_glock *VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_1->gl_spin);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->gl_spin);
 return VAR_2;
}

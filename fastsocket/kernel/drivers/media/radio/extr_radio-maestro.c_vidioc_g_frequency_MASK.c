
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct maestro {int lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct maestro*) ;
 struct maestro* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
     struct v4l2_frequency *VAR_3)
{
 struct maestro *VAR_4 = FUNC_4(VAR_1);

 VAR_3->type = VAR_0;
 FUNC_1(&VAR_4->lock);
 VAR_3->frequency = FUNC_0(FUNC_3(VAR_4));
 FUNC_2(&VAR_4->lock);
 return 0;
}

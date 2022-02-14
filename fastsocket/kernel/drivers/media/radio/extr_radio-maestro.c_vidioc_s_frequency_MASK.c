
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ frequency; } ;
struct maestro {int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct maestro*,int ) ;
 struct maestro* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
     struct v4l2_frequency *VAR_5)
{
 struct maestro *VAR_6 = FUNC_4(VAR_3);

 if (VAR_5->frequency < VAR_2 || VAR_5->frequency > VAR_1)
  return -VAR_0;
 FUNC_1(&VAR_6->lock);
 FUNC_3(VAR_6, FUNC_0(VAR_5->frequency));
 FUNC_2(&VAR_6->lock);
 return 0;
}

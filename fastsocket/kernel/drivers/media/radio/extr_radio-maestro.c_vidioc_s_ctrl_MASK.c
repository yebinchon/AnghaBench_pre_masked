
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct v4l2_control {int id; int value; } ;
struct maestro {int lock; int muted; scalar_t__ io; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 struct maestro* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, void *VAR_4,
     struct v4l2_control *VAR_5)
{
 struct maestro *VAR_6 = FUNC_6(VAR_3);
 u16 VAR_7 = VAR_6->io;
 u16 VAR_8;

 switch (VAR_5->id) {
 case 128:
  FUNC_2(&VAR_6->lock);
  VAR_8 = FUNC_0(VAR_7 + VAR_1);
  FUNC_4(~VAR_2, VAR_7 + VAR_1);
  VAR_6->muted = VAR_5->value;
  FUNC_4(VAR_6->muted ? VAR_2 : 0, VAR_7);
  FUNC_5(4);
  FUNC_4(VAR_8, VAR_7 + VAR_1);
  FUNC_1(125);
  FUNC_3(&VAR_6->lock);
  return 0;
 }
 return -VAR_0;
}

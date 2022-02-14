
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int flags; int cdev; scalar_t__ line_pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct raw3215_info *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->flags & VAR_0)
  return 0;
 VAR_1->line_pos = 0;
 VAR_1->flags |= VAR_0;
 FUNC_2(FUNC_0(VAR_1->cdev), VAR_2);
 FUNC_1(VAR_1);
 FUNC_3(FUNC_0(VAR_1->cdev), VAR_2);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_handler_data {int op; int work; int device; } ;
struct tape_device {int dummy; } ;
typedef enum tape_op { ____Placeholder_tape_op } tape_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct work_handler_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct tape_device*) ;

__attribute__((used)) static int
FUNC_4(struct tape_device *VAR_3, enum tape_op VAR_4)
{
 struct work_handler_data *VAR_5;

 if ((VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1)) == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_5->work, VAR_2);

 VAR_5->device = FUNC_3(VAR_3);
 VAR_5->op = VAR_4;

 FUNC_2(&VAR_5->work);
 return 0;
}

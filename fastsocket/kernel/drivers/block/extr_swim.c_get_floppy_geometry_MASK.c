
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_struct {int dummy; } ;
struct floppy_state {scalar_t__ type; int head_number; } ;


 int FUNC_0 (struct floppy_struct*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct floppy_struct* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct floppy_state *VAR_3, int VAR_4,
          struct floppy_struct **VAR_5)
{
 if (VAR_4 >= FUNC_0(VAR_2))
  return -VAR_0;

 if (VAR_4)
  *VAR_5 = &VAR_2[VAR_4];
 else if (VAR_3->type == VAR_1)
  *VAR_5 = &VAR_2[3];
 else if (VAR_3->head_number == 2)
  *VAR_5 = &VAR_2[2];
 else
  *VAR_5 = &VAR_2[1];

 return 0;
}

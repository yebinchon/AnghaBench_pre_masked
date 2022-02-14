
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_struct {int com; struct op_struct* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct op_struct*,int ,int) ;
 struct op_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct op_struct *FUNC_4(void)
{
 struct op_struct *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_1, VAR_3);
 VAR_2 = VAR_0;
 if (VAR_2)
  VAR_0 = VAR_2->next;
 FUNC_3(&VAR_1, VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_2, 0, sizeof(*VAR_2));
  FUNC_0(&VAR_2->com);
 }

 return VAR_2;
}

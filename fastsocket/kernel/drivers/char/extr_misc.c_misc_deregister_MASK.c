
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miscdevice {int minor; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct miscdevice *VAR_6)
{
 int VAR_7 = VAR_6->minor;

 if (FUNC_3(&VAR_6->list))
  return -VAR_1;

 FUNC_4(&VAR_5);
 FUNC_2(&VAR_6->list);
 FUNC_1(VAR_3, FUNC_0(VAR_2, VAR_6->minor));
 if (VAR_7 < VAR_0 && VAR_7>0) {
  VAR_4[VAR_7>>3] &= ~(1 << (VAR_6->minor & 7));
 }
 FUNC_5(&VAR_5);
 return 0;
}

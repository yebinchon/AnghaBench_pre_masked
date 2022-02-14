
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct task_struct *VAR_2)
{

 unsigned long VAR_3 = FUNC_0(VAR_2, VAR_0);

 if (VAR_3 & 0x1) {
  unsigned long VAR_4 = FUNC_0(VAR_2, VAR_1);


  if (VAR_4) {



   VAR_3 = VAR_4;
  } else {


   VAR_3 += FUNC_1(VAR_2, VAR_3 & ~1) - 1;
  }
 }
 return VAR_3;
}

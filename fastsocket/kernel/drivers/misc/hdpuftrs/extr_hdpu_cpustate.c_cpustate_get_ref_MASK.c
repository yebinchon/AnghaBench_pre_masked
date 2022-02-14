
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int excl; int lock; scalar_t__ open_count; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{

 int VAR_3 = -VAR_0;

 FUNC_0(&VAR_1.lock);

 if (VAR_1.excl)
  goto out_busy;

 if (VAR_2) {
  if (VAR_1.open_count)
   goto out_busy;
  VAR_1.excl = 1;
 }

 VAR_1.open_count++;
 VAR_3 = 0;

      out_busy:
 FUNC_1(&VAR_1.lock);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_2__ {int cyl; int head; int sect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (char const*,char*,int*,int*,int*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_6, struct kernel_param *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14 = 1;



 if (FUNC_0(VAR_6, "%d.%d:%d,%d,%d", &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12) != 5 &&
     FUNC_0(VAR_6, "%d.%d:%d", &VAR_8, &VAR_9, &VAR_14) != 3)
  return -VAR_0;

 VAR_13 = VAR_8 * VAR_2 + VAR_9;

 if (VAR_13 >= VAR_3 * VAR_2 || VAR_14 < 0 || VAR_14 > 1)
  return -VAR_0;

 if (VAR_10 > VAR_1 || VAR_11 > 255 || VAR_12 > 255)
  return -VAR_0;

 if (VAR_14)
  VAR_4 |= (1 << VAR_13);
 else
  VAR_4 &= ~(1 << VAR_13);

 VAR_5[VAR_13].cyl = VAR_10;
 VAR_5[VAR_13].head = VAR_11;
 VAR_5[VAR_13].sect = VAR_12;

 return 0;
}

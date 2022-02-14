
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int enable_read_ahead; scalar_t__ FAD; int error_flag; scalar_t__ num_sectors_read; int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,int ,int) ;

int FUNC_4(u32 VAR_2, void *VAR_3) {
 for (;;)
 {
  FUNC_0(&VAR_1);
  if ((volatile)VAR_0.enable_read_ahead == 0)
  {
   if (VAR_0.FAD == VAR_2)
   {
    int VAR_4;
    FUNC_3(VAR_3, VAR_0.data, 2352);
    VAR_4 = VAR_0.error_flag;
    FUNC_1(&VAR_1);
    return VAR_4;
   }
   else
   {
    VAR_0.FAD = VAR_2;
    VAR_0.num_sectors_read = 0;
    VAR_0.error_flag = 0;
    VAR_0.enable_read_ahead = 1;
   }
  }
  FUNC_1(&VAR_1);
  FUNC_2();
 }
}

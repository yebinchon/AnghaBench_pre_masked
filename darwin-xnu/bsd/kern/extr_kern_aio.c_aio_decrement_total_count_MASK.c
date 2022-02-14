
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aio_total_count; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2()
{
 int VAR_1 = FUNC_0(&VAR_0.aio_total_count);
 if (VAR_1 <= 0) {
  FUNC_1("Negative total AIO count!\n");
 }

 return VAR_1;
}

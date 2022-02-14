
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fd; scalar_t__ sync; } ;
typedef TYPE_1__ omapfb_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_5(omapfb_data_t *VAR_1, int VAR_2, int VAR_3)
{
   if (VAR_1->sync)
      FUNC_0(VAR_1->fd, VAR_0);

   if (FUNC_3(VAR_1, VAR_2, VAR_3) != 0)
      return -1;

   if (FUNC_4(VAR_1, VAR_2, VAR_3) != 0 ||
         FUNC_2(VAR_1) != 0 ||
         FUNC_1(VAR_1) != 0)
      return -1;

   return 0;
}

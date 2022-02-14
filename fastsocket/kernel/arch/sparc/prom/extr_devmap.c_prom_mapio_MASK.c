
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* (* v2_dumb_mmap ) (char*,int,unsigned int,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ pv_v2devops; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 char* FUNC_3 (char*,int,unsigned int,unsigned int) ;

char *
FUNC_4(char *VAR_2, int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 char *VAR_7;

 FUNC_1(&VAR_0, VAR_6);
 if((VAR_5 == 0) || (VAR_4 == 0)) VAR_7 = (char *) 0x0;
 else
 VAR_7 = (*(VAR_1->pv_v2devops.v2_dumb_mmap))(VAR_2, VAR_3, VAR_4,
          VAR_5);
 FUNC_0();
 FUNC_2(&VAR_0, VAR_6);
 return VAR_7;
}

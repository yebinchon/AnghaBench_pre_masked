
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci1394_iso_tasklet {int type; int link; int tasklet; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_2(struct ohci1394_iso_tasklet *VAR_0, int VAR_1,
          void (*VAR_2)(unsigned long), unsigned long VAR_3)
{
 FUNC_1(&VAR_0->tasklet, VAR_2, VAR_3);
 VAR_0->type = VAR_1;


 FUNC_0(&VAR_0->link);
}

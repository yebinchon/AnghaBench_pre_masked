
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
struct device_pager {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int,int,int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(void)
{
 vm_size_t VAR_8;

 VAR_8 = (vm_size_t) sizeof(struct device_pager);
 VAR_7 = FUNC_3(VAR_8, (vm_size_t) VAR_1*VAR_8,
    VAR_2, "device node pager structures");
 FUNC_4(VAR_7, VAR_3, VAR_0);

 FUNC_1(&VAR_6);
 FUNC_2(&VAR_5, "device_pager", &VAR_6);
 FUNC_0(&VAR_4);

 return;
}

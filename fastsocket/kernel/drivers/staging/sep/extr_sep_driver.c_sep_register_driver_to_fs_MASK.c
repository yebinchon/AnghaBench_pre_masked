
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4 = FUNC_0(&VAR_2, 0, 1, "sep_sec_driver");
 if (VAR_4) {
  FUNC_3("sep: major number allocation failed, retval is %d\n",
        VAR_4);
  return VAR_4;
 }

 FUNC_2(&VAR_1, &VAR_3);
 VAR_1.owner = VAR_0;


 VAR_4 = FUNC_1(&VAR_1, VAR_2, 1);
 if (VAR_4) {
  FUNC_3("sep_driver:cdev_add failed, retval is %d\n", VAR_4);

  FUNC_4(VAR_2, 1);
 }
 return VAR_4;
}

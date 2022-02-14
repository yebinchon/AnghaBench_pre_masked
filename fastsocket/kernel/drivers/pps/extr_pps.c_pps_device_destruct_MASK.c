
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_device {int id; int cdev; } ;
struct device {int id; int cdev; } ;


 int FUNC_0 (int *) ;
 struct pps_device* FUNC_1 (struct pps_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pps_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2)
{
 struct pps_device *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->cdev);


 FUNC_6("deallocating pps%d\n", VAR_3->id);
 FUNC_4(&VAR_1);
 FUNC_2(&VAR_0, VAR_3->id);
 FUNC_5(&VAR_1);

 FUNC_3(VAR_2);
 FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_driver {int integrated_id; } ;


 int FUNC_0 (struct mca_driver*) ;

int FUNC_1(struct mca_driver *VAR_0,
       int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  VAR_0->integrated_id = VAR_1;

 return VAR_2;
}

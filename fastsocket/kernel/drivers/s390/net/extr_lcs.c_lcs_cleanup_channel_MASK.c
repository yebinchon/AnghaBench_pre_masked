
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_channel {int irq_tasklet; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct lcs_channel*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct lcs_channel *VAR_1)
{
 FUNC_0(3, VAR_0, "cleanch");

 FUNC_2(&VAR_1->irq_tasklet);

 FUNC_1(VAR_1);
}

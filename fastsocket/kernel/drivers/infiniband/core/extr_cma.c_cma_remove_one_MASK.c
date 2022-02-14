
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct cma_device {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct cma_device*) ;
 struct cma_device* FUNC_1 (struct ib_device*,int *) ;
 int FUNC_2 (struct cma_device*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_2)
{
 struct cma_device *VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_0);
 if (!VAR_3)
  return;

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {scalar_t__ transmission_enabled; } ;


 int FUNC_0 (struct b3dfg_dev*) ;
 int FUNC_1 (struct b3dfg_dev*) ;

__attribute__((used)) static int FUNC_2(struct b3dfg_dev *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1 && !VAR_0->transmission_enabled)
  VAR_2 = FUNC_1(VAR_0);
 else if (!VAR_1 && VAR_0->transmission_enabled)
  FUNC_0(VAR_0);

 return VAR_2;
}

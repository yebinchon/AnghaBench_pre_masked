
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct oxu_info {TYPE_1__** hcd; } ;
struct TYPE_2__ {unsigned long rsrc_start; unsigned long rsrc_len; void* regs; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct oxu_info*) ;
 int FUNC_2 (struct platform_device*,TYPE_1__*) ;
 struct oxu_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct oxu_info *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2 = VAR_1->hcd[0]->rsrc_start,
   VAR_3 = VAR_1->hcd[0]->rsrc_len;
 void *VAR_4 = VAR_1->hcd[0]->regs;

 FUNC_2(VAR_0, VAR_1->hcd[0]);
 FUNC_2(VAR_0, VAR_1->hcd[1]);

 FUNC_0(VAR_4);
 FUNC_5(VAR_2, VAR_3);

 FUNC_1(VAR_1);
 FUNC_4(VAR_0, ((void*)0));

 return 0;
}

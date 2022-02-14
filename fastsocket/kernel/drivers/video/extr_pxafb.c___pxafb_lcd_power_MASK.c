
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int var; } ;
struct pxafb_info {TYPE_1__ fb; int (* lcd_power ) (int,int *) ;} ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct pxafb_info *VAR_0, int VAR_1)
{
 FUNC_0("pxafb: LCD power o%s\n", VAR_1 ? "n" : "ff");

 if (VAR_0->lcd_power)
  VAR_0->lcd_power(VAR_1, &VAR_0->fb.var);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {int lut; int addr; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_4 (unsigned int VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, unsigned int VAR_4,
    struct fb_info *VAR_5)
{
 unsigned long VAR_6;

 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 FUNC_1(VAR_6);


 FUNC_3(VAR_1, &VAR_0->addr);
 FUNC_2();


 FUNC_3(VAR_2, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_3, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_4, &VAR_0->lut);

 FUNC_0(VAR_6);
 return 0;
}

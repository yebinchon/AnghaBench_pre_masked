
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct matrox_fb_info {int dummy; } ;
struct TYPE_3__ {int default_value; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int * FUNC_0 (struct matrox_fb_info*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct matrox_fb_info *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  *FUNC_0(VAR_2, VAR_3) = VAR_1[VAR_3].desc.default_value;
 }
}

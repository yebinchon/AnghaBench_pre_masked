
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; int contrast; } ;
struct TYPE_4__ {TYPE_1__ tvo_params; } ;
struct matrox_fb_info {TYPE_2__ altout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int ) ;

__attribute__((used)) static void FUNC_2(const struct matrox_fb_info *VAR_2, int *VAR_3,
     int *VAR_4)
{
 const int VAR_5 = VAR_2->altout.tvo_params.brightness + VAR_0;
 const int VAR_6 = VAR_2->altout.tvo_params.contrast;

 *VAR_3 = FUNC_0(VAR_5 - VAR_6, VAR_0);
 *VAR_4 = FUNC_1(VAR_5 + VAR_6, VAR_1);
}

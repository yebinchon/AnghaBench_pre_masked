
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;


 TYPE_1__* FUNC_0 () ;
 unsigned int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(double *VAR_0, double *VAR_1)
{
 VIDEOMODE_resolution_t *VAR_2 = FUNC_0();
 unsigned int VAR_3 = FUNC_1(VAR_2->width, VAR_2->height);
 *VAR_0 = (double)VAR_2->width / VAR_3;
 *VAR_1 = (double)VAR_2->height / VAR_3;
}

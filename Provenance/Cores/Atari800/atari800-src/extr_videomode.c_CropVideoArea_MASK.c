
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(VIDEOMODE_resolution_t const *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4, double VAR_5, double VAR_6)
{
 if (VAR_1 > VAR_2->width) {
  VAR_1 = VAR_2->width;
  *VAR_3 = (double)VAR_1 / VAR_5;
 }
 if (VAR_0 > VAR_2->height) {
  VAR_0 = VAR_2->height;
  *VAR_4 = (double)VAR_0 / VAR_6;
 }
}

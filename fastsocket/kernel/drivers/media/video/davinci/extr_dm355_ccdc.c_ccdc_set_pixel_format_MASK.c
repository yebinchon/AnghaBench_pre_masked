
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ccdc_a_law {int enable; } ;
struct TYPE_4__ {struct ccdc_a_law alaw; } ;
struct TYPE_6__ {int pix_fmt; TYPE_1__ config_params; } ;
struct TYPE_5__ {int pix_order; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_0(u32 VAR_12)
{
 struct ccdc_a_law *VAR_13 =
  &VAR_9.config_params.alaw;

 if (VAR_11 == VAR_8) {
  VAR_9.pix_fmt = VAR_0;
  if (VAR_12 == VAR_5)
   VAR_13->enable = 1;
  else if (VAR_12 != VAR_4)
   return -VAR_3;
 } else {
  if (VAR_12 == VAR_7)
   VAR_10.pix_order = VAR_2;
  else if (VAR_12 == VAR_6)
   VAR_10.pix_order = VAR_1;
  else
   return -VAR_3;
 }
 return 0;
}

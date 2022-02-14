
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ccdc_a_law {scalar_t__ enable; } ;
struct TYPE_4__ {struct ccdc_a_law alaw; } ;
struct TYPE_6__ {TYPE_1__ config_params; } ;
struct TYPE_5__ {scalar_t__ pix_order; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static u32 FUNC_0(void)
{
 struct ccdc_a_law *VAR_9 =
  &VAR_6.config_params.alaw;
 u32 VAR_10;

 if (VAR_8 == VAR_5)
  if (VAR_9->enable)
   VAR_10 = VAR_2;
  else
   VAR_10 = VAR_1;
 else {
  if (VAR_7.pix_order == VAR_0)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_3;
 }
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {int topscan; } ;
struct TYPE_4__ {TYPE_1__ cset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_3)
{
 static int VAR_4 = 0;

 VAR_2 = 0;
 VAR_1->cset.topscan = 0x3ff;

 if (!VAR_4) {
  if (FUNC_0()) {
   VAR_4 = 1;
   VAR_0 = 1;
  }
 }

 return 1;
}

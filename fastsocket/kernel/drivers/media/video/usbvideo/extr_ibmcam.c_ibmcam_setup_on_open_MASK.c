
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvd {int dummy; } ;
struct TYPE_2__ {int initialized; int camera_model; } ;






 TYPE_1__* FUNC_0 (struct uvd*) ;
 int FUNC_1 (struct uvd*) ;
 int FUNC_2 (struct uvd*) ;

__attribute__((used)) static int FUNC_3(struct uvd *VAR_0)
{
 int VAR_1 = 0;

 if (!FUNC_0(VAR_0)->initialized) {
  switch (FUNC_0(VAR_0)->camera_model) {
  case 131:
   VAR_1 = FUNC_1(VAR_0);
   break;
  case 130:
   VAR_1 = FUNC_2(VAR_0);
   break;
  case 129:
  case 128:

   break;
  }
  FUNC_0(VAR_0)->initialized = (VAR_1 != 0);
 }
 return VAR_1;
}

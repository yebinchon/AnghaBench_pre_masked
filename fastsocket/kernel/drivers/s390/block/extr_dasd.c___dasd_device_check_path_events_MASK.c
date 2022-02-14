
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tbvpm; } ;
struct dasd_device {int stopped; TYPE_2__ path_data; TYPE_1__* discipline; } ;
struct TYPE_3__ {int (* verify_path ) (struct dasd_device*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_device*,int) ;
 int FUNC_1 (struct dasd_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct dasd_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->path_data.tbvpm) {
  if (VAR_2->stopped & ~(VAR_0 |
     VAR_1))
   return;
  VAR_3 = VAR_2->discipline->verify_path(
   VAR_2, VAR_2->path_data.tbvpm);
  if (VAR_3)
   FUNC_0(VAR_2, 50);
  else
   VAR_2->path_data.tbvpm = 0;
 }
}

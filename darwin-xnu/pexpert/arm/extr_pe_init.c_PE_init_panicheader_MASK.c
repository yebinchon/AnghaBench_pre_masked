
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct embedded_panic_header {int dummy; } ;
struct TYPE_3__ {int eph_version; int eph_magic; int eph_panic_log_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_2()
{
 if (!VAR_3)
  return;

 FUNC_1(VAR_3, sizeof(struct embedded_panic_header));





 VAR_3->eph_panic_log_offset = FUNC_0(VAR_2);

 VAR_3->eph_magic = VAR_1;
 VAR_3->eph_version = VAR_0;

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ eph_other_log_offset; scalar_t__ eph_other_log_len; } ;


 int FUNC_0 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char*,unsigned int*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_4()
{
 unsigned int VAR_3 = 0;

 VAR_3 = (unsigned int)(VAR_0 - VAR_1);
 if (!VAR_3)
  return;




 VAR_2->eph_other_log_len = FUNC_1(VAR_0) - VAR_2->eph_other_log_offset;





 FUNC_2((unsigned char *)VAR_1, &VAR_3);





 FUNC_0((unsigned char *)VAR_1, VAR_3);

 FUNC_3();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ addr_t ;
typedef int __u16 ;
struct TYPE_4__ {int ext_params; } ;
struct TYPE_3__ {int status; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(__u16 VAR_8)
{
 u32 VAR_9;

 VAR_9 = VAR_0.ext_params & 0xfffffff8;

 if (VAR_9 == 0)
  return;
 if (VAR_9 != (u32) (addr_t) VAR_3)
  FUNC_0("sclp: unsolicited interrupt for buffer at 0x%x\n",
        VAR_9);
 FUNC_1(&VAR_4);
 if (VAR_5 == VAR_7) {
  VAR_2.status = VAR_1;
  VAR_5 = VAR_6;
 }
 FUNC_2(&VAR_4);
}

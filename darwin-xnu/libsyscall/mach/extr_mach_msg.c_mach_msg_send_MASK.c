
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mach_msg_return_t ;
struct TYPE_4__ {int msgh_size; } ;
typedef TYPE_1__ mach_msg_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;

mach_msg_return_t
FUNC_1(mach_msg_header_t *VAR_3)
{
 return FUNC_0(VAR_3, VAR_2,
   VAR_3->msgh_size, 0, VAR_1,
   VAR_0, VAR_1);
}

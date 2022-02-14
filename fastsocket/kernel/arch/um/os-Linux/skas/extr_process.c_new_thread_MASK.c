
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jmp_buf ;
struct TYPE_3__ {unsigned long JB_IP; int JB_SP; } ;


 int VAR_0 ;

void FUNC_0(void *VAR_1, jmp_buf *VAR_2, void (*VAR_3)(void))
{
 (*VAR_2)[0].JB_IP = (unsigned long) VAR_3;
 (*VAR_2)[0].JB_SP = (unsigned long) VAR_1 + VAR_0 -
  sizeof(void *);
}

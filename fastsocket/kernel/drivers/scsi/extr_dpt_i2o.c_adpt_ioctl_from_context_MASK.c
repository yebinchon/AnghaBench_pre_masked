
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int ** ioctl_reply_context; } ;
typedef TYPE_1__ adpt_hba ;



__attribute__((used)) static void *FUNC_0(adpt_hba *VAR_0, u32 VAR_1)
{



 void *VAR_2 = VAR_0->ioctl_reply_context[VAR_1];
 VAR_0->ioctl_reply_context[VAR_1] = ((void*)0);

 return VAR_2;

}

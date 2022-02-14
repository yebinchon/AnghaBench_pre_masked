
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {int * rmmsg; } ;
struct mon_msg {TYPE_1__ msg; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct mon_msg *VAR_0)
{
 return *(u32 *) &VAR_0->msg.rmmsg[4];
}

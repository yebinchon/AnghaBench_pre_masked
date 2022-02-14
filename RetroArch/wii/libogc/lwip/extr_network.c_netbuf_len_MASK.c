
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netbuf {TYPE_1__* p; } ;
struct TYPE_2__ {int tot_len; } ;



__attribute__((used)) static __inline__ u16 FUNC_0(struct netbuf *VAR_0)
{
 return ((VAR_0 && VAR_0->p)?VAR_0->p->tot_len:0);
}

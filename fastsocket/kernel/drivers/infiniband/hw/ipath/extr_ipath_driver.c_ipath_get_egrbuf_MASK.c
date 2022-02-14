
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ipath_devdata {TYPE_2__* ipath_port0_skbinfo; } ;
struct TYPE_4__ {TYPE_1__* skb; } ;
struct TYPE_3__ {scalar_t__ data; } ;



__attribute__((used)) static inline void *FUNC_0(struct ipath_devdata *VAR_0, u32 VAR_1)
{
 return VAR_0->ipath_port0_skbinfo ?
  (void *) VAR_0->ipath_port0_skbinfo[VAR_1].skb->data : ((void*)0);
}

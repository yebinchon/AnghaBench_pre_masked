
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned long len; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;
struct TYPE_3__ {int doff; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_0)
{
 unsigned long VAR_1 = (unsigned long)FUNC_3(VAR_0) +
  FUNC_3(VAR_0)->doff * 4;
 int VAR_2 = VAR_0->len - (VAR_1 - (unsigned long)VAR_0->data);
 int VAR_3 = FUNC_1(VAR_1 + VAR_2) - FUNC_0(VAR_1);
 VAR_3 += FUNC_2(VAR_0)->nr_frags;
 return VAR_3;
}

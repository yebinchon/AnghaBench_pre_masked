
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union viosrp_iu {int dummy; } viosrp_iu ;
struct iu_entry {TYPE_1__* sbuf; } ;
struct TYPE_2__ {scalar_t__ buf; } ;



__attribute__((used)) static inline union viosrp_iu *FUNC_0(struct iu_entry *VAR_0)
{
 return (union viosrp_iu *) (VAR_0->sbuf->buf);
}

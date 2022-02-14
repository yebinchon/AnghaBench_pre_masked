
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fq_bytes; } ;
typedef TYPE_1__ fq_t ;
struct TYPE_7__ {TYPE_1__* fqs_large_flow; } ;
typedef TYPE_2__ fq_if_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

inline void
FUNC_1(fq_if_t *VAR_1, fq_t *VAR_2)
{
 fq_t *VAR_3;

 if (VAR_1->fqs_large_flow != ((void*)0) &&
     VAR_1->fqs_large_flow->fq_bytes < VAR_0)
  VAR_1->fqs_large_flow = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_2->fq_bytes < VAR_0)
  return;

 VAR_3 = VAR_1->fqs_large_flow;
 if (VAR_3 == ((void*)0)) {
  if (!FUNC_0(VAR_2))
   VAR_1->fqs_large_flow = VAR_2;
  return;
 } else if (VAR_2->fq_bytes > VAR_3->fq_bytes) {
  VAR_1->fqs_large_flow = VAR_2;
 }
}

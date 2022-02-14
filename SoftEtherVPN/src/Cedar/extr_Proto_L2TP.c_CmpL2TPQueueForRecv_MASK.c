
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Ns; } ;
typedef TYPE_1__ L2TP_QUEUE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(void *VAR_0, void *VAR_1)
{
 L2TP_QUEUE *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(L2TP_QUEUE **)VAR_0;
 VAR_3 = *(L2TP_QUEUE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_2->Ns, VAR_3->Ns))
 {
  return -1;
 }
 else if (VAR_2->Ns == VAR_3->Ns)
 {
  return 0;
 }
 else
 {
  return 1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ref; } ;
struct TYPE_5__ {TYPE_2__* Cancel; } ;
typedef TYPE_1__ ETH ;
typedef TYPE_2__ CANCEL ;


 int FUNC_0 (int ) ;

CANCEL *FUNC_1(ETH *VAR_0)
{
 CANCEL *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = VAR_0->Cancel;
 FUNC_0(VAR_1->ref);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ddi; } ;
typedef TYPE_1__ hil_mlc ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(hil_mlc *VAR_0, int VAR_1)
{
 VAR_0->ddi--;
 if (VAR_0->ddi <= -1) {
  VAR_0->ddi = -1;
  FUNC_0(VAR_0, 0);
  return -1;
 }
 FUNC_0(VAR_0, VAR_0->ddi + 1);

 return 0;
}

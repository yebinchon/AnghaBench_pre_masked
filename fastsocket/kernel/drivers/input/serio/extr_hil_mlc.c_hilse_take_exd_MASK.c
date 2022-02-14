
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* exd; } ;
struct TYPE_5__ {int* ipacket; TYPE_1__ di_scratch; } ;
typedef TYPE_2__ hil_mlc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(hil_mlc *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  VAR_3->di_scratch.exd[VAR_5] =
   VAR_3->ipacket[VAR_5] & VAR_2;


 if (VAR_3->di_scratch.exd[0] & VAR_1)
  return VAR_0;

 return 0;
}

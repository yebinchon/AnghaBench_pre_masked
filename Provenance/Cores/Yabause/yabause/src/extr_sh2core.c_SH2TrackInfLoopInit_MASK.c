
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tilInfo_struct ;
struct TYPE_4__ {int maxNum; int * match; } ;
struct TYPE_5__ {TYPE_1__ trackInfLoop; } ;
typedef TYPE_2__ SH2_struct ;


 int * FUNC_0 (int,int) ;

int FUNC_1(SH2_struct *VAR_0)
{
   VAR_0->trackInfLoop.maxNum = 100;
   if ((VAR_0->trackInfLoop.match = FUNC_0(VAR_0->trackInfLoop.maxNum, sizeof(tilInfo_struct))) == ((void*)0))
      return -1;

   return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tilInfo_struct ;
struct TYPE_4__ {int maxNum; scalar_t__ num; int match; } ;
struct TYPE_5__ {TYPE_1__ trackInfLoop; } ;
typedef TYPE_2__ SH2_struct ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(SH2_struct *VAR_0)
{
   FUNC_0(VAR_0->trackInfLoop.match, 0, sizeof(tilInfo_struct) * VAR_0->trackInfLoop.maxNum);
   VAR_0->trackInfLoop.num = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int low; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1(int VAR_4)
{
 u32 VAR_5;
 int VAR_6;
if (VAR_3 && (VAR_4 < 3) && (VAR_4 >= 0)) {

 VAR_5=VAR_1[VAR_4].low & 0xfffffff0;


        VAR_6=FUNC_0(VAR_2,VAR_4,VAR_5);
 return VAR_6;
 }

else {
 return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u32_t ;
struct TYPE_2__ {scalar_t__ swSniffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t *VAR_3, u32_t VAR_4)
{
 FUNC_3(VAR_3);

 VAR_2->swSniffer = VAR_4;
 FUNC_2(VAR_0, "wd->swSniffer ", VAR_2->swSniffer);
 if (VAR_4) {

  FUNC_0(VAR_3, 1);
  FUNC_1(VAR_1, "enalbe sniffer mode");
 } else {
  FUNC_0(VAR_3, 0);
  FUNC_1(VAR_0, "disalbe sniffer mode");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quot; int rem; } ;
typedef TYPE_1__ div_t ;



div_t FUNC_0(int VAR_0, int VAR_1) {
  div_t VAR_2;
  VAR_2.quot=VAR_0/VAR_1;
  VAR_2.rem=VAR_0-VAR_2.quot*VAR_1;
  return VAR_2;
}

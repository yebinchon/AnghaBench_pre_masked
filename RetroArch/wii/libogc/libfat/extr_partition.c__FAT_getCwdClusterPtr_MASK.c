
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int cwdCluster; } ;
typedef TYPE_1__ PARTITION ;


 TYPE_1__* FUNC_0 (char const*) ;

uint32_t* FUNC_1(const char* VAR_0) {
 PARTITION *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1) {
  return ((void*)0);
 }

 return &VAR_1->cwdCluster;
}

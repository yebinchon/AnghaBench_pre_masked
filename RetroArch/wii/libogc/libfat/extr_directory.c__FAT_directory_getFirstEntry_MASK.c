
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int offset; scalar_t__ sector; int cluster; } ;
struct TYPE_6__ {TYPE_1__ dataStart; TYPE_1__ dataEnd; } ;
typedef int PARTITION ;
typedef TYPE_2__ DIR_ENTRY ;


 int FUNC_0 (int *,TYPE_2__*) ;

bool FUNC_1 (PARTITION* VAR_0, DIR_ENTRY* VAR_1, uint32_t VAR_2) {
 VAR_1->dataStart.cluster = VAR_2;
 VAR_1->dataStart.sector = 0;
 VAR_1->dataStart.offset = -1;

 VAR_1->dataEnd = VAR_1->dataStart;

 return FUNC_0 (VAR_0, VAR_1);
}

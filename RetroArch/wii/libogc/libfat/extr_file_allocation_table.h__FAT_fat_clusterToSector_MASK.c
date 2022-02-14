
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ sec_t ;
struct TYPE_3__ {scalar_t__ dataStart; scalar_t__ rootDirStart; scalar_t__ sectorsPerCluster; } ;
typedef TYPE_1__ PARTITION ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline sec_t FUNC_0 (PARTITION* VAR_1, uint32_t VAR_2) {
 return (VAR_2 >= VAR_0) ?
  ((VAR_2 - VAR_0) * (sec_t)VAR_1->sectorsPerCluster) + VAR_1->dataStart :
  VAR_1->rootDirStart;
}

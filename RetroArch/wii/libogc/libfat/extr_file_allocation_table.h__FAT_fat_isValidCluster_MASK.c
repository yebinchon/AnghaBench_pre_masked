
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ lastCluster; } ;
struct TYPE_5__ {TYPE_1__ fat; } ;
typedef TYPE_2__ PARTITION ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0 (PARTITION* VAR_1, uint32_t VAR_2) {
 return (VAR_2 >= VAR_0) && (VAR_2 <= VAR_1->fat.lastCluster );
}

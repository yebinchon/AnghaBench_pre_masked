
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* entryData; } ;
typedef TYPE_1__ DIR_ENTRY ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline bool FUNC_0 (DIR_ENTRY* VAR_2) {
 return ((VAR_2->entryData[VAR_1] & VAR_0) != 0);
}

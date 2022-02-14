
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ elem_size; scalar_t__ gzalloc_exempt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline boolean_t FUNC_0(zone_t VAR_4) {
 return (VAR_2 &&
     (((VAR_4->elem_size >= VAR_1) && (VAR_4->elem_size <= VAR_0)) || (VAR_4 == VAR_3)) &&
     (VAR_4->gzalloc_exempt == 0));
}

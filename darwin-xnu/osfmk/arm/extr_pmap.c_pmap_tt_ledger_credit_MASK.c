
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ pmap_t ;
struct TYPE_2__ {int page_table; int phys_footprint; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_1(
 pmap_t VAR_2,
 vm_size_t VAR_3)
{
 if (VAR_2 != VAR_0) {
  FUNC_0(VAR_2, VAR_1.phys_footprint, VAR_3);
  FUNC_0(VAR_2, VAR_1.page_table, VAR_3);
 }
}

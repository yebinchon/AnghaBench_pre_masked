
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int efi_status_t ;
typedef int efi_capsule_header_t ;
struct TYPE_2__ {scalar_t__ runtime_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int **,unsigned long,int *,int*) ;
 int VAR_3 ;

__attribute__((used)) static efi_status_t FUNC_1(efi_capsule_header_t **VAR_4,
      unsigned long VAR_5,
      u64 *VAR_6,
      int *VAR_7)
{
 if (VAR_2.runtime_version < VAR_0)
  return VAR_1;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7);
}

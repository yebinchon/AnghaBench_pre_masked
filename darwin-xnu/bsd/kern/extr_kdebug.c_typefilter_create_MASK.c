
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int * typefilter_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static typefilter_t FUNC_2(void)
{
 typefilter_t VAR_5;
 if (VAR_1 == FUNC_0(VAR_4, (vm_offset_t*)&VAR_5, VAR_2, VAR_3)) {
  FUNC_1(&VAR_5[VAR_0], 0, VAR_2 - VAR_0);
  return VAR_5;
 }
 return ((void*)0);
}

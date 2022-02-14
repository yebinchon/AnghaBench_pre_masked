
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm_area_struct {int vm_flags; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static pgprot_t FUNC_1(uint32_t VAR_1, struct vm_area_struct *VAR_2)
{
 pgprot_t VAR_3 = FUNC_0(VAR_2->vm_flags);




 return VAR_3;
}

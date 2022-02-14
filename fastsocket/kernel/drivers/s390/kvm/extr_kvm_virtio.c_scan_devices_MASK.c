
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_desc {scalar_t__ type; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct kvm_device_desc*,unsigned int) ;
 scalar_t__ FUNC_1 (struct kvm_device_desc*) ;
 struct kvm_device_desc* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_2;
 struct kvm_device_desc *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 += FUNC_1(VAR_3)) {
  VAR_3 = VAR_1 + VAR_2;

  if (VAR_3->type == 0)
   break;

  FUNC_0(VAR_3, VAR_2);
 }
}

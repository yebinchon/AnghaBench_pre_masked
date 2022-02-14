
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct kvm_vqconfig* priv; } ;
struct kvm_vqconfig {int address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_1)
{
 struct kvm_vqconfig *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_0, VAR_2->address);
}

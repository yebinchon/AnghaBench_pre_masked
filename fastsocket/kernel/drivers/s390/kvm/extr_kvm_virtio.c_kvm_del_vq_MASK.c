
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {struct kvm_vqconfig* priv; } ;
struct kvm_vqconfig {int num; int address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct virtqueue *VAR_1)
{
 struct kvm_vqconfig *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->address,
       FUNC_2(VAR_2->num,
           VAR_0));
}

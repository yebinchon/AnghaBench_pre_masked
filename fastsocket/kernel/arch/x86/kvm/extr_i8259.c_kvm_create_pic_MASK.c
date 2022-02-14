
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pic {int dev; TYPE_1__* pics; struct kvm* irq_request_opaque; int irq_request; struct kvm* kvm; int lock; } ;
struct kvm {int slots_lock; } ;
struct TYPE_2__ {int elcr_mask; int isr_ack; struct kvm_pic* pics_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_pic*) ;
 int FUNC_1 (struct kvm*,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 struct kvm_pic* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

struct kvm_pic *FUNC_7(struct kvm *VAR_4)
{
 struct kvm_pic *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct kvm_pic), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 FUNC_6(&VAR_5->lock);
 VAR_5->kvm = VAR_4;
 VAR_5->pics[0].elcr_mask = 0xf8;
 VAR_5->pics[1].elcr_mask = 0xde;
 VAR_5->irq_request = VAR_2;
 VAR_5->irq_request_opaque = VAR_4;
 VAR_5->pics[0].pics_state = VAR_5;
 VAR_5->pics[1].pics_state = VAR_5;
 VAR_5->pics[0].isr_ack = 0xff;
 VAR_5->pics[1].isr_ack = 0xff;




 FUNC_2(&VAR_5->dev, &VAR_3);
 FUNC_4(&VAR_4->slots_lock);
 VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5->dev);
 FUNC_5(&VAR_4->slots_lock);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}

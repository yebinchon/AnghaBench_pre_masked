
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcb_seg {int limit; int attrib; int selector; int base; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int limit; int type; int s; int dpl; int present; int avl; int l; int db; int g; int unusable; int selector; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 struct vmcb_seg* FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_8,
       struct kvm_segment *VAR_9, int VAR_10)
{
 struct vmcb_seg *VAR_11 = FUNC_0(VAR_8, VAR_10);

 VAR_9->base = VAR_11->base;
 VAR_9->limit = VAR_11->limit;
 VAR_9->selector = VAR_11->selector;
 VAR_9->type = VAR_11->attrib & VAR_7;
 VAR_9->s = (VAR_11->attrib >> VAR_6) & 1;
 VAR_9->dpl = (VAR_11->attrib >> VAR_2) & 3;
 VAR_9->present = (VAR_11->attrib >> VAR_5) & 1;
 VAR_9->avl = (VAR_11->attrib >> VAR_0) & 1;
 VAR_9->l = (VAR_11->attrib >> VAR_4) & 1;
 VAR_9->db = (VAR_11->attrib >> VAR_1) & 1;
 VAR_9->g = (VAR_11->attrib >> VAR_3) & 1;




 VAR_9->unusable = !VAR_9->present || (VAR_9->type == 0);

 switch (VAR_10) {
 case 134:





  VAR_9->g = VAR_11->limit > 0xfffff;
  break;
 case 128:




  VAR_9->type |= 0x2;
  break;
 case 133:
 case 132:
 case 131:
 case 130:







  if (!VAR_9->unusable)
   VAR_9->type |= 0x1;
  break;
 case 129:





  if (VAR_9->unusable)
   VAR_9->db = 0;
  break;
 }
}

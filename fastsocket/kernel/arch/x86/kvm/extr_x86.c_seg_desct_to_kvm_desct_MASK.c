
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct kvm_segment {int limit; int unusable; scalar_t__ padding; int avl; scalar_t__ g; int l; int s; int db; int dpl; int present; int type; int selector; int base; } ;
struct desc_struct {int avl; scalar_t__ g; int l; int s; int d; int dpl; int p; int type; } ;


 int FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (struct desc_struct*) ;

__attribute__((used)) static void FUNC_2(struct desc_struct *VAR_0, u16 VAR_1,
       struct kvm_segment *VAR_2)
{
 VAR_2->base = FUNC_0(VAR_0);
 VAR_2->limit = FUNC_1(VAR_0);
 if (VAR_0->g) {
  VAR_2->limit <<= 12;
  VAR_2->limit |= 0xfff;
 }
 VAR_2->selector = VAR_1;
 VAR_2->type = VAR_0->type;
 VAR_2->present = VAR_0->p;
 VAR_2->dpl = VAR_0->dpl;
 VAR_2->db = VAR_0->d;
 VAR_2->s = VAR_0->s;
 VAR_2->l = VAR_0->l;
 VAR_2->g = VAR_0->g;
 VAR_2->avl = VAR_0->avl;
 if (!VAR_1)
  VAR_2->unusable = 1;
 else
  VAR_2->unusable = 0;
 VAR_2->padding = 0;
}

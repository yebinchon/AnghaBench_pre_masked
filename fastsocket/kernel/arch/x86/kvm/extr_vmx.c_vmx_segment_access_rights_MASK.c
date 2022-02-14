
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_segment {int type; int s; int dpl; int present; int avl; int l; int db; int g; scalar_t__ unusable; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct kvm_segment *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->unusable)
  VAR_2 = 1 << 16;
 else {
  VAR_2 = VAR_1->type & 15;
  VAR_2 |= (VAR_1->s & 1) << 4;
  VAR_2 |= (VAR_1->dpl & 3) << 5;
  VAR_2 |= (VAR_1->present & 1) << 7;
  VAR_2 |= (VAR_1->avl & 1) << 12;
  VAR_2 |= (VAR_1->l & 1) << 13;
  VAR_2 |= (VAR_1->db & 1) << 14;
  VAR_2 |= (VAR_1->g & 1) << 15;
 }
 if (VAR_2 == 0)
  VAR_2 = VAR_0;

 return VAR_2;
}

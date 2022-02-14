
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memslots {int nmemslots; TYPE_1__* memslots; } ;
struct kvm {int memslots; } ;
struct TYPE_2__ {scalar_t__ npages; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct kvm_memslots* FUNC_1 (int ) ;

unsigned int FUNC_2(struct kvm *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5 = 0;
 struct kvm_memslots *VAR_6;

 VAR_6 = FUNC_1(VAR_2->memslots);
 for (VAR_3 = 0; VAR_3 < VAR_6->nmemslots; VAR_3++)
  VAR_5 += VAR_6->memslots[VAR_3].npages;

 VAR_4 = VAR_5 * VAR_1 / 1000;
 VAR_4 = FUNC_0(VAR_4,
   (unsigned int) VAR_0);

 return VAR_4;
}

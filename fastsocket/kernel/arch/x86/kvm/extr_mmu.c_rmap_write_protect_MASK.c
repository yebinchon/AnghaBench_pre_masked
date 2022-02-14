
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int lpages; } ;
struct kvm {TYPE_1__ stat; } ;
typedef int pfn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int) ;
 unsigned long* FUNC_2 (struct kvm*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int*,int,int) ;
 int* FUNC_6 (struct kvm*,unsigned long*,int*) ;
 int FUNC_7 (char*,int*,int) ;
 int FUNC_8 (struct kvm*,int*) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct kvm*,int) ;

__attribute__((used)) static int FUNC_11(struct kvm *VAR_7, u64 VAR_8)
{
 unsigned long *VAR_9;
 u64 *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_8 = FUNC_10(VAR_7, VAR_8);
 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_3);

 VAR_10 = FUNC_6(VAR_7, VAR_9, ((void*)0));
 while (VAR_10) {
  FUNC_0(!VAR_10);
  FUNC_0(!(*VAR_10 & VAR_4));
  FUNC_7("rmap_write_protect: spte %p %llx\n", VAR_10, *VAR_10);
  if (FUNC_3(*VAR_10)) {
   FUNC_1(VAR_10, *VAR_10 & ~VAR_5);
   VAR_12 = 1;
  }
  VAR_10 = FUNC_6(VAR_7, VAR_9, VAR_10);
 }
 if (VAR_12) {
  pfn_t VAR_13;

  VAR_10 = FUNC_6(VAR_7, VAR_9, ((void*)0));
  VAR_13 = FUNC_9(*VAR_10);
  FUNC_4(VAR_13);
 }


 for (VAR_11 = VAR_1;
      VAR_11 < VAR_3 + VAR_0; ++VAR_11) {
  VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_11);
  VAR_10 = FUNC_6(VAR_7, VAR_9, ((void*)0));
  while (VAR_10) {
   FUNC_0(!VAR_10);
   FUNC_0(!(*VAR_10 & VAR_4));
   FUNC_0((*VAR_10 & (VAR_2|VAR_4)) != (VAR_2|VAR_4));
   FUNC_5("rmap_write_protect(large): spte %p %llx %lld\n", VAR_10, *VAR_10, VAR_8);
   if (FUNC_3(*VAR_10)) {
    FUNC_8(VAR_7, VAR_10);
    --VAR_7->stat.lpages;
    FUNC_1(VAR_10, VAR_6);
    VAR_10 = ((void*)0);
    VAR_12 = 1;
   }
   VAR_10 = FUNC_6(VAR_7, VAR_9, VAR_10);
  }
 }

 return VAR_12;
}

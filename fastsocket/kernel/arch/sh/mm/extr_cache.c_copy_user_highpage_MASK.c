
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
struct TYPE_3__ {scalar_t__ n_aliases; } ;
struct TYPE_4__ {TYPE_1__ dcache; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (struct page*,int ) ;
 void* FUNC_3 (struct page*,unsigned long) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct page *VAR_6, struct page *VAR_7,
   unsigned long VAR_8, struct vm_area_struct *VAR_9)
{
 void *VAR_10, *VAR_11;

 VAR_11 = FUNC_2(VAR_6, VAR_1);

 if (VAR_5.dcache.n_aliases && FUNC_6(VAR_7) &&
     !FUNC_9(VAR_4, &VAR_7->flags)) {
  VAR_10 = FUNC_3(VAR_7, VAR_8);
  FUNC_1(VAR_11, VAR_10);
  FUNC_5(VAR_10);
 } else {
  VAR_10 = FUNC_2(VAR_7, VAR_0);
  FUNC_1(VAR_11, VAR_10);
  FUNC_4(VAR_10, VAR_0);
 }

 if (FUNC_7((unsigned long)VAR_11, VAR_8 & VAR_2))
  FUNC_0(VAR_11, VAR_3);

 FUNC_4(VAR_11, VAR_1);

 FUNC_8();
}

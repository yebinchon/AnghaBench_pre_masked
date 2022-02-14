
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_5__ {size_t locked_vm; } ;
struct TYPE_4__ {TYPE_2__* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page**,size_t,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,unsigned long,size_t,int,int,struct page**,struct vm_area_struct**) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_6, size_t VAR_7,
    struct page **VAR_8, struct vm_area_struct **VAR_9)
{
 unsigned long VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_4) >> VAR_2;

 if (VAR_7 > VAR_10 && !FUNC_1(VAR_0)) {
  VAR_12 = -VAR_1;
  goto bail;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11 += VAR_12) {
  VAR_12 = FUNC_2(VAR_5, VAR_5->mm,
         VAR_6 + VAR_11 * VAR_3,
         VAR_7 - VAR_11, 1, 1,
         VAR_8 + VAR_11, VAR_9);
  if (VAR_12 < 0)
   goto bail_release;
 }

 VAR_5->mm->locked_vm += VAR_7;

 VAR_12 = 0;
 goto bail;

bail_release:
 FUNC_0(VAR_8, VAR_11, 0);
bail:
 return VAR_12;
}

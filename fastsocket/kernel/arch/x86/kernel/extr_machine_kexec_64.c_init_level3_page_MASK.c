
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 struct page* FUNC_3 (struct kimage*,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct kimage *VAR_5, pud_t *VAR_6,
    unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_7 &= VAR_1;
 VAR_9 = VAR_7 + VAR_2;
 while ((VAR_7 < VAR_8) && (VAR_7 < VAR_9)) {
  struct page *VAR_11;
  pmd_t *VAR_12;

  VAR_11 = FUNC_3(VAR_5, 0);
  if (!VAR_11) {
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_12 = (pmd_t *)FUNC_4(VAR_11);
  FUNC_2(VAR_12, VAR_7);
  FUNC_6(VAR_6++, FUNC_1(FUNC_0(VAR_12) | VAR_4));
  VAR_7 += VAR_3;
 }

 while (VAR_7 < VAR_9) {
  FUNC_5(VAR_6++);
  VAR_7 += VAR_3;
 }
out:
 return VAR_10;
}

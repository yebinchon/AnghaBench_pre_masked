
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 struct page* FUNC_4 (struct kimage*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct kimage *VAR_5, pgd_t *VAR_6,
    unsigned long VAR_7)
{
 pud_t *VAR_8;
 pmd_t *VAR_9;
 struct page *VAR_10;
 int VAR_11 = -VAR_0;

 VAR_7 &= VAR_2;
 VAR_6 += FUNC_7(VAR_7);
 if (!FUNC_8(*VAR_6)) {
  VAR_10 = FUNC_4(VAR_5, 0);
  if (!VAR_10)
   goto out;
  VAR_8 = (pud_t *)FUNC_6(VAR_10);
  FUNC_5(VAR_8, 0, VAR_1);
  FUNC_13(VAR_6, FUNC_1(FUNC_0(VAR_8) | VAR_3));
 }
 VAR_8 = FUNC_11(VAR_6, VAR_7);
 if (!FUNC_12(*VAR_8)) {
  VAR_10 = FUNC_4(VAR_5, 0);
  if (!VAR_10)
   goto out;
  VAR_9 = (pmd_t *)FUNC_6(VAR_10);
  FUNC_5(VAR_9, 0, VAR_1);
  FUNC_15(VAR_8, FUNC_3(FUNC_0(VAR_9) | VAR_3));
 }
 VAR_9 = FUNC_9(VAR_8, VAR_7);
 if (!FUNC_10(*VAR_9))
  FUNC_14(VAR_9, FUNC_2(VAR_7 | VAR_4));
 VAR_11 = 0;
out:
 return VAR_11;
}

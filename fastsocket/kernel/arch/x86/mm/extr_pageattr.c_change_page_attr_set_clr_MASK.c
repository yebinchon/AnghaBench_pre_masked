
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cpa_data {unsigned long* vaddr; int numpages; int flags; int force_split; scalar_t__ curpage; void* mask_clr; void* mask_set; struct page** pages; } ;
typedef void* pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct cpa_data*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long*,int,int,int,struct page**) ;
 int FUNC_6 (unsigned long,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 int FUNC_8 (void*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(unsigned long *VAR_6, int VAR_7,
        pgprot_t VAR_8, pgprot_t VAR_9,
        int VAR_10, int VAR_11,
        struct page **VAR_12)
{
 struct cpa_data VAR_13;
 int VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17 = 0;





 VAR_8 = FUNC_3(VAR_8);
 VAR_9 = FUNC_3(VAR_9);
 if (!FUNC_8(VAR_8) && !FUNC_8(VAR_9) && !VAR_10)
  return 0;


 if (VAR_11 & VAR_0) {
  int VAR_18;
  for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++) {
   if (VAR_6[VAR_18] & ~VAR_3) {
    VAR_6[VAR_18] &= VAR_3;
    FUNC_0(1);
   }
  }
 } else if (!(VAR_11 & VAR_2)) {




  if (*VAR_6 & ~VAR_3) {
   *VAR_6 &= VAR_3;



   FUNC_0(1);
  }




  VAR_17 = *VAR_6;
 }


 FUNC_7();

 FUNC_9();

 VAR_13.vaddr = VAR_6;
 VAR_13.pages = VAR_12;
 VAR_13.numpages = VAR_7;
 VAR_13.mask_set = VAR_8;
 VAR_13.mask_clr = VAR_9;
 VAR_13.flags = 0;
 VAR_13.curpage = 0;
 VAR_13.force_split = VAR_10;

 if (VAR_11 & (VAR_0 | VAR_2))
  VAR_13.flags |= VAR_11;


 VAR_16 = (FUNC_8(VAR_8) | FUNC_8(VAR_9)) != VAR_4;

 VAR_14 = FUNC_1(&VAR_13, VAR_16);




 if (!(VAR_13.flags & VAR_1))
  goto out;





 VAR_15 = FUNC_2(VAR_8);







 if (!VAR_14 && VAR_5) {
  if (VAR_13.flags & (VAR_2 | VAR_0)) {
   FUNC_5(VAR_6, VAR_7, VAR_15,
     VAR_13.flags, VAR_12);
  } else
   FUNC_6(VAR_17, VAR_7, VAR_15);
 } else
  FUNC_4(VAR_15);

out:
 return VAR_14;
}

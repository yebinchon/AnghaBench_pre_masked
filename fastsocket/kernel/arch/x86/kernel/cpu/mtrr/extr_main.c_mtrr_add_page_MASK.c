
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int mtrr_type ;
struct TYPE_2__ {int (* validate_add_page ) (unsigned long,unsigned long,unsigned int) ;int (* get_free_region ) (unsigned long,unsigned long,int) ;int (* get ) (int,unsigned long*,unsigned long*,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int,unsigned long,unsigned long,unsigned int,int) ;
 unsigned long VAR_9 ;
 int FUNC_10 (unsigned long,unsigned long,unsigned int) ;
 int FUNC_11 (int,unsigned long*,unsigned long*,unsigned int*) ;
 int FUNC_12 (unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_13 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(unsigned long VAR_10, unsigned long VAR_11,
    unsigned int VAR_12, bool VAR_13)
{
 unsigned long VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 mtrr_type VAR_19;

 if (!VAR_5)
  return -VAR_2;

 VAR_18 = VAR_5->validate_add_page(VAR_10, VAR_11, VAR_12);
 if (VAR_18)
  return VAR_18;

 if (VAR_12 >= VAR_3) {
  FUNC_7("mtrr: type: %u invalid\n", VAR_12);
  return -VAR_0;
 }


 if ((VAR_12 == VAR_4) && !FUNC_1()) {
  FUNC_7("mtrr: your processor doesn't support write-combining\n");
  return -VAR_1;
 }

 if (!VAR_11) {
  FUNC_7("mtrr: zero sized request\n");
  return -VAR_0;
 }

 if (VAR_10 & VAR_9 || VAR_11 & VAR_9) {
  FUNC_7("mtrr: base or size exceeds the MTRR width\n");
  return -VAR_0;
 }

 VAR_18 = -VAR_0;
 VAR_17 = -1;


 FUNC_0();


 FUNC_4(&VAR_6);
 for (VAR_16 = 0; VAR_16 < VAR_8; ++VAR_16) {
  VAR_5->get(VAR_16, &VAR_14, &VAR_15, &VAR_19);
  if (!VAR_15 || VAR_10 > VAR_14 + VAR_15 - 1 ||
      VAR_10 + VAR_11 - 1 < VAR_14)
   continue;




  if (VAR_10 < VAR_14 || VAR_10 + VAR_11 - 1 > VAR_14 + VAR_15 - 1) {
   if (VAR_10 <= VAR_14 &&
       VAR_10 + VAR_11 - 1 >= VAR_14 + VAR_15 - 1) {

    if (VAR_12 == VAR_19) {
     VAR_17 = VAR_17 == -1 ? VAR_16 : -2;
     continue;
    } else if (FUNC_13(VAR_12, VAR_19))
     continue;
   }
   FUNC_7("mtrr: 0x%lx000,0x%lx000 overlaps existing"
    " 0x%lx000,0x%lx000\n", VAR_10, VAR_11, VAR_14,
    VAR_15);
   goto out;
  }

  if (VAR_19 != VAR_12) {
   if (FUNC_13(VAR_12, VAR_19))
    continue;
   FUNC_7("mtrr: type mismatch for %lx000,%lx000 old: %s new: %s\n",
    VAR_10, VAR_11, FUNC_3(VAR_19),
    FUNC_3(VAR_12));
   goto out;
  }
  if (VAR_13)
   ++VAR_7[VAR_16];
  VAR_18 = VAR_16;
  goto out;
 }

 VAR_16 = VAR_5->get_free_region(VAR_10, VAR_11, VAR_17);
 if (VAR_16 >= 0) {
  FUNC_9(VAR_16, VAR_10, VAR_11, VAR_12, 0);
  if (FUNC_2(VAR_17 < 0)) {
   VAR_7[VAR_16] = 1;
  } else {
   VAR_7[VAR_16] = VAR_7[VAR_17];
   if (VAR_13)
    VAR_7[VAR_16]++;
   if (FUNC_14(VAR_17 != VAR_16)) {
    FUNC_9(VAR_17, 0, 0, 0, 0);
    VAR_7[VAR_17] = 0;
   }
  }
 } else {
  FUNC_6("mtrr: no more MTRRs available\n");
 }
 VAR_18 = VAR_16;
 out:
 FUNC_5(&VAR_6);
 FUNC_8();
 return VAR_18;
}

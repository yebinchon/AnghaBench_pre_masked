
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmb_entry {struct pmb_entry* link; } ;
struct TYPE_3__ {unsigned long size; int flag; } ;


 int FUNC_0 (TYPE_1__*) ;
 long VAR_0 ;
 scalar_t__ FUNC_1 (struct pmb_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_2 (struct pmb_entry*) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_3 (struct pmb_entry*) ;
 scalar_t__ FUNC_4 (struct pmb_entry*) ;
 struct pmb_entry* FUNC_5 (unsigned long,unsigned long,int) ;
 int FUNC_6 (struct pmb_entry*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (struct pmb_entry*) ;

long FUNC_8(unsigned long VAR_7, unsigned long VAR_8,
        unsigned long VAR_9, unsigned long VAR_10)
{
 struct pmb_entry *VAR_11, *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 long VAR_16;


 if (VAR_10 & VAR_4) {
  if (VAR_10 & VAR_5)
   VAR_14 = VAR_3;
  else
   VAR_14 = VAR_1;
 } else
  VAR_14 = VAR_3 | VAR_2;

 VAR_11 = ((void*)0);
 VAR_13 = VAR_9;

again:
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_6); VAR_15++) {
  int VAR_17;

  if (VAR_9 < VAR_6[VAR_15].size)
   continue;

  VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_14 | VAR_6[VAR_15].flag);
  if (FUNC_1(VAR_12)) {
   VAR_16 = FUNC_2(VAR_12);
   goto out;
  }

  VAR_17 = FUNC_7(VAR_12);
  if (VAR_17 != 0) {
   FUNC_6(VAR_12);
   VAR_16 = -VAR_0;
   goto out;
  }

  VAR_8 += VAR_6[VAR_15].size;
  VAR_7 += VAR_6[VAR_15].size;
  VAR_9 -= VAR_6[VAR_15].size;





  if (FUNC_4(VAR_11))
   VAR_11->link = VAR_12;

  VAR_11 = VAR_12;






  VAR_15--;
 }

 if (VAR_9 >= 0x1000000)
  goto again;

 return VAR_13 - VAR_9;

out:
 if (VAR_11)
  FUNC_3(VAR_11);

 return VAR_16;
}

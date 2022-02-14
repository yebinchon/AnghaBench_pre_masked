
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {unsigned long size; unsigned long addr; int type; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct mem_chunk*,unsigned long,unsigned long,int) ;
 int FUNC_2 (struct mem_chunk*,int,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

void FUNC_4(struct mem_chunk VAR_1[], unsigned long VAR_2,
       unsigned long VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_1[VAR_11].size == 0)
   continue;


  VAR_8 = VAR_1[VAR_11].addr;
  VAR_10 = VAR_1[VAR_11].size;
  VAR_9 = VAR_8 + VAR_10 - 1;
  VAR_12 = VAR_1[VAR_11].type;


  if (VAR_2 + VAR_3 <= VAR_8)
   continue;
  if (VAR_2 > VAR_9)
   continue;


  VAR_5 = FUNC_0(VAR_2, VAR_1[VAR_11].addr);
  VAR_6 = FUNC_3(VAR_2 + VAR_3 - 1, VAR_9);
  VAR_7 = VAR_6 - VAR_5 + 1;

  if (VAR_5 == VAR_8 && VAR_6 == VAR_9) {

   FUNC_1(&VAR_1[VAR_11], VAR_5, VAR_7, VAR_4);
  } else if (VAR_6 == VAR_9) {

   FUNC_2(VAR_1, VAR_11 + 1, VAR_11);
   FUNC_1(&VAR_1[VAR_11], VAR_8, VAR_10 - VAR_7,
           VAR_12);
   FUNC_1(&VAR_1[VAR_11 + 1], VAR_5, VAR_7, VAR_4);
   VAR_11 += 1;
  } else if (VAR_5 == VAR_8) {

   FUNC_2(VAR_1, VAR_11 + 1, VAR_11);
   FUNC_1(&VAR_1[VAR_11], VAR_5, VAR_7, VAR_4);
   FUNC_1(&VAR_1[VAR_11 + 1], VAR_6 + 1,
           VAR_10 - VAR_7, VAR_12);
   break;
  } else {

   FUNC_2(VAR_1, VAR_11 + 2, VAR_11);
   FUNC_1(&VAR_1[VAR_11], VAR_8,
           VAR_5 - VAR_8, VAR_12);
   FUNC_1(&VAR_1[VAR_11 + 1], VAR_5, VAR_7, VAR_4);
   FUNC_1(&VAR_1[VAR_11 + 2], VAR_6 + 1,
           VAR_9 - VAR_6, VAR_12);
   break;
  }
 }
}

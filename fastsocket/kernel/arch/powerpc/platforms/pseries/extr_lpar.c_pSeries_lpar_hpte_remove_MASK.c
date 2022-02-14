
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (int ,unsigned long,int,unsigned long*,unsigned long*) ;

__attribute__((used)) static long FUNC_3(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 unsigned long VAR_9, VAR_10;


 VAR_6 = FUNC_1() & 0x7;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {


  VAR_7 = FUNC_2(VAR_1, VAR_5 + VAR_6,
        (0x1UL << 4), &VAR_9, &VAR_10);
  if (VAR_7 == VAR_4)
   return VAR_8;






  FUNC_0(VAR_7 != VAR_2 && VAR_7 != VAR_3);

  VAR_6++;
  VAR_6 &= 0x7;
 }

 return -1;
}

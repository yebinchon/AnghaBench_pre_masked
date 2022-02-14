
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;

__attribute__((used)) static long FUNC_5(unsigned long VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 unsigned long VAR_5;


 VAR_3 = FUNC_4() & 0x7;

 FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = FUNC_2(VAR_2 + VAR_3);

  if (! (VAR_5 & VAR_1)) {
   FUNC_0(VAR_2 +
        VAR_3, 0, 0);
   FUNC_3(VAR_2);
   return VAR_4;
  }

  VAR_3++;
  VAR_3 &= 0x7;
 }

 FUNC_3(VAR_2);

 return -1;
}

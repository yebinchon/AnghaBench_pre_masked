
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,unsigned long*,unsigned long*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static unsigned long FUNC_6(void)
{
 int VAR_2;
 u64 VAR_3, VAR_4;
 unsigned long VAR_5, VAR_6;


 FUNC_2((FUNC_1(0x61) & ~0x02) | 0x01, 0x61);
 FUNC_2(0xb0, 0x43);


 FUNC_2(0xff, 0x42);
 FUNC_2(0xff, 0x42);







 FUNC_4(0);

 if (FUNC_3(0xff, &VAR_3, &VAR_5)) {
  for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
   if (!FUNC_3(0xff-VAR_2, &VAR_4, &VAR_6))
    break;




   VAR_4 -= VAR_3;
   if (VAR_5+VAR_6 >= VAR_4 >> 11)
    continue;
   if (!FUNC_4(0xfe - VAR_2))
    break;
   goto success;
  }
 }
 FUNC_5("Fast TSC calibration failed\n");
 return 0;

success:
 VAR_4 *= VAR_1;
 FUNC_0(VAR_4, VAR_2*256*1000);
 FUNC_5("Fast TSC calibration using PIT\n");
 return VAR_4;
}

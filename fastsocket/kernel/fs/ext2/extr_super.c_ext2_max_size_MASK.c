
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static loff_t FUNC_0(int VAR_2)
{
 loff_t VAR_3 = VAR_0;
 int VAR_4;
 loff_t VAR_5;
 VAR_5 = (1LL << 32) - 1;


 VAR_5 >>= (VAR_2 - 9);



 VAR_4 = 1;

 VAR_4 += 1 + (1LL << (VAR_2-2));

 VAR_4 += 1 + (1LL << (VAR_2-2)) + (1LL << (2*(VAR_2-2)));

 VAR_5 -= VAR_4;
 VAR_5 <<= VAR_2;

 VAR_3 += 1LL << (VAR_2-2);
 VAR_3 += 1LL << (2*(VAR_2-2));
 VAR_3 += 1LL << (3*(VAR_2-2));
 VAR_3 <<= VAR_2;
 if (VAR_3 > VAR_5)
  VAR_3 = VAR_5;

 if (VAR_3 > VAR_1)
  VAR_3 = VAR_1;

 return VAR_3;
}

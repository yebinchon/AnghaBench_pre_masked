
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_2) {







  if (VAR_3)
   VAR_2 = 255;
  else
   VAR_2 = 100;
 }
 VAR_6 = ((VAR_4 / 1000) * VAR_2) / 1000;
 VAR_6 = (VAR_6 * 180) / (100 * 1000);
 if (VAR_6 >= VAR_1) {
  FUNC_0("Max access time limit reached\n");
  VAR_6 = VAR_1 - 1;
 }

 VAR_7 = VAR_6 / 7;
 VAR_9 = VAR_6 / 7;
 VAR_8 = (VAR_6 * 5) / 7;

 VAR_7 += VAR_6 - (VAR_7 + VAR_9 + VAR_8);

 VAR_5 = VAR_7 << 12;
 VAR_5 |= VAR_8 << 7;
 VAR_5 |= VAR_9 << 16;

 return VAR_5;
}

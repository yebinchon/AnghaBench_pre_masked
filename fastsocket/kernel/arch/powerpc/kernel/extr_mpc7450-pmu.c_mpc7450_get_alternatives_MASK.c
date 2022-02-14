
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__** VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(u64 VAR_2, unsigned int VAR_3, u64 VAR_4[])
{
 int VAR_5, VAR_6, VAR_7 = 1;
 u32 VAR_8;

 VAR_4[0] = VAR_2;
 VAR_7 = 1;
 VAR_5 = FUNC_0((u32)VAR_2);
 if (VAR_5 >= 0) {
  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
   VAR_8 = VAR_1[VAR_5][VAR_6];
   if (VAR_8 && VAR_8 != (u32)VAR_2)
    VAR_4[VAR_7++] = VAR_8;
  }
 }
 return VAR_7;
}

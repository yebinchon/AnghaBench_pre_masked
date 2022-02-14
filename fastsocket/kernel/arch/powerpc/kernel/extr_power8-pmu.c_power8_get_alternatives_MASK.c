
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(u64 VAR_3, unsigned int VAR_4, u64 VAR_5[])
{
 int VAR_6, VAR_7, VAR_8 = 0;
 u64 VAR_9;

 VAR_5[VAR_8++] = VAR_3;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 >= 0) {

  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
   VAR_9 = VAR_2[VAR_6][VAR_7];
   if (VAR_9 && VAR_9 != VAR_3)
    VAR_5[VAR_8++] = VAR_9;
  }
 }

 if (VAR_4 & VAR_1) {




  VAR_7 = VAR_8;
  for (VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6) {
   switch (VAR_5[VAR_6]) {
   case 0x1e:
    VAR_5[VAR_7++] = 0x600f4;
    break;
   case 0x600f4:
    VAR_5[VAR_7++] = 0x1e;
    break;
   case 0x2:
    VAR_5[VAR_7++] = 0x500fa;
    break;
   case 0x500fa:
    VAR_5[VAR_7++] = 0x2;
    break;
   }
  }
  VAR_8 = VAR_7;
 }

 return VAR_8;
}

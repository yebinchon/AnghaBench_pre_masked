
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int count; } ;
struct cx18 {TYPE_1__ vbi; } ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int,int) ;
 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_2(struct cx18 *VAR_2, u8 *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_1;
 u32 VAR_7 = VAR_2->vbi.count * 2;
 u8 *VAR_8 = VAR_3;
 u8 *VAR_9;
 int VAR_10;


 VAR_3 += VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = VAR_3 + VAR_10 * VAR_6;


  if (VAR_9[0] != 0xff || VAR_9[1] || VAR_9[2] ||
      (VAR_9[3] != VAR_0[0] &&
       VAR_9[3] != VAR_0[1]))
   break;
  if (VAR_10 == VAR_7 - 1) {

   FUNC_0(VAR_8, VAR_9 + 4, VAR_6 - 4 - VAR_5);
   VAR_8 += VAR_6 - 4 - VAR_5;
   VAR_9 += VAR_6 - VAR_5 - 1;
   FUNC_1(VAR_8, (int) *VAR_9, VAR_5);
  } else {
   FUNC_0(VAR_8, VAR_9 + 4, VAR_6 - 4);
   VAR_8 += VAR_6 - 4;
  }
 }
 return VAR_7 * (VAR_6 - 4);
}

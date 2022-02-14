
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (int,int,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{



 UBYTE *VAR_8 = (UBYTE *) VAR_1 + VAR_0 * 24 + 32 + VAR_4 * 8 + VAR_5 * (VAR_0 * 8);
 int VAR_9 = (VAR_6 - VAR_4 + 1) << 3;
 UBYTE *VAR_10 = (UBYTE *) VAR_1 + VAR_0 * 32 + 32 + VAR_7 * (VAR_0 * 8);
 while (VAR_8 < VAR_10) {



  FUNC_0(VAR_8, (UBYTE) VAR_3, VAR_9);

  VAR_8 += VAR_0;
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef unsigned int u64 ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int * VAR_6 ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_8)
{
 u64 VAR_9;
 unsigned int VAR_10;
 int VAR_11;







 VAR_10 = VAR_8;
 if ((VAR_10 >= VAR_2) && (VAR_10 <= VAR_1)) {
  VAR_10 -= VAR_2;
 }
 for (VAR_11=0; VAR_11<2; VAR_11++) {
  VAR_9 = FUNC_2(FUNC_1(FUNC_0(VAR_6[VAR_8],
      VAR_5 + (VAR_11*VAR_0))));
  VAR_9 &= ((u64)1 << (VAR_10));
  if (VAR_9) {
   FUNC_3(VAR_9, FUNC_1(FUNC_0(0, VAR_4 + (VAR_11*VAR_0))));
  }
 }
 FUNC_4(VAR_6[VAR_8], VAR_8);
}

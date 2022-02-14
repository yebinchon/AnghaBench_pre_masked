
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct maestro {int io; int muted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct maestro *VAR_5, u32 VAR_6)
{
 u16 VAR_7 = VAR_5->io, VAR_8, VAR_9;
 u16 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_7 + VAR_1);
 VAR_11 = (FUNC_0(VAR_7 + VAR_0) & ~VAR_3) | (VAR_2 | VAR_4);
 FUNC_2(VAR_11 | VAR_3, VAR_7 + VAR_0);
 FUNC_2(~(VAR_3 | VAR_2 | VAR_4), VAR_7 + VAR_1);
 FUNC_3(16);
 for (VAR_8 = 25; VAR_8; VAR_8--) {
  VAR_9 = ((VAR_6 >> 18) & VAR_3) | VAR_4;
  VAR_6 <<= 1;
  FUNC_2(VAR_9, VAR_7);
  FUNC_3(2);
  FUNC_2(VAR_9 | VAR_2, VAR_7);
  FUNC_3(2);
  FUNC_2(VAR_9, VAR_7);
  FUNC_3(4);
 }

 if (!VAR_5->muted)
  FUNC_2(0, VAR_7);

 FUNC_3(4);
 FUNC_2(VAR_10, VAR_7 + VAR_1);
 FUNC_2(VAR_11, VAR_7 + VAR_0);
 FUNC_1(125);
}

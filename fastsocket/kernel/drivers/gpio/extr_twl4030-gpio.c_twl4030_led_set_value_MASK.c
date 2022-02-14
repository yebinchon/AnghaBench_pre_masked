
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_6, int VAR_7)
{
 u8 VAR_8 = VAR_0 | VAR_1;
 int VAR_9;

 if (VAR_6)
  VAR_8 <<= 1;

 FUNC_0(&VAR_5);
 if (VAR_7)
  VAR_4 &= ~VAR_8;
 else
  VAR_4 |= VAR_8;
 VAR_9 = FUNC_2(VAR_3, VAR_4,
   VAR_2);
 FUNC_1(&VAR_5);
}

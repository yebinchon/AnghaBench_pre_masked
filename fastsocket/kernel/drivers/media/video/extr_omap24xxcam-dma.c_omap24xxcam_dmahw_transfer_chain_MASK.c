
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long,int ,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3, int VAR_4,
          int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4 == 0)
  VAR_6 = VAR_2 - 1;
 else
  VAR_6 = VAR_4 - 1;
 FUNC_4(VAR_3, FUNC_1(VAR_6),
       VAR_1 | VAR_4);



 VAR_7 = (VAR_4 + VAR_5) % VAR_2;
 while (!(FUNC_3(VAR_3, FUNC_0(VAR_7))
   & VAR_0)) {
  if (VAR_7 == VAR_4) {





   FUNC_2(VAR_3, VAR_4);
   break;
  } else
   VAR_7 = (VAR_7 + 1) % VAR_2;
 }
}

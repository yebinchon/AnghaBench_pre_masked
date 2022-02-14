
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;

unsigned long FUNC_3(void)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 long VAR_9;

 FUNC_2 (0, VAR_3);
 FUNC_0 ();
 VAR_6 = FUNC_1(VAR_2) | (FUNC_1(VAR_1) << 8);
 FUNC_0 ();
 VAR_8 = FUNC_1(VAR_0);
 FUNC_0 ();
 FUNC_2 (0, VAR_3);
 FUNC_0 ();
 VAR_7 = FUNC_1(VAR_2) | (FUNC_1(VAR_1) << 8);

 VAR_9 = VAR_7;
 if (VAR_7 < VAR_6) {




  if (VAR_8 & (1 << 5))
   VAR_9 -= VAR_4;
 } else if (VAR_7 > VAR_6) {




  VAR_9 -= VAR_4;
 }

 VAR_9 = (VAR_4 - VAR_9) * (VAR_5 / 1000);
 return (VAR_9 + VAR_4/2) / VAR_4;
}

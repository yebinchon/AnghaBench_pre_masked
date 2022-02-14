
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 long FUNC_1 (int ,int ,unsigned long,int ) ;

__attribute__((used)) static inline long FUNC_2(unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_0();
 long VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; !VAR_6 && VAR_7 < VAR_3; VAR_7 += VAR_5)
  VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_4 + VAR_7, 0);

 for (VAR_7 -= VAR_5; VAR_6 && VAR_7 != 0; VAR_7 -= VAR_5)
  FUNC_1(VAR_0, VAR_1,
       VAR_4 + VAR_7 - VAR_5, 0);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (unsigned long,int *,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_6, unsigned VAR_7)
{
 unsigned long VAR_8, VAR_9;
 unsigned VAR_10;
 VAR_9 = (VAR_6 + VAR_3 - 1) & VAR_2;
 if (VAR_9 >= VAR_5)
  VAR_9 = VAR_5;
 VAR_9 -= VAR_7;

 VAR_10 = FUNC_2() & (VAR_4 - 1);
 VAR_8 = VAR_6 + (VAR_10 << VAR_1);
 if (VAR_8 >= VAR_9)
  VAR_8 = VAR_9;






 VAR_8 = FUNC_0(VAR_8);
 VAR_8 = FUNC_1(VAR_8, ((void*)0), VAR_0);

 return VAR_8;
}

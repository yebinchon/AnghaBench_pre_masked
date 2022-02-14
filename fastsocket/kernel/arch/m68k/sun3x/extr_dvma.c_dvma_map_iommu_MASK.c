
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long) ;
 int * VAR_4 ;

inline int FUNC_3(unsigned long VAR_5, unsigned long VAR_6,
     int VAR_7)
{
 unsigned long VAR_8, VAR_9;

 VAR_9 = VAR_6 >> VAR_1;
 VAR_8 = ((VAR_6+VAR_7) >> VAR_1);

 if(VAR_7 & ~VAR_0)
  VAR_8++;

 for(; VAR_9 < VAR_8 ; VAR_9++) {




  FUNC_1(VAR_9, FUNC_0(VAR_5));

  VAR_4[VAR_9] |= VAR_3;


  VAR_5 += VAR_2;
 }





 return 0;

}

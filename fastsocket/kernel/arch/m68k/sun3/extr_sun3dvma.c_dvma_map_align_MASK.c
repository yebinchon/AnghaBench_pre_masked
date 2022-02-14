
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_2 (int,int) ;
 int FUNC_3 (char*,unsigned long,unsigned long,...) ;

inline unsigned long FUNC_4(unsigned long VAR_3, int VAR_4, int VAR_5)
{

 unsigned long VAR_6;
 unsigned long VAR_7;

 if(!VAR_4)
  VAR_4 = 0x800;

 if(!VAR_3 || !VAR_4) {


  return 0;
 }





 VAR_7 = VAR_3 & ~VAR_0;
 VAR_3 &= VAR_2;
 VAR_4 += VAR_7;
 VAR_4 = ((VAR_4 + (VAR_1-1)) & VAR_0);

 if(VAR_5 == 0)
  VAR_5 = VAR_1;
 else
  VAR_5 = ((VAR_5 + (VAR_1-1)) & VAR_0);

 VAR_6 = FUNC_2(VAR_4, VAR_5);


 if(!FUNC_1(VAR_3, VAR_6, VAR_4))
  return (VAR_6 + VAR_7);

 FUNC_3("dvma_map failed kaddr %lx baddr %lx len %x\n", VAR_3, VAR_6, VAR_4);
 FUNC_0();
 return 0;
}

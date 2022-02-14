
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;


 unsigned long VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long *VAR_6;
 void *VAR_7;
 void *VAR_8;







 VAR_6 = ((void*)0);
 VAR_7 = ((void*)0);

 for (VAR_5 = VAR_4; !(VAR_5 & VAR_0); VAR_5 = *VAR_6++) {
  VAR_8 = FUNC_0(VAR_5 & VAR_2);

  switch (VAR_5 & VAR_1) {
  case 130:
   VAR_7 = VAR_8;
   break;
  case 129:
   VAR_6 = VAR_8;
   break;
  case 128:
   FUNC_1(VAR_7, VAR_8);
   VAR_7 += VAR_3;
  }
 }
}

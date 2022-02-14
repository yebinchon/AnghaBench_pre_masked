
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;



 unsigned long FUNC_2 (void const*) ;
 void FUNC_3 (void const*,void const*) ;
 void FUNC_4 (void const*,void const*) ;
 void FUNC_5 (void const*,void const*) ;
 void FUNC_6 (unsigned long,unsigned long) ;
 void FUNC_7 (unsigned long,unsigned long) ;
 void FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (void const*) ;

void FUNC_10(const void *VAR_0, size_t VAR_1, int VAR_2)
{
 void (*VAR_3)(const void *, const void *);
 void (*VAR_4)(unsigned long, unsigned long);

 FUNC_1(!FUNC_9(VAR_0) || !FUNC_9(VAR_0 + VAR_1 - 1));

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_5;
  VAR_4 = FUNC_8;
  break;
 case 128:
  VAR_3 = FUNC_3;
  VAR_4 = FUNC_6;
  break;
 case 130:
  VAR_3 = FUNC_4;
  VAR_4 = FUNC_7;
  break;
 default:
  FUNC_0();
 }

 VAR_3(VAR_0, VAR_0 + VAR_1);
 VAR_4(FUNC_2(VAR_0), FUNC_2(VAR_0) + VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct page*) ;
 void FUNC_2 (void const*,void const*) ;
 void FUNC_3 (void const*,void const*) ;
 void FUNC_4 (void const*,void const*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 void FUNC_7 (unsigned long,unsigned long) ;
 void FUNC_8 (unsigned long,unsigned long) ;
 void FUNC_9 (unsigned long,unsigned long) ;
 void* FUNC_10 (struct page*) ;
 unsigned long FUNC_11 (struct page*) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_0, unsigned long VAR_1,
           size_t VAR_2, int VAR_3)
{
 void *VAR_4;
 unsigned long VAR_5;
 void (*VAR_6)(const void *, const void *);
 void (*VAR_7)(unsigned long, unsigned long);

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_4;
  VAR_7 = FUNC_9;
  break;
 case 128:
  VAR_6 = FUNC_2;
  VAR_7 = FUNC_7;
  break;
 case 130:
  VAR_6 = FUNC_3;
  VAR_7 = FUNC_8;
  break;
 default:
  FUNC_0();
 }

 if (!FUNC_1(VAR_0)) {
  VAR_4 = FUNC_10(VAR_0) + VAR_1;
  VAR_6(VAR_4, VAR_4 + VAR_2);
 } else {
  VAR_4 = FUNC_5(VAR_0);
  if (VAR_4) {
   VAR_4 += VAR_1;
   VAR_6(VAR_4, VAR_4 + VAR_2);
   FUNC_6(VAR_0);
  }
 }

 VAR_5 = FUNC_11(VAR_0) + VAR_1;
 VAR_7(VAR_5, VAR_5 + VAR_2);
}

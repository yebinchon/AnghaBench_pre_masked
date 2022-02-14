
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,int ,scalar_t__) ;
 int FUNC_4 (char*,unsigned long) ;
 int VAR_4 ;
 int FUNC_5 (unsigned long) ;

void FUNC_6(void)
{
 unsigned long VAR_5;

 VAR_5 = (unsigned long)VAR_2;
 for (; VAR_5 < (unsigned long)VAR_3; VAR_5 += VAR_0) {
  FUNC_3((void *)VAR_5, VAR_1, VAR_0);
  FUNC_0(FUNC_5(VAR_5));
  FUNC_2(FUNC_5(VAR_5));
  FUNC_1(VAR_5);
  VAR_4++;
 }
 FUNC_4 ("Freeing unused kernel memory: %luk freed\n",
  ((unsigned long)VAR_3 - (unsigned long)VAR_2) >> 10);
}

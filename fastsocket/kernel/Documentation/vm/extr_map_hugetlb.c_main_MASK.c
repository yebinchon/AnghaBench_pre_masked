
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

int FUNC_8(void)
{
 void *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_4, VAR_1, 0, 0);
 if (VAR_5 == VAR_3) {
  FUNC_4("mmap");
  FUNC_1(1);
 }

 FUNC_5("Returned address is %p\n", VAR_5);
 FUNC_0(VAR_5);
 FUNC_7(VAR_5);
 FUNC_6(VAR_5);

 FUNC_3(VAR_5, VAR_2);

 return 0;
}

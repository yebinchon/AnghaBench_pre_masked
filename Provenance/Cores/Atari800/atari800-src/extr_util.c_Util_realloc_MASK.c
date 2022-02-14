
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (void*,size_t) ;

void *FUNC_4(void *VAR_0, size_t VAR_1)
{
 VAR_0 = FUNC_3(VAR_0, VAR_1);
 if (VAR_0 == ((void*)0)) {
  FUNC_0();
  FUNC_2("Fatal error: out of memory\n");
  FUNC_1(1);
 }
 return VAR_0;
}

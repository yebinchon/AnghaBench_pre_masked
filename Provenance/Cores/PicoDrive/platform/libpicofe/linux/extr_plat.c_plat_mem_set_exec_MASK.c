
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,size_t,int ) ;
 int FUNC_1 (void*,size_t,int) ;
 int VAR_4 ;

int FUNC_2(void *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_1 | VAR_2 | VAR_0);
 if (VAR_7 != 0)
  FUNC_0(VAR_4, "mprotect(%p, %zd) failed: %d\n",
   VAR_5, VAR_6, VAR_3);

 return VAR_7;
}

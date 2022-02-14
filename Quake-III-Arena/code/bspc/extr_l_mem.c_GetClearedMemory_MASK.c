
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,int ,int) ;

void *FUNC_4(int VAR_1)
{
 void *VAR_2;

 VAR_2 = (void *) FUNC_2(VAR_1);
 if (!VAR_2) FUNC_0("out of memory");
 FUNC_3(VAR_2, 0, VAR_1);
 VAR_0 += FUNC_1(VAR_2);
 return VAR_2;
}

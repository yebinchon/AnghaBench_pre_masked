
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int,int *,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_3)
{
 size_t VAR_4 = VAR_3;
 int VAR_5[] = { VAR_0, VAR_1, VAR_2 };
 FUNC_0(FUNC_1(VAR_5, sizeof(VAR_5) / sizeof(VAR_5[0]), ((void*)0),
   &VAR_4, ((void*)0), 0), "KERN_KDTEST sysctl");
}

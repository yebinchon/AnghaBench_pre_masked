
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencomm_handle {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static struct xencomm_handle *FUNC_3(void *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!FUNC_1((unsigned long)VAR_1));

 VAR_2 = (unsigned long)FUNC_2(VAR_1);
 FUNC_0(VAR_2 & VAR_0);
 return (struct xencomm_handle *)(VAR_2 | VAR_0);
}

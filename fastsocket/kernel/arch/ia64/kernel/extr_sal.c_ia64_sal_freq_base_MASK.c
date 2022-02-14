
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_sal_retval {unsigned long v0; unsigned long v1; long status; } ;


 int FUNC_0 (struct ia64_sal_retval,int ,unsigned long,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

long
FUNC_1 (unsigned long VAR_1, unsigned long *VAR_2,
      unsigned long *VAR_3)
{
 struct ia64_sal_retval VAR_4;

 FUNC_0(VAR_4, VAR_0, VAR_1, 0, 0, 0, 0, 0, 0);
 *VAR_2 = VAR_4.v0;
 *VAR_3 = VAR_4.v1;
 return VAR_4.status;
}

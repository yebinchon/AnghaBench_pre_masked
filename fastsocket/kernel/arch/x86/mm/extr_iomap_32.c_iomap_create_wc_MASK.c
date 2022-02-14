
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ resource_size_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned long*) ;
 int FUNC_2 (scalar_t__,unsigned long) ;

int FUNC_3(resource_size_t VAR_3, unsigned long VAR_4, pgprot_t *VAR_5)
{
 unsigned long VAR_6 = VAR_1;
 int VAR_7;

 if (!FUNC_2(VAR_3, VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_3 + VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_5 = FUNC_0(VAR_2 | VAR_6);
 return 0;
}

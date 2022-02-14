
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_1_2_2 {unsigned int capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sysinfo_1_2_2*,int,int,int) ;

int FUNC_3(unsigned int *VAR_3)
{
 struct sysinfo_1_2_2 *VAR_4;
 int VAR_5;

 VAR_4 = (void *) FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_4, 1, 2, 2);
 if (VAR_5 == -VAR_1)
  goto out;
 VAR_5 = 0;
 *VAR_3 = VAR_4->capability;
out:
 FUNC_0((unsigned long) VAR_4);
 return VAR_5;
}

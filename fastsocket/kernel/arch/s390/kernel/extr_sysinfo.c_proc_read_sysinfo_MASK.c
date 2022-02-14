
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_3_2_2 {int dummy; } ;
struct sysinfo_2_2_2 {int dummy; } ;
struct sysinfo_1_2_2 {int dummy; } ;
struct sysinfo_1_1_1 {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sysinfo_1_1_1*,char*,int) ;
 int FUNC_4 (struct sysinfo_1_2_2*,char*,int) ;
 int FUNC_5 (struct sysinfo_2_2_2*,char*,int) ;
 int FUNC_6 (struct sysinfo_3_2_2*,char*,int) ;

__attribute__((used)) static int FUNC_7(char *VAR_1, char **VAR_2,
        off_t VAR_3, int VAR_4,
        int *VAR_5, void *VAR_6)
{
 unsigned long VAR_7 = FUNC_1(VAR_0);
 int VAR_8, VAR_9;

 if (!VAR_7)
  return 0;

 VAR_9 = 0;
 VAR_8 = FUNC_2();
 if (VAR_8 >= 1)
  VAR_9 = FUNC_3((struct sysinfo_1_1_1 *) VAR_7, VAR_1, VAR_9);

 if (VAR_8 >= 1)
  VAR_9 = FUNC_4((struct sysinfo_1_2_2 *) VAR_7, VAR_1, VAR_9);

 if (VAR_8 >= 2)
  VAR_9 = FUNC_5((struct sysinfo_2_2_2 *) VAR_7, VAR_1, VAR_9);

 if (VAR_8 >= 3)
  VAR_9 = FUNC_6((struct sysinfo_3_2_2 *) VAR_7, VAR_1, VAR_9);

 FUNC_0(VAR_7);
 return VAR_9;
}

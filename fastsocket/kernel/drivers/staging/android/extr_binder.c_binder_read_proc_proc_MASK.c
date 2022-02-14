
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_proc {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char*,struct binder_proc*,int) ;
 int FUNC_3 (char*,int,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char **VAR_4, off_t VAR_5,
     int VAR_6, int *VAR_7, void *VAR_8)
{
 struct binder_proc *VAR_9 = VAR_8;
 int VAR_10 = 0;
 char *VAR_11 = VAR_3;
 int VAR_12 = !VAR_1;

 if (VAR_5)
  return 0;

 if (VAR_12)
  FUNC_0(&VAR_2);
 VAR_11 += FUNC_3(VAR_11, VAR_0, "binder proc state:\n");
 VAR_11 = FUNC_2(VAR_11, VAR_3 + VAR_0, VAR_9, 1);
 if (VAR_12)
  FUNC_1(&VAR_2);

 if (VAR_11 > VAR_3 + VAR_0)
  VAR_11 = VAR_3 + VAR_0;
 *VAR_4 = VAR_3 + VAR_5;

 VAR_10 = VAR_11 - VAR_3;
 if (VAR_10 > VAR_5)
  VAR_10 -= VAR_5;
 else
  VAR_10 = 0;

 return VAR_10 < VAR_6 ? VAR_10 : VAR_6;
}

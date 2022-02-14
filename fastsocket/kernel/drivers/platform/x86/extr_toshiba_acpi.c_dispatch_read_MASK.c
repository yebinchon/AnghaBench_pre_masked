
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {char* (* read_func ) (char*) ;} ;
typedef TYPE_1__ ProcItem ;


 char* FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, char **VAR_1, off_t VAR_2, int VAR_3, int *VAR_4,
       ProcItem * VAR_5)
{
 char *VAR_6 = VAR_0;
 int VAR_7;

 if (VAR_2 == 0)
  VAR_6 = VAR_5->read_func(VAR_6);


 VAR_7 = (VAR_6 - VAR_0);
 if (VAR_7 <= VAR_2 + VAR_3)
  *VAR_4 = 1;
 *VAR_1 = VAR_0 + VAR_2;
 VAR_7 -= VAR_2;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;
 if (VAR_7 < 0)
  VAR_7 = 0;
 return VAR_7;
}

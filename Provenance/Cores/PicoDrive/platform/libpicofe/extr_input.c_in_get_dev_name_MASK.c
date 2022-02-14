
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int probed; } ;
typedef TYPE_1__ in_dev_t ;


 TYPE_1__* FUNC_0 (int) ;
 char* FUNC_1 (char const*,char) ;

const char *FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 const char *VAR_3, *VAR_4;
 in_dev_t *VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (VAR_1 && !VAR_5->probed)
  return ((void*)0);

 VAR_3 = VAR_5->name;
 if (VAR_3 == ((void*)0) || !VAR_2)
  return VAR_3;


 VAR_4 = FUNC_1(VAR_3, ':');
 if (VAR_4 != ((void*)0))
  VAR_3 = VAR_4 + 1;

 return VAR_3;
}

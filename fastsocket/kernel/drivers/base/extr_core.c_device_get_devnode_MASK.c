
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_2__* class; TYPE_1__* type; } ;
typedef int mode_t ;
struct TYPE_4__ {char* (* devnode ) (struct device*,int *) ;} ;
struct TYPE_3__ {char* (* devnode ) (struct device*,int *) ;} ;


 int VAR_0 ;
 char const* FUNC_0 (struct device*) ;
 char* FUNC_1 (char const*,int ) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (struct device*,int *) ;
 char* FUNC_4 (struct device*,int *) ;

const char *FUNC_5(struct device *VAR_1,
          mode_t *VAR_2, const char **VAR_3)
{
 char *VAR_4;

 *VAR_3 = ((void*)0);


 if (VAR_1->type && VAR_1->type->devnode)
  *VAR_3 = VAR_1->type->devnode(VAR_1, VAR_2);
 if (*VAR_3)
  return *VAR_3;


 if (VAR_1->class && VAR_1->class->devnode)
  *VAR_3 = VAR_1->class->devnode(VAR_1, VAR_2);
 if (*VAR_3)
  return *VAR_3;


 if (FUNC_2(FUNC_0(VAR_1), '!') == ((void*)0))
  return FUNC_0(VAR_1);


 *VAR_3 = FUNC_1(FUNC_0(VAR_1), VAR_0);
 if (!*VAR_3)
  return ((void*)0);
 while ((VAR_4 = FUNC_2(*VAR_3, '!')))
  VAR_4[0] = '/';
 return *VAR_3;
}

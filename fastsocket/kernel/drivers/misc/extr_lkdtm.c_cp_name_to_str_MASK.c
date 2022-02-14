
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cname { ____Placeholder_cname } cname ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *FUNC_1(enum cname VAR_2)
{
 if (VAR_2 == VAR_0 || VAR_2 < 0 || VAR_2 > FUNC_0(VAR_1))
  return "INVALID";

 return VAR_1[VAR_2 - 1];
}

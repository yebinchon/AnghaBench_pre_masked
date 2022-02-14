
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char const** VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(float VAR_2)
{
 return VAR_2 >= sizeof VAR_1 / sizeof *VAR_1 ? VAR_0 : VAR_1[(int)VAR_2];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline const char *FUNC_0(unsigned int VAR_0, char **VAR_1,
           unsigned int VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_0 < VAR_2)
  VAR_3 = VAR_1[VAR_0];
 if (!VAR_3)
  VAR_3 = "unknown";
 return VAR_3;
}

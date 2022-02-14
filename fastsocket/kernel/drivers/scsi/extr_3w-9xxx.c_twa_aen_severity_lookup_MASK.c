
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;

__attribute__((used)) static char *FUNC_0(unsigned char VAR_3)
{
 char *VAR_4 = ((void*)0);

 if ((VAR_3 < (unsigned char) VAR_1) ||
     (VAR_3 > (unsigned char) VAR_0))
  goto out;

 VAR_4 = VAR_2[VAR_3];
out:
 return VAR_4;
}

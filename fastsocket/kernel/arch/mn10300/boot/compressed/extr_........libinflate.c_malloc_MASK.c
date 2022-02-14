
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_1(int VAR_4)
{
       void *VAR_5;

       if (VAR_4 < 0)
  FUNC_0("Malloc error");
       if (!VAR_3)
  VAR_3 = VAR_1;

       VAR_3 = (VAR_3 + 3) & ~3;

       VAR_5 = (void *)VAR_3;
       VAR_3 += VAR_4;

       if (VAR_0 && VAR_3 >= VAR_0)
  FUNC_0("Out of memory");

       VAR_2++;
       return VAR_5;
}

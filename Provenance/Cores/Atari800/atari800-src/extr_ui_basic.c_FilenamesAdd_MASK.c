
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;
 char const** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(const char *VAR_3)
{
 if (VAR_2 >= VAR_0 && (VAR_2 & (VAR_2 - 1)) == 0) {

  VAR_1 = (const char **) FUNC_0((void *) VAR_1, 2 * VAR_2 * sizeof(const char *));
 }
 VAR_1[VAR_2++] = VAR_3;
}

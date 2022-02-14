
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias_map {int dummy; } ;


 struct alias_map* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct alias_map*,size_t) ;

__attribute__((used)) static int
FUNC_1 ()
{
  size_t VAR_2;
  struct alias_map *VAR_3;

  VAR_2 = VAR_1 == 0 ? 100 : 2 * VAR_1;
  VAR_3 = (struct alias_map *) FUNC_0 (VAR_0, (VAR_2
      * sizeof (struct alias_map)));
  if (VAR_3 == ((void*)0))

    return -1;

  VAR_0 = VAR_3;
  VAR_1 = VAR_2;
  return 0;
}

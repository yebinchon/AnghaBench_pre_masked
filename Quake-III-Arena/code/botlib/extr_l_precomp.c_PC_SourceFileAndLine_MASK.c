
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* scriptstack; int filename; } ;
struct TYPE_3__ {int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int FUNC_0 (char*,int ) ;

int FUNC_1(int VAR_4, char *VAR_5, int *VAR_6)
{
 if (VAR_4 < 1 || VAR_4 >= VAR_0)
  return VAR_1;
 if (!VAR_3[VAR_4])
  return VAR_1;

 FUNC_0(VAR_5, VAR_3[VAR_4]->filename);
 if (VAR_3[VAR_4]->scriptstack)
  *VAR_6 = VAR_3[VAR_4]->scriptstack->line;
 else
  *VAR_6 = 0;
 return VAR_2;
}

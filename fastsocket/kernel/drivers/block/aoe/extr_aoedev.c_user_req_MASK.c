
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aoedev {TYPE_1__* gd; } ;
struct TYPE_2__ {char* disk_name; } ;


 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, size_t VAR_1, struct aoedev *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 if (!VAR_2->gd)
  return 0;
 VAR_3 = FUNC_1(VAR_2->gd->disk_name, '/');
 if (!VAR_3)
  VAR_3 = VAR_2->gd->disk_name;
 else
  VAR_3 += 1;
 VAR_4 = sizeof(VAR_2->gd->disk_name);
 VAR_4 -= VAR_3 - VAR_2->gd->disk_name;
 if (VAR_1 < VAR_4)
  VAR_4 = VAR_1;

 return !FUNC_0(VAR_0, VAR_3, VAR_4);
}

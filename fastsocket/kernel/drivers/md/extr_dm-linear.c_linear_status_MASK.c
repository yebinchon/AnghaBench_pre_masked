
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linear_c {TYPE_1__* dev; scalar_t__ start; } ;
struct dm_target {scalar_t__ private; } ;
typedef int status_type_t ;
struct TYPE_2__ {char* name; } ;




 int FUNC_0 (char*,unsigned int,char*,char*,unsigned long long) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
    char *VAR_2, unsigned int VAR_3)
{
 struct linear_c *VAR_4 = (struct linear_c *) VAR_0->private;

 switch (VAR_1) {
 case 129:
  VAR_2[0] = '\0';
  break;

 case 128:
  FUNC_0(VAR_2, VAR_3, "%s %llu", VAR_4->dev->name,
    (unsigned long long)VAR_4->start);
  break;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_dev* private; } ;
struct dm_dev {char* name; } ;
typedef int status_type_t ;




 int FUNC_0 (char*,unsigned int,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1, char *VAR_2,
    unsigned int VAR_3)
{
 struct dm_dev *VAR_4 = VAR_0->private;

 switch (VAR_1) {
 case 129:
  VAR_2[0] = '\0';
  break;

 case 128:
  FUNC_0(VAR_2, VAR_3, "%s", VAR_4->name);
  break;
 }

 return 0;
}

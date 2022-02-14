
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trackpoint_data {int dummy; } ;
struct trackpoint_attr_data {int field_offset; int command; } ;
struct psmouse {int ps2dev; struct trackpoint_data* private; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_1, void *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct trackpoint_data *VAR_5 = VAR_1->private;
 struct trackpoint_attr_data *VAR_6 = VAR_2;
 unsigned char *VAR_7 = (unsigned char *)((char *)VAR_5 + VAR_6->field_offset);
 unsigned long VAR_8;

 if (FUNC_0(VAR_3, 10, &VAR_8) || VAR_8 > 255)
  return -VAR_0;

 *VAR_7 = VAR_8;
 FUNC_1(&VAR_1->ps2dev, VAR_6->command, VAR_8);

 return VAR_4;
}

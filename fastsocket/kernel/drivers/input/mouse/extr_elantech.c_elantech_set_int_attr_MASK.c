
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct elantech_data* private; } ;
struct elantech_data {int hw_version; } ;
struct elantech_attr_data {int field_offset; int reg; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct psmouse*,int,unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_3,
         void *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct elantech_data *VAR_7 = VAR_3->private;
 struct elantech_attr_data *VAR_8 = VAR_4;
 unsigned char *VAR_9 = (unsigned char *) VAR_7 + VAR_8->field_offset;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_5, 16, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10 > 0xff)
  return -VAR_0;


 if (VAR_7->hw_version == 1) {
  if (VAR_8->reg == 0x10)

   VAR_10 |= VAR_1;
  else if (VAR_8->reg == 0x11)

   VAR_10 |= VAR_2;
 }

 if (!VAR_8->reg || FUNC_0(VAR_3, VAR_8->reg, VAR_10) == 0)
  *VAR_9 = VAR_10;

 return VAR_6;
}

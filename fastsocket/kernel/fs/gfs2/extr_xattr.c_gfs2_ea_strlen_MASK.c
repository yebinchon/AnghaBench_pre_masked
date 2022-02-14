
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_ea_header {int ea_type; int ea_name_len; } ;






__attribute__((used)) static inline unsigned int FUNC_0(struct gfs2_ea_header *VAR_0)
{
 switch (VAR_0->ea_type) {
 case 128:
  return 5 + VAR_0->ea_name_len + 1;
 case 129:
  return 7 + VAR_0->ea_name_len + 1;
 case 130:
  return 9 + VAR_0->ea_name_len + 1;
 default:
  return 0;
 }
}

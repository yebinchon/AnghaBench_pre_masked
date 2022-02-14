
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recurse_struct {int fn; struct parse_tree_data* obj; } ;
struct parse_tree_data {int index; struct device* dev; struct hardware_path* modpath; } ;
struct hardware_path {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*,struct recurse_struct*,int ) ;

__attribute__((used)) static struct device *
FUNC_1(struct device *VAR_2, int VAR_3, struct hardware_path *VAR_4)
{
 struct parse_tree_data VAR_5 = {
  .index = VAR_3,
  .modpath = VAR_4,
 };

 struct recurse_struct VAR_6 = {
  .obj = &VAR_5,
  .fn = VAR_0,
 };

 if (FUNC_0(VAR_2, &VAR_6, VAR_1))
               ;

 return VAR_5.dev;
}

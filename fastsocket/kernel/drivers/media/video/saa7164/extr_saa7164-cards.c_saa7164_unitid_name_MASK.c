
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct saa7164_unit {scalar_t__ type; scalar_t__ id; char* name; } ;
struct saa7164_dev {size_t board; } ;
struct TYPE_2__ {struct saa7164_unit* unit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

char *FUNC_0(struct saa7164_dev *VAR_3, u8 VAR_4)
{
 char *VAR_5 = "UNDEFINED";
 char *VAR_6 = "BRIDGE";
 struct saa7164_unit *VAR_7;
 int VAR_8;

 if (VAR_4 == 0)
  return VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = &VAR_2[VAR_3->board].unit[VAR_8];

  if (VAR_7->type == VAR_1)
   continue;

  if (VAR_4 == VAR_7->id)
    return VAR_7->name;
 }

 return VAR_5;
}

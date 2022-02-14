
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct log_c {int region_size; TYPE_2__* log_dev; int sync; int log_dev_failed; int log_dev_flush_failed; } ;
struct dm_dirty_log {TYPE_1__* type; struct log_c* context; } ;
typedef int status_type_t ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,float,...) ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_1(struct dm_dirty_log *VAR_2, status_type_t VAR_3,
         char *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 struct log_c *VAR_7 = VAR_2->context;

 switch(VAR_3) {
 case 129:
  FUNC_0("3 %s %s %c", VAR_2->type->name, VAR_7->log_dev->name,
         VAR_7->log_dev_flush_failed ? 'F' :
         VAR_7->log_dev_failed ? 'D' :
         'A');
  break;

 case 128:
  FUNC_0("%s %u %s %u ", VAR_2->type->name,
         VAR_7->sync == VAR_0 ? 2 : 3, VAR_7->log_dev->name,
         VAR_7->region_size);
  VAR_1;
 }

 return VAR_6;
}

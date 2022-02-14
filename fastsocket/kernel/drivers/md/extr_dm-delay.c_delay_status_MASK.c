
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {struct delay_c* private; } ;
struct delay_c {int write_delay; scalar_t__ start_write; TYPE_2__* dev_write; int read_delay; scalar_t__ start_read; TYPE_1__* dev_read; int writes; int reads; } ;
typedef int status_type_t ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,unsigned long long,...) ;



__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, status_type_t VAR_1,
   char *VAR_2, unsigned VAR_3)
{
 struct delay_c *VAR_4 = VAR_0->private;
 int VAR_5 = 0;

 switch (VAR_1) {
 case 129:
  FUNC_0("%u %u", VAR_4->reads, VAR_4->writes);
  break;

 case 128:
  FUNC_0("%s %llu %u", VAR_4->dev_read->name,
         (unsigned long long) VAR_4->start_read,
         VAR_4->read_delay);
  if (VAR_4->dev_write)
   FUNC_0(" %s %llu %u", VAR_4->dev_write->name,
          (unsigned long long) VAR_4->start_write,
          VAR_4->write_delay);
  break;
 }

 return 0;
}

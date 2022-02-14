
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct log_c {TYPE_1__ io_req; int disk_header; int log_dev; int ti; } ;
struct dm_dirty_log {scalar_t__ context; } ;


 int FUNC_0 (struct log_c*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dm_dirty_log *VAR_0)
{
 struct log_c *VAR_1 = (struct log_c *) VAR_0->context;

 FUNC_2(VAR_1->ti, VAR_1->log_dev);
 FUNC_3(VAR_1->disk_header);
 FUNC_1(VAR_1->io_req.client);
 FUNC_0(VAR_1);
}

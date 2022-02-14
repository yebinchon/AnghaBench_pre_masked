
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bi_rw; } ;
struct TYPE_3__ {int bdev; } ;
struct log_c {TYPE_2__ io_req; TYPE_1__ header_location; } ;
struct dm_io_region {int count; int sector; int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,struct dm_io_region*,int *) ;

__attribute__((used)) static int FUNC_1(struct log_c *VAR_1)
{
 struct dm_io_region VAR_2 = {
  .bdev = VAR_1->header_location.bdev,
  .sector = 0,
  .count = 0,
 };

 VAR_1->io_req.bi_rw = VAR_0;

 return FUNC_0(&VAR_1->io_req, 1, &VAR_2, ((void*)0));
}

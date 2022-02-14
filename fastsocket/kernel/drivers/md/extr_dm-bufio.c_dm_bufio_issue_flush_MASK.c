
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * addr; } ;
struct TYPE_4__ {TYPE_1__ ptr; int type; } ;
struct dm_io_request {int client; TYPE_2__ mem; int bi_rw; } ;
struct dm_io_region {int count; int sector; int bdev; } ;
struct dm_bufio_client {int bdev; int dm_io; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct dm_io_request*,int,struct dm_io_region*,int *) ;

int FUNC_3(struct dm_bufio_client *VAR_2)
{
 struct dm_io_request VAR_3 = {
  .bi_rw = VAR_1,
  .mem.type = VAR_0,
  .mem.ptr.addr = ((void*)0),
  .client = VAR_2->dm_io,
 };
 struct dm_io_region VAR_4 = {
  .bdev = VAR_2->bdev,
  .sector = 0,
  .count = 0,
 };

 FUNC_0(FUNC_1());

 return FUNC_2(&VAR_3, 1, &VAR_4, ((void*)0));
}

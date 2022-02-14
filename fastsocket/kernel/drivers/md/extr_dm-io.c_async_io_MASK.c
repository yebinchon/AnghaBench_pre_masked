
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {void* context; int (* callback ) (int,void*) ;struct dm_io_client* client; int * sleeper; int count; scalar_t__ error_bits; } ;
struct dpages {int dummy; } ;
struct dm_io_region {int dummy; } ;
struct dm_io_client {int pool; } ;
typedef int (* io_notify_fn ) (int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,unsigned int,struct dm_io_region*,struct dpages*,struct io*,int ) ;
 struct io* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_io_client *VAR_4, unsigned int VAR_5,
      struct dm_io_region *VAR_6, int VAR_7, struct dpages *VAR_8,
      io_notify_fn VAR_9, void *VAR_10)
{
 struct io *VAR_11;

 if (VAR_5 > 1 && (VAR_7 & VAR_2) != VAR_3) {
  FUNC_0(1);
  VAR_9(1, VAR_10);
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_4->pool, VAR_1);
 VAR_11->error_bits = 0;
 FUNC_1(&VAR_11->count, 1);
 VAR_11->sleeper = ((void*)0);
 VAR_11->client = VAR_4;
 VAR_11->callback = VAR_9;
 VAR_11->context = VAR_10;

 FUNC_2(VAR_7, VAR_5, VAR_6, VAR_8, VAR_11, 0);
 return 0;
}

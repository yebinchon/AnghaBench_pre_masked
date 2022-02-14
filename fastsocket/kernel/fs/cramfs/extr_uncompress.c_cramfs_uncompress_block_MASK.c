
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int avail_in; int avail_out; int total_out; void* next_out; void* next_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,void*,...) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(void *VAR_5, int VAR_6, void *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_4.next_in = VAR_7;
 VAR_4.avail_in = VAR_8;

 VAR_4.next_out = VAR_5;
 VAR_4.avail_out = VAR_6;

 VAR_9 = FUNC_4(&VAR_4);
 if (VAR_9 != VAR_2) {
  FUNC_0("zlib_inflateReset error %d\n", VAR_9);
  FUNC_2(&VAR_4);
  FUNC_3(&VAR_4);
 }

 VAR_9 = FUNC_1(&VAR_4, VAR_1);
 if (VAR_9 != VAR_3)
  goto err;
 return VAR_4.total_out;

err:
 FUNC_0("Error %d while decompressing!\n", VAR_9);
 FUNC_0("%p(%d)->%p(%d)\n", VAR_7, VAR_8, VAR_5, VAR_6);
 return -VAR_0;
}

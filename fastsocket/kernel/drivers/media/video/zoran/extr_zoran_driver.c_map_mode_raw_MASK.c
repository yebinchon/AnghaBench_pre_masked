
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_buffers; int buffer_size; } ;
struct zoran_fh {TYPE_1__ buffers; int map_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct zoran_fh *VAR_3)
{
 VAR_3->map_mode = VAR_0;
 VAR_3->buffers.buffer_size = VAR_1;
 VAR_3->buffers.num_buffers = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chunk {int chunk_data_pos; TYPE_1__* file; } ;
struct TYPE_2__ {int read_count; } ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_1(struct chunk *VAR_0)




{
   VAR_0->file->read_count = 8;
   FUNC_0(VAR_0->file, &VAR_0->chunk_data_pos);
}

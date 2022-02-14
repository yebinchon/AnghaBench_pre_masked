
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {scalar_t__ block_size; scalar_t__ aux_size; } ;
struct dm_buffer {int data_mode; int data; struct dm_bufio_client* c; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,long) ;
 int FUNC_1 (struct dm_bufio_client*,int ,int *) ;
 int FUNC_2 (struct dm_buffer*) ;
 struct dm_buffer* FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static struct dm_buffer *FUNC_4(struct dm_bufio_client *VAR_0, gfp_t VAR_1)
{
 struct dm_buffer *VAR_2 = FUNC_3(sizeof(struct dm_buffer) + VAR_0->aux_size,
          VAR_1);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->c = VAR_0;

 VAR_2->data = FUNC_1(VAR_0, VAR_1, &VAR_2->data_mode);
 if (!VAR_2->data) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_0(VAR_2->data_mode, (long)VAR_0->block_size);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {scalar_t__ block_size; } ;
struct dm_buffer {int data_mode; int data; struct dm_bufio_client* c; } ;


 int FUNC_0 (int ,long) ;
 int FUNC_1 (struct dm_bufio_client*,int ,int ) ;
 int FUNC_2 (struct dm_buffer*) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_0)
{
 struct dm_bufio_client *VAR_1 = VAR_0->c;

 FUNC_0(VAR_0->data_mode, -(long)VAR_1->block_size);

 FUNC_1(VAR_1, VAR_0->data, VAR_0->data_mode);
 FUNC_2(VAR_0);
}

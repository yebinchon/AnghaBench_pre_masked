
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct chunk* chunk; int type; int length; int data_pos; int global; } ;
struct chunk {scalar_t__ compressed_digits; scalar_t__ uncompressed_digits; int chunk_type; int chunk_length; int chunk_data_pos; int global; struct file* file; } ;


 int FUNC_0 (struct chunk) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct chunk * const VAR_0, struct file * const VAR_1)






{
   FUNC_1(VAR_1->chunk == ((void*)0));

   FUNC_0(*VAR_0);

   VAR_0->file = VAR_1;
   VAR_0->global = VAR_1->global;

   VAR_0->chunk_data_pos = VAR_1->data_pos;
   VAR_0->chunk_length = VAR_1->length;
   VAR_0->chunk_type = VAR_1->type;




   VAR_0->uncompressed_digits = 0;
   VAR_0->compressed_digits = 0;

   VAR_1->chunk = VAR_0;
}

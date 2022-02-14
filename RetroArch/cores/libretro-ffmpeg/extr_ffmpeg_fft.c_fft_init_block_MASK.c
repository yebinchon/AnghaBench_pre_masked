
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int elems; int ibo; int vao; int vbo; int prog; } ;
struct TYPE_6__ {int block_size; int depth; TYPE_1__ block; } ;
typedef TYPE_2__ fft_t ;
typedef unsigned int GLushort ;
typedef unsigned int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int,unsigned int*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_13(fft_t *VAR_7)
{
   unsigned VAR_8, VAR_9;
   unsigned VAR_10 = 0;
   unsigned VAR_11 = 0;
   int VAR_12 = 0;
   GLuint *VAR_13 = ((void*)0);
   GLushort *VAR_14 = ((void*)0);
   GLuint *VAR_15 = ((void*)0);

   VAR_7->block.prog = FUNC_1(VAR_7,
         VAR_6, VAR_5);

   FUNC_11(VAR_7->block.prog);
   FUNC_10(FUNC_9(VAR_7->block.prog, "sHeight"), 0);

   VAR_10 = 2 * VAR_7->block_size * VAR_7->depth;
   VAR_14 = (GLushort*)FUNC_0(VAR_10, sizeof(GLushort));

   for (VAR_9 = 0; VAR_9 < VAR_7->depth; VAR_9++)
   {
      for (VAR_8 = 0; VAR_8 < VAR_7->block_size; VAR_8++)
      {
         VAR_14[2 * (VAR_9 * VAR_7->block_size + VAR_8) + 0] = VAR_8;
         VAR_14[2 * (VAR_9 * VAR_7->block_size + VAR_8) + 1] = VAR_9;
      }
   }
   FUNC_7(1, &VAR_7->block.vbo);
   FUNC_3(VAR_0, VAR_7->block.vbo);
   FUNC_5(VAR_0,
         VAR_10 * sizeof(GLushort),
         &VAR_14[0], VAR_3);

   VAR_7->block.elems = (2 * VAR_7->block_size - 1) * (VAR_7->depth - 1) + 1;

   VAR_11 = VAR_7->block.elems;
   VAR_15 = (GLuint*)FUNC_0(VAR_11, sizeof(GLuint));

   VAR_13 = &VAR_15[0];

   for (VAR_9 = 0; VAR_9 < VAR_7->depth - 1; VAR_9++)
   {
      int VAR_16;
      int VAR_17 = (-(int)(VAR_7->block_size)) + ((VAR_9 & 1) ? -1 : 1);
      int VAR_18 = VAR_7->block_size;

      for (VAR_16 = 0; VAR_16 < 2 * (int)(VAR_7->block_size) - 1; VAR_16++)
      {
         *VAR_13++ = VAR_12;
         VAR_12 += (VAR_16 & 1) ? VAR_17 : VAR_18;
      }
   }
   *VAR_13++ = VAR_12;

   FUNC_8(1, &VAR_7->block.vao);
   FUNC_4(VAR_7->block.vao);

   FUNC_7(1, &VAR_7->block.ibo);
   FUNC_3(VAR_1, VAR_7->block.ibo);
   FUNC_5(VAR_1,
         VAR_11 * sizeof(GLuint),
         &VAR_15[0], VAR_3);

   FUNC_6(0);
   FUNC_12(0, 2, VAR_4, VAR_2, 0, 0);
   FUNC_4(0);

   FUNC_3(VAR_0, 0);
   FUNC_3(VAR_1, 0);

   FUNC_2(VAR_14);
   FUNC_2(VAR_15);
}

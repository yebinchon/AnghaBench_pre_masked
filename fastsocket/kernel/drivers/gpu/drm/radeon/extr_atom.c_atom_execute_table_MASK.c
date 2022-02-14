
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atom_context {int mutex; int io_mode; scalar_t__ fb_base; scalar_t__ reg_block; } ;


 int VAR_0 ;
 int FUNC_0 (struct atom_context*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct atom_context *VAR_1, int VAR_2, uint32_t * VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1->mutex);

 VAR_1->reg_block = 0;

 VAR_1->fb_base = 0;

 VAR_1->io_mode = VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->mutex);
 return VAR_4;
}

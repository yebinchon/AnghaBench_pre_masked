
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_buffer {int dummy; } ;
struct dm_block {int dummy; } ;
struct buffer_aux {TYPE_1__* validator; } ;
struct TYPE_2__ {int (* prepare_for_write ) (TYPE_1__*,struct dm_block*,int ) ;} ;


 struct buffer_aux* FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_buffer*) ;
 int FUNC_3 (TYPE_1__*,struct dm_block*,int ) ;

__attribute__((used)) static void FUNC_4(struct dm_buffer *VAR_0)
{
 struct buffer_aux *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->validator) {
  VAR_1->validator->prepare_for_write(VAR_1->validator, (struct dm_block *) VAR_0,
    FUNC_1(FUNC_2(VAR_0)));
 }
}

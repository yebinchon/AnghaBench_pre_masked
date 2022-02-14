
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_decomp_master {int dummy; } ;
typedef TYPE_3__* my_master_ptr ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_10__ {struct jpeg_decomp_master* master; TYPE_1__* mem; } ;
struct TYPE_8__ {int is_dummy_pass; int finish_output_pass; int prepare_for_output_pass; } ;
struct TYPE_9__ {TYPE_2__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void
FUNC_3 (j_decompress_ptr VAR_5)
{
  my_master_ptr VAR_6;

  VAR_6 = (my_master_ptr)
      (*VAR_5->mem->alloc_small) ((j_common_ptr) VAR_5, VAR_1,
      FUNC_0(VAR_3));
  VAR_5->master = (struct jpeg_decomp_master *) VAR_6;
  VAR_6->pub.prepare_for_output_pass = VAR_4;
  VAR_6->pub.finish_output_pass = VAR_2;

  VAR_6->pub.is_dummy_pass = VAR_0;

  FUNC_1(VAR_5);
}

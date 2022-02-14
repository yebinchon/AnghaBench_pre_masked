
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_forward_dct {int dummy; } ;
typedef TYPE_3__* my_fdct_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_10__ {int dct_method; struct jpeg_forward_dct* fdct; TYPE_1__* mem; } ;
struct TYPE_8__ {void* forward_DCT; int start_pass; } ;
struct TYPE_9__ {int ** float_divisors; int ** divisors; int do_float_dct; TYPE_2__ pub; int do_dct; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_4__*,int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void
FUNC_3 (j_compress_ptr VAR_10)
{
  my_fdct_ptr VAR_11;
  int VAR_12;

  VAR_11 = (my_fdct_ptr)
    (*VAR_10->mem->alloc_small) ((j_common_ptr) VAR_10, VAR_1,
    FUNC_1(VAR_8));
  VAR_10->fdct = (struct jpeg_forward_dct *) VAR_11;
  VAR_11->pub.start_pass = VAR_9;

  switch (VAR_10->dct_method) {
  default:
    FUNC_0(VAR_10, VAR_0);
    break;
  }


  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
    VAR_11->divisors[VAR_12] = ((void*)0);



  }
}

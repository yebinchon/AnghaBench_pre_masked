
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_destination_mgr {int dummy; } ;
typedef TYPE_3__* my_dest_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_9__ {struct jpeg_destination_mgr* dest; TYPE_2__* mem; } ;
struct TYPE_6__ {int term_destination; int empty_output_buffer; int init_destination; } ;
struct TYPE_8__ {int * outfile; TYPE_1__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;

void
FUNC_2 (j_compress_ptr VAR_5, FILE * VAR_6)
{
  my_dest_ptr VAR_7;







  if (VAR_5->dest == ((void*)0)) {
    VAR_5->dest = (struct jpeg_destination_mgr *)
      (*VAR_5->mem->alloc_small) ((j_common_ptr) VAR_5, VAR_0,
      FUNC_0(VAR_3));
  }

  VAR_7 = (my_dest_ptr) VAR_5->dest;
  VAR_7->pub.init_destination = VAR_2;
  VAR_7->pub.empty_output_buffer = VAR_1;
  VAR_7->pub.term_destination = VAR_4;
  VAR_7->outfile = VAR_6;
}

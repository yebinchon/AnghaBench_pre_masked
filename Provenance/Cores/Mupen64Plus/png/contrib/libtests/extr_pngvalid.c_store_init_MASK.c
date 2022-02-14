
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * prev; } ;
struct TYPE_7__ {int chunkpos; int chunklen; scalar_t__ noptions; scalar_t__ npalette; int * palette; TYPE_1__ new; scalar_t__ IDAT_bits; scalar_t__ IDAT_size; scalar_t__ chunktype; scalar_t__ writepos; int * piwrite; int * pwrite; scalar_t__ image_h; scalar_t__ cb_row; scalar_t__ cb_image; int * image; scalar_t__ readpos; int * next; int * current; int saved; int * piread; int * pread; scalar_t__ nwarnings; scalar_t__ nerrors; scalar_t__ validated; scalar_t__ progressive; scalar_t__ speed; scalar_t__ saw_warning; scalar_t__ expect_warning; scalar_t__ expect_error; scalar_t__ treat_warnings_as_errors; scalar_t__ verbose; int write_memory_pool; int read_memory_pool; int exception_context; } ;
typedef TYPE_2__ png_store ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_3(png_store* VAR_0)
{
   FUNC_1(VAR_0, 0, sizeof *VAR_0);
   FUNC_0(&VAR_0->exception_context);
   FUNC_2(VAR_0, &VAR_0->read_memory_pool);
   FUNC_2(VAR_0, &VAR_0->write_memory_pool);
   VAR_0->verbose = 0;
   VAR_0->treat_warnings_as_errors = 0;
   VAR_0->expect_error = 0;
   VAR_0->expect_warning = 0;
   VAR_0->saw_warning = 0;
   VAR_0->speed = 0;
   VAR_0->progressive = 0;
   VAR_0->validated = 0;
   VAR_0->nerrors = VAR_0->nwarnings = 0;
   VAR_0->pread = ((void*)0);
   VAR_0->piread = ((void*)0);
   VAR_0->saved = *(VAR_0->current = ((void*)0));
   VAR_0->next = ((void*)0);
   VAR_0->readpos = 0;
   VAR_0->image = ((void*)0);
   VAR_0->cb_image = 0;
   VAR_0->cb_row = 0;
   VAR_0->image_h = 0;
   VAR_0->pwrite = ((void*)0);
   VAR_0->piwrite = ((void*)0);
   VAR_0->writepos = 0;
   VAR_0->chunkpos = 8;
   VAR_0->chunktype = 0;
   VAR_0->chunklen = 16;
   VAR_0->IDAT_size = 0;
   VAR_0->IDAT_bits = 0;
   VAR_0->new.prev = ((void*)0);
   VAR_0->palette = ((void*)0);
   VAR_0->npalette = 0;
   VAR_0->noptions = 0;
}

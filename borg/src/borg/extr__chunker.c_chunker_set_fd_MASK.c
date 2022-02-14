
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fh; scalar_t__ eof; scalar_t__ last; scalar_t__ position; scalar_t__ bytes_yielded; scalar_t__ bytes_read; scalar_t__ remaining; scalar_t__ done; int * fd; } ;
typedef int PyObject ;
typedef TYPE_1__ Chunker ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(Chunker *VAR_0, PyObject *VAR_1, int VAR_2)
{
    FUNC_1(VAR_0->fd);
    VAR_0->fd = VAR_1;
    FUNC_0(VAR_1);
    VAR_0->fh = VAR_2;
    VAR_0->done = 0;
    VAR_0->remaining = 0;
    VAR_0->bytes_read = 0;
    VAR_0->bytes_yielded = 0;
    VAR_0->position = 0;
    VAR_0->last = 0;
    VAR_0->eof = 0;
}

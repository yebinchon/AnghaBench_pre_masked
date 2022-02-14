
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_3__ {int last; int position; int remaining; scalar_t__ buf_size; int eof; scalar_t__ fh; int bytes_read; int data; int fd; } ;
typedef int PyThreadState ;
typedef int PyObject ;
typedef TYPE_1__ Chunker ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_1 ;
 int * FUNC_6 (int ,char*,char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_11 (scalar_t__,int,int,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(Chunker *VAR_3)
{
    ssize_t VAR_4;
    off_t VAR_5, VAR_6;
    int VAR_7;
    PyObject *VAR_8;
    PyThreadState *VAR_9;

    FUNC_10(VAR_3->data, VAR_3->data + VAR_3->last, VAR_3->position + VAR_3->remaining - VAR_3->last);
    VAR_3->position -= VAR_3->last;
    VAR_3->last = 0;
    VAR_4 = VAR_3->buf_size - VAR_3->position - VAR_3->remaining;
    if(VAR_3->eof || VAR_4 == 0) {
        return 1;
    }
    if(VAR_3->fh >= 0) {
        VAR_9 = FUNC_5();

        VAR_5 = VAR_3->bytes_read;

        VAR_4 = FUNC_12(VAR_3->fh, VAR_3->data + VAR_3->position + VAR_3->remaining, VAR_4);
        if(VAR_4 > 0) {
            VAR_3->remaining += VAR_4;
            VAR_3->bytes_read += VAR_4;
        }
        else
        if(VAR_4 == 0) {
            VAR_3->eof = 1;
        }
        else {
            FUNC_4(VAR_9);

            FUNC_3(VAR_1);
            return 0;
        }
        VAR_6 = VAR_3->bytes_read - VAR_5;
        FUNC_4(VAR_9);
    }
    else {

        VAR_8 = FUNC_6(VAR_3->fd, "read", "i", VAR_4);
        if(!VAR_8) {
            return 0;
        }
        VAR_4 = FUNC_1(VAR_8);
        if(FUNC_2()) {

            return 0;
        }
        if(VAR_4) {
            FUNC_9(VAR_3->data + VAR_3->position + VAR_3->remaining, FUNC_0(VAR_8), VAR_4);
            VAR_3->remaining += VAR_4;
            VAR_3->bytes_read += VAR_4;
        }
        else {
            VAR_3->eof = 1;
        }
        FUNC_7(VAR_8);
    }
    return 1;
}

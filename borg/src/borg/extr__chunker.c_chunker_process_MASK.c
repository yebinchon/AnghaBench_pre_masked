
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chunk_mask; size_t min_size; size_t window_size; int done; scalar_t__ bytes_read; scalar_t__ bytes_yielded; size_t remaining; int position; size_t last; int * data; int table; scalar_t__ eof; } ;
typedef int PyObject ;
typedef TYPE_1__ Chunker ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (char*,size_t,int ) ;
 int FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (int,int ,int ,size_t,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_6(Chunker *VAR_3)
{
    uint32_t VAR_4, VAR_5 = VAR_3->chunk_mask;
    size_t VAR_6 = 0, VAR_7, VAR_8 = VAR_3->min_size, VAR_9 = VAR_3->window_size;

    if(VAR_3->done) {
        if(VAR_3->bytes_read == VAR_3->bytes_yielded)
            FUNC_0(VAR_2);
        else
            FUNC_1(VAR_1, "chunkifier byte count mismatch");
        return ((void*)0);
    }
    while(VAR_3->remaining < VAR_8 + VAR_9 + 1 && !VAR_3->eof) {
        if(!FUNC_5(VAR_3)) {
            return ((void*)0);
        }
    }

    if(VAR_3->eof) {
        VAR_3->done = 1;
        if(VAR_3->remaining) {
            VAR_3->bytes_yielded += VAR_3->remaining;
            return FUNC_2((char *)(VAR_3->data + VAR_3->position), VAR_3->remaining, VAR_0);
        }
        else {
            if(VAR_3->bytes_read == VAR_3->bytes_yielded)
                FUNC_0(VAR_2);
            else
                FUNC_1(VAR_1, "chunkifier byte count mismatch");
            return ((void*)0);
        }
    }




    VAR_3->position += VAR_8;
    VAR_3->remaining -= VAR_8;
    VAR_6 += VAR_8;
    VAR_4 = FUNC_3(VAR_3->data + VAR_3->position, VAR_9, VAR_3->table);
    while(VAR_3->remaining > VAR_3->window_size && (VAR_4 & VAR_5)) {
        VAR_4 = FUNC_4(VAR_4, VAR_3->data[VAR_3->position],
                             VAR_3->data[VAR_3->position + VAR_9],
                             VAR_9, VAR_3->table);
        VAR_3->position++;
        VAR_3->remaining--;
        VAR_6++;
        if(VAR_3->remaining <= VAR_9) {
            if(!FUNC_5(VAR_3)) {
                return ((void*)0);
            }
        }
    }
    if(VAR_3->remaining <= VAR_9) {
        VAR_3->position += VAR_3->remaining;
        VAR_3->remaining = 0;
    }
    VAR_7 = VAR_3->last;
    VAR_3->last = VAR_3->position;
    VAR_6 = VAR_3->last - VAR_7;
    VAR_3->bytes_yielded += VAR_6;
    return FUNC_2((char *)(VAR_3->data + VAR_7), VAR_6, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ voidpf ;
typedef scalar_t__ uInt ;
struct zipent {int compression_method; scalar_t__ compressed_size; scalar_t__ uncompressed_size; int version_needed_to_extract; int os_needed_to_extract; scalar_t__ disk_number_start; } ;
struct TYPE_9__ {int avail_in; int avail_out; int * next_in; int * next_out; scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; } ;
struct TYPE_7__ {int z_err; int transparent; char mode; char* path; TYPE_5__ stream; int * file; scalar_t__ start; int * inbuf; int * msg; int crc; int back; scalar_t__ out; scalar_t__ in; scalar_t__ z_eof; int * outbuf; } ;
typedef TYPE_1__ gz_stream ;
typedef int * gzFile ;
typedef scalar_t__ free_func ;
typedef scalar_t__ alloc_func ;
struct TYPE_8__ {char* zip; scalar_t__ number_of_this_disk; int * fp; } ;
typedef TYPE_2__ ZIP ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (long,int *,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char*,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct zipent*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char const*) ;

gzFile FUNC_11(ZIP* VAR_9, struct zipent* VAR_10)
{
    int VAR_11;
    gz_stream *VAR_12;
    const char *VAR_13;
    int VAR_14 = 0;
    uInt VAR_15;

    if (!VAR_9 || !VAR_10)
        return ((void*)0);


    if (VAR_10->compression_method == 0x0000)
    {



        if (VAR_10->compressed_size != VAR_10->uncompressed_size) {
            FUNC_3("Wrong uncompressed size in store compression", VAR_1,VAR_9->zip);
            return ((void*)0);
        }

        VAR_14 = 1;
    }
    else if (VAR_10->compression_method == 0x0008)
    {

        if (VAR_10->version_needed_to_extract > 0x14) {
            FUNC_3("Version too new", VAR_2,VAR_9->zip);
            return ((void*)0);
        }

        if (VAR_10->os_needed_to_extract != 0x00) {
            FUNC_3("OS not supported", VAR_2,VAR_9->zip);
            return ((void*)0);
        }

        if (VAR_10->disk_number_start != VAR_9->number_of_this_disk) {
            FUNC_3("Cannot span disks", VAR_2,VAR_9->zip);
            return ((void*)0);
        }

    } else {
        FUNC_3("Compression method unsupported", VAR_2, VAR_9->zip);
        return ((void*)0);
    }


    if (FUNC_8(VAR_9,VAR_10) != 0) {
        return ((void*)0);
    }

    VAR_13 = VAR_9->zip;


    VAR_12 = (gz_stream *)FUNC_0(sizeof(gz_stream));
    if (!VAR_12) return VAR_6;

    VAR_12->stream.zalloc = (alloc_func)0;
    VAR_12->stream.zfree = (free_func)0;
    VAR_12->stream.opaque = (voidpf)0;
    VAR_12->stream.next_in = VAR_12->inbuf = VAR_6;
    VAR_12->stream.next_out = VAR_12->outbuf = VAR_6;
    VAR_12->stream.avail_in = VAR_12->stream.avail_out = 0;
    VAR_12->file = ((void*)0);
    VAR_12->z_err = VAR_7;
    VAR_12->z_eof = 0;
    VAR_12->in = 0;
    VAR_12->out = 0;
    VAR_12->back = VAR_0;
    VAR_12->crc = FUNC_1(0L, VAR_6, 0);
    VAR_12->msg = ((void*)0);
    VAR_12->transparent = VAR_14;
    VAR_12->mode = 'r';

    VAR_12->path = (char*)FUNC_0(FUNC_10(VAR_13)+1);
    if (VAR_12->path == ((void*)0)) {
        return FUNC_2(VAR_12), (gzFile)VAR_6;
    }
    FUNC_9(VAR_12->path, VAR_13);

    VAR_12->stream.next_in = VAR_12->inbuf = (Byte*)FUNC_0(VAR_4);

    VAR_11 = FUNC_7(&(VAR_12->stream), -VAR_3);






    if (VAR_11 != VAR_7 || VAR_12->inbuf == VAR_6) {
        return FUNC_2(VAR_12), (gzFile)VAR_6;
    }
    VAR_12->stream.avail_out = VAR_4;

    VAR_8 = 0;
    VAR_12->file = VAR_9->fp;
    if (VAR_12->file == ((void*)0)) {
        return FUNC_2(VAR_12), (gzFile)VAR_6;
    }


    VAR_8 = 0;
    VAR_15 = (uInt)FUNC_5(VAR_12->inbuf, 1, VAR_4, VAR_12->file);
    if (VAR_15 == 0 && FUNC_4(VAR_12->file)) VAR_12->z_err = VAR_5;
    VAR_12->stream.avail_in += VAR_15;
    VAR_12->stream.next_in = VAR_12->inbuf;
    if (VAR_12->stream.avail_in < 2) {
        return FUNC_2(VAR_12), (gzFile)VAR_6;
    }

    VAR_12->start = FUNC_6(VAR_12->file) - VAR_12->stream.avail_in;

    return (gzFile)VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int avail_in; int avail_out; int * next_out; int next_in; int * opaque; int * zfree; int * zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
struct TYPE_11__ {int avail_in; int avail_out; int next_out; int * next_in; } ;
struct TYPE_10__ {int block_size; int deflate_block_size; TYPE_3__ zstream; int tmpblock; int * deflate_block; int avctx; } ;
typedef TYPE_2__ FlashSVContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(FlashSVContext *VAR_5, uint8_t *VAR_6, int VAR_7)
{
    z_stream VAR_8;
    int VAR_9;

    if (!VAR_6)
        return VAR_0;

    VAR_8.zalloc = ((void*)0);
    VAR_8.zfree = ((void*)0);
    VAR_8.opaque = ((void*)0);

    VAR_5->zstream.next_in = VAR_6;
    VAR_5->zstream.avail_in = VAR_7;
    VAR_5->zstream.next_out = VAR_5->tmpblock;
    VAR_5->zstream.avail_out = VAR_5->block_size * 3;
    FUNC_4(&VAR_5->zstream, VAR_4);

    if (FUNC_3(&VAR_8, 0) != VAR_3)
        return -1;
    VAR_8.next_in = VAR_5->tmpblock;
    VAR_8.avail_in = VAR_5->block_size * 3 - VAR_5->zstream.avail_out;
    VAR_8.next_out = VAR_5->deflate_block;
    VAR_8.avail_out = VAR_5->deflate_block_size;
    FUNC_1(&VAR_8, VAR_4);
    FUNC_2(&VAR_8);

    if ((VAR_9 = FUNC_5(&VAR_5->zstream)) != VAR_3) {
        FUNC_0(VAR_5->avctx, VAR_2, "Inflate reset error: %d\n", VAR_9);
        return VAR_1;
    }

    VAR_5->zstream.next_in = VAR_5->deflate_block;
    VAR_5->zstream.avail_in = VAR_5->deflate_block_size - VAR_8.avail_out;
    VAR_5->zstream.next_out = VAR_5->tmpblock;
    VAR_5->zstream.avail_out = VAR_5->block_size * 3;
    FUNC_4(&VAR_5->zstream, VAR_4);

    return 0;
}

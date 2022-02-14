
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ buffer; } ;
struct TYPE_8__ {scalar_t__ avail_in; unsigned char* next_in; scalar_t__ avail_out; int next_out; } ;
struct TYPE_7__ {int pic_state; scalar_t__ crow_size; TYPE_4__ zstream; int avctx; int crow_buf; TYPE_5__ gb; } ;
typedef TYPE_1__ PNGDecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(PNGDecContext *VAR_7, int VAR_8)
{
    int VAR_9;
    VAR_7->zstream.avail_in = FUNC_0(VAR_8, FUNC_2(&VAR_7->gb));
    VAR_7->zstream.next_in = (unsigned char *)VAR_7->gb.buffer;
    FUNC_3(&VAR_7->gb, VAR_8);


    while (VAR_7->zstream.avail_in > 0) {
        VAR_9 = FUNC_4(&VAR_7->zstream, VAR_5);
        if (VAR_9 != VAR_4 && VAR_9 != VAR_6) {
            FUNC_1(VAR_7->avctx, VAR_1, "inflate returned error %d\n", VAR_9);
            return VAR_0;
        }
        if (VAR_7->zstream.avail_out == 0) {
            if (!(VAR_7->pic_state & VAR_3)) {
                FUNC_5(VAR_7);
            }
            VAR_7->zstream.avail_out = VAR_7->crow_size;
            VAR_7->zstream.next_out = VAR_7->crow_buf;
        }
        if (VAR_9 == VAR_6 && VAR_7->zstream.avail_in > 0) {
            FUNC_1(VAR_7->avctx, VAR_2,
                   "%d undecompressed bytes left in buffer\n", VAR_7->zstream.avail_in);
            return 0;
        }
    }
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {scalar_t__ logical_pos; scalar_t__ size; scalar_t__ physical_pos; } ;
struct TYPE_9__ {scalar_t__ logical_pos; scalar_t__ cache_pos; scalar_t__ inner_pos; int is_true_eof; scalar_t__ end; int cache_miss; int inner; int cache_hit; int fd; int root; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ CacheEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,unsigned char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 TYPE_3__* FUNC_5 (int ,scalar_t__*,int ,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_10(URLContext *VAR_4, unsigned char *VAR_5, int VAR_6)
{
    Context *VAR_7= VAR_4->priv_data;
    CacheEntry *VAR_8, *VAR_9[2] = {((void*)0), ((void*)0)};
    int64_t VAR_10;

    VAR_8 = FUNC_5(VAR_7->root, &VAR_7->logical_pos, VAR_3, (void**)VAR_9);

    if (!VAR_8)
        VAR_8 = VAR_9[0];

    if (VAR_8) {
        int64_t VAR_11 = VAR_7->logical_pos - VAR_8->logical_pos;
        FUNC_3(VAR_8->logical_pos <= VAR_7->logical_pos);
        if (VAR_11 < VAR_8->size) {
            int64_t VAR_12 = VAR_8->physical_pos + VAR_11;

            if (VAR_7->cache_pos != VAR_12) {
                VAR_10 = FUNC_8(VAR_7->fd, VAR_12, VAR_2);
            } else
                VAR_10 = VAR_7->cache_pos;

            if (VAR_10 >= 0) {
                VAR_7->cache_pos = VAR_10;
                VAR_10 = FUNC_9(VAR_7->fd, VAR_5, FUNC_1(VAR_6, VAR_8->size - VAR_11));
            }

            if (VAR_10 > 0) {
                VAR_7->cache_pos += VAR_10;
                VAR_7->logical_pos += VAR_10;
                VAR_7->cache_hit ++;
                return VAR_10;
            }
        }
    }



    if (VAR_7->logical_pos != VAR_7->inner_pos) {
        VAR_10 = FUNC_7(VAR_7->inner, VAR_7->logical_pos, VAR_2);
        if (VAR_10<0) {
            FUNC_4(VAR_4, VAR_1, "Failed to perform internal seek\n");
            return VAR_10;
        }
        VAR_7->inner_pos = VAR_10;
    }

    VAR_10 = FUNC_6(VAR_7->inner, VAR_5, VAR_6);
    if (VAR_10 == VAR_0 && VAR_6>0) {
        VAR_7->is_true_eof = 1;
        FUNC_3(VAR_7->end >= VAR_7->logical_pos);
    }
    if (VAR_10<=0)
        return VAR_10;
    VAR_7->inner_pos += VAR_10;

    VAR_7->cache_miss ++;

    FUNC_2(VAR_4, VAR_5, VAR_10);
    VAR_7->logical_pos += VAR_10;
    VAR_7->end = FUNC_0(VAR_7->end, VAR_7->logical_pos);

    return VAR_10;
}

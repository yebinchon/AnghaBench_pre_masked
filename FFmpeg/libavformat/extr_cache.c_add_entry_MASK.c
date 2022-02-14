
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct AVTreeNode {scalar_t__ logical_pos; int size; scalar_t__ physical_pos; } ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ logical_pos; int root; scalar_t__ cache_pos; int fd; } ;
typedef TYPE_2__ Context ;
typedef struct AVTreeNode CacheEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct AVTreeNode*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 struct AVTreeNode* FUNC_3 (int) ;
 struct AVTreeNode* FUNC_4 (int ,scalar_t__*,int ,void**) ;
 struct AVTreeNode* FUNC_5 (int *,struct AVTreeNode*,int ,struct AVTreeNode**) ;
 struct AVTreeNode* FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_5, const unsigned char *VAR_6, int VAR_7)
{
    Context *VAR_8= VAR_5->priv_data;
    int64_t VAR_9 = -1;
    int VAR_10;
    CacheEntry *VAR_11 = ((void*)0), *VAR_12[2] = {((void*)0), ((void*)0)};
    CacheEntry *VAR_13;
    struct AVTreeNode *VAR_14 = ((void*)0);


    VAR_9 = FUNC_7(VAR_8->fd, 0, VAR_2);
    if (VAR_9 < 0) {
        VAR_10 = FUNC_0(VAR_4);
        FUNC_2(VAR_5, VAR_0, "seek in cache failed\n");
        goto fail;
    }
    VAR_8->cache_pos = VAR_9;

    VAR_10 = FUNC_8(VAR_8->fd, VAR_6, VAR_7);
    if (VAR_10 < 0) {
        VAR_10 = FUNC_0(VAR_4);
        FUNC_2(VAR_5, VAR_0, "write in cache failed\n");
        goto fail;
    }
    VAR_8->cache_pos += VAR_10;

    VAR_11 = FUNC_4(VAR_8->root, &VAR_8->logical_pos, VAR_3, (void**)VAR_12);

    if (!VAR_11)
        VAR_11 = VAR_12[0];

    if (!VAR_11 ||
        VAR_11->logical_pos + VAR_11->size != VAR_8->logical_pos ||
        VAR_11->physical_pos + VAR_11->size != VAR_9
    ) {
        VAR_11 = FUNC_3(sizeof(*VAR_11));
        VAR_14 = FUNC_6();
        if (!VAR_11 || !VAR_14) {
            VAR_10 = FUNC_0(VAR_1);
            goto fail;
        }
        VAR_11->logical_pos = VAR_8->logical_pos;
        VAR_11->physical_pos = VAR_9;
        VAR_11->size = VAR_10;

        VAR_13 = FUNC_5(&VAR_8->root, VAR_11, VAR_3, &VAR_14);
        if (VAR_13 && VAR_13 != VAR_11) {
            VAR_10 = -1;
            FUNC_2(VAR_5, VAR_0, "av_tree_insert failed\n");
            goto fail;
        }
    } else
        VAR_11->size += VAR_10;

    return 0;
fail:


    FUNC_1(VAR_11);
    FUNC_1(VAR_14);
    return VAR_10;
}

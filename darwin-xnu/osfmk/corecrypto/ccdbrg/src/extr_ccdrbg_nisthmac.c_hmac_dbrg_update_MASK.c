
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccdrbg_state {int dummy; } ;
struct ccdrbg_nisthmac_state {size_t vsize; void const* vptr; void const* nextvptr; int key; int keysize; scalar_t__ bytesLeft; TYPE_1__* custom; } ;
struct ccdigest_info {int block_size; int state_size; } ;
struct TYPE_2__ {struct ccdigest_info* di; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t,void const*,void const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ccdigest_info const*,int ,int ,size_t,void const*,void const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ccdigest_info const*,int ,int ) ;
 int FUNC_5 (struct ccdigest_info const*,int ,int ,int ) ;
 int FUNC_6 (struct ccdigest_info const*,int ,size_t,void const*) ;
 int VAR_3 ;
 int FUNC_7 (struct ccdrbg_state*) ;

__attribute__((used)) static int FUNC_8(struct ccdrbg_state *VAR_4,
                            size_t VAR_5, const void *VAR_6,
                            size_t VAR_7, const void *VAR_8,
                            size_t VAR_9, const void *VAR_10
                            )
{
    int VAR_11=VAR_1;
    struct ccdrbg_nisthmac_state *VAR_12 = (struct ccdrbg_nisthmac_state *)VAR_4;
    const struct ccdigest_info *VAR_13 = VAR_12->custom->di;

    const unsigned char VAR_14 = 0x00;
    const unsigned char VAR_15 = 0x01;

    FUNC_3(VAR_13->state_size, VAR_13->block_size, VAR_3);
    FUNC_5(VAR_13, VAR_3, VAR_12->keysize, VAR_12->key);


    FUNC_6(VAR_13, VAR_3, VAR_12->vsize, VAR_12->vptr);
    FUNC_6(VAR_13, VAR_3, 1, &VAR_14);
    if (VAR_6 && VAR_5) FUNC_6(VAR_13, VAR_3, VAR_5, VAR_6);
    if (VAR_8 && VAR_7) FUNC_6(VAR_13, VAR_3, VAR_7, VAR_8);
    if (VAR_10 && VAR_9) FUNC_6(VAR_13, VAR_3, VAR_9, VAR_10);
    FUNC_4(VAR_13, VAR_3, VAR_12->key);


    if (((VAR_6 && VAR_5) || (VAR_8 && VAR_7) || (VAR_10 && VAR_9))) {

        FUNC_2(VAR_13, VAR_12->keysize, VAR_12->key, VAR_12->vsize, VAR_12->vptr, VAR_12->vptr);

        FUNC_5(VAR_13, VAR_3, VAR_12->keysize, VAR_12->key);
        FUNC_6(VAR_13, VAR_3, VAR_12->vsize, VAR_12->vptr);
        FUNC_6(VAR_13, VAR_3, 1, &VAR_15);
        if (VAR_6 && VAR_5) FUNC_6(VAR_13, VAR_3, VAR_5, VAR_6);
        if (VAR_8 && VAR_7) FUNC_6(VAR_13, VAR_3, VAR_7, VAR_8);
        if (VAR_10 && VAR_9) FUNC_6(VAR_13, VAR_3, VAR_9, VAR_10);
        FUNC_4(VAR_13, VAR_3, VAR_12->key);
    }


    VAR_12->bytesLeft = 0;





    FUNC_2(VAR_13, VAR_12->keysize, VAR_12->key, VAR_12->vsize, VAR_12->vptr, VAR_12->vptr);
    FUNC_2(VAR_13, VAR_12->keysize, VAR_12->key, VAR_12->vsize, VAR_12->vptr, VAR_12->nextvptr);
    if (0==FUNC_0(VAR_12->vsize, VAR_12->vptr, VAR_12->nextvptr)) {




        FUNC_7(VAR_4);
        VAR_11=VAR_0;
        FUNC_1(((void*)0));
        goto errOut;
    }
    VAR_11=VAR_2;
errOut:
    return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccdrbg_state {int dummy; } ;
struct ccdrbg_nisthmac_state {scalar_t__ vsize; scalar_t__ v; scalar_t__ nextvptr; scalar_t__ vptr; scalar_t__ keysize; TYPE_1__* custom; scalar_t__ bytesLeft; } ;
struct ccdrbg_info {TYPE_1__* custom; } ;
struct ccdigest_info {scalar_t__ output_size; } ;
struct TYPE_2__ {struct ccdigest_info* di; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccdrbg_state*) ;
 int FUNC_1 (char*,struct ccdrbg_nisthmac_state*) ;
 int FUNC_2 (struct ccdrbg_state*,size_t,void const*,size_t,void const*,size_t,void const*) ;
 int FUNC_3 (struct ccdrbg_nisthmac_state*,size_t,int ,size_t) ;

__attribute__((used)) static int FUNC_4(const struct ccdrbg_info *VAR_1, struct ccdrbg_state *VAR_2,
                size_t VAR_3, const void* VAR_4,
                size_t VAR_5, const void* VAR_6,
                size_t VAR_7, const void* VAR_8)
{
    struct ccdrbg_nisthmac_state *VAR_9=(struct ccdrbg_nisthmac_state *)VAR_2;
    VAR_9->bytesLeft = 0;
    VAR_9->custom = VAR_1->custom;

    int VAR_10 = FUNC_3(VAR_9 , VAR_3, 0, VAR_7);
    if(VAR_10!=VAR_0){


        FUNC_0(VAR_2);
        return VAR_10;
    }

    const struct ccdigest_info *VAR_11 = VAR_9->custom->di;
    VAR_9->vsize = VAR_11->output_size;
    VAR_9->keysize = VAR_11->output_size;
    VAR_9->vptr=VAR_9->v;
    VAR_9->nextvptr=VAR_9->v+VAR_9->vsize;


    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);




    return VAR_0;

}

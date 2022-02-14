
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdrbg_state {int dummy; } ;
struct ccdrbg_nisthmac_state {size_t bytesLeft; size_t vsize; int nextvptr; int reseed_counter; int vptr; int key; int keysize; struct ccdrbg_nisthmac_custom* custom; } ;
struct ccdrbg_nisthmac_custom {struct ccdigest_info* di; } ;
struct ccdigest_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (size_t,int ,int ) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ccdigest_info const*,int ,int ,size_t,int ,int ) ;
 int FUNC_6 (struct ccdrbg_state*) ;
 int FUNC_7 (char*,struct ccdrbg_nisthmac_state*) ;
 int FUNC_8 (struct ccdrbg_state*,size_t,void const*,int ,int *,int ,int *) ;
 int FUNC_9 (int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_10(struct ccdrbg_state *VAR_2, size_t VAR_3, void *VAR_4,
                    size_t VAR_5, const void *VAR_6)
{
    struct ccdrbg_nisthmac_state *VAR_7 = (struct ccdrbg_nisthmac_state *)VAR_2;
    const struct ccdrbg_nisthmac_custom *VAR_8 = VAR_7->custom;
    const struct ccdigest_info *VAR_9 = VAR_8->di;

    int VAR_10 = FUNC_9(VAR_7->reseed_counter, VAR_3, VAR_6==((void*)0)?0:VAR_5);
    if(VAR_10!=VAR_1) return VAR_10;


    if (VAR_6 && VAR_5)
        FUNC_8(VAR_2, VAR_5, VAR_6, 0, ((void*)0), 0, ((void*)0));


    char *VAR_11 = (char *) VAR_4;
    while (VAR_3 > 0) {
        if (!VAR_7->bytesLeft) {

            FUNC_5(VAR_9, VAR_7->keysize, VAR_7->key, VAR_7->vsize, VAR_7->nextvptr, VAR_7->vptr);


            if (0==FUNC_2(VAR_7->vsize, VAR_7->vptr, VAR_7->nextvptr)) {




                FUNC_6(VAR_2);
                VAR_10=VAR_0;
                FUNC_4(((void*)0));
                goto errOut;
            }
            FUNC_1(VAR_7->nextvptr, VAR_7->vptr);
            VAR_7->bytesLeft = VAR_7->vsize;



        }
        size_t VAR_12 = VAR_3 > VAR_7->bytesLeft ? VAR_7->bytesLeft : VAR_3;
        FUNC_0(VAR_11, VAR_7->vptr, VAR_12);
        VAR_7->bytesLeft -= VAR_12;
        VAR_11 += VAR_12;
        VAR_3 -= VAR_12;
    }


    FUNC_8(VAR_2, VAR_5, VAR_6, 0, ((void*)0), 0, ((void*)0));


    VAR_7->reseed_counter++;





    VAR_10=VAR_1;
errOut:
    return VAR_10;
}

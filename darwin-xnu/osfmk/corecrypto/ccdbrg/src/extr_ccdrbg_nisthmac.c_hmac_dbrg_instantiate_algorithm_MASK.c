
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdrbg_state {int dummy; } ;
struct ccdrbg_nisthmac_state {int reseed_counter; int vsize; int vptr; int key; int keysize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ccdrbg_state*,size_t,void const*,size_t,void const*,size_t,void const*) ;

__attribute__((used)) static int FUNC_3(struct ccdrbg_state *VAR_1,
                                           size_t VAR_2, const void *VAR_3,
                                           size_t VAR_4, const void *VAR_5,
                                           size_t VAR_6, const void *VAR_7)
{

    struct ccdrbg_nisthmac_state *VAR_8 = (struct ccdrbg_nisthmac_state *)VAR_1;




    FUNC_1(VAR_8->keysize, VAR_8->key);


    FUNC_0(VAR_8->vptr, 0x01, VAR_8->vsize);


    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


    VAR_8->reseed_counter = 1;

    return VAR_0;
}

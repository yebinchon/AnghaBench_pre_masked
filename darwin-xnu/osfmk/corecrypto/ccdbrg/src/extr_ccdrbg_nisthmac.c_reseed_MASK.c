
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdrbg_state {int dummy; } ;
struct ccdrbg_nisthmac_state {int reseed_counter; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct ccdrbg_nisthmac_state*) ;
 int FUNC_1 (struct ccdrbg_state*,size_t,void const*,size_t,void const*,int ,int *) ;
 int FUNC_2 (struct ccdrbg_nisthmac_state*,size_t,size_t,int ) ;

__attribute__((used)) static int
FUNC_3(struct ccdrbg_state *VAR_1,
       size_t VAR_2, const void *VAR_3,
       size_t VAR_4, const void *VAR_5)
{

    struct ccdrbg_nisthmac_state *VAR_6 = (struct ccdrbg_nisthmac_state *)VAR_1;
    int VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_4, 0);
    if(VAR_7!=VAR_0) return VAR_7;

    int VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0, ((void*)0));
    VAR_6->reseed_counter = 1;




    return VAR_8;
}

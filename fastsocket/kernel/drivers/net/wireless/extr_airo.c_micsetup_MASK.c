
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct airo_info {TYPE_2__* mod; int * tfm; TYPE_1__* dev; } ;
typedef int miccntx ;
struct TYPE_4__ {int uCtx; int mCtx; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct airo_info *VAR_4) {
 int VAR_5;

 if (VAR_4->tfm == ((void*)0))
         VAR_4->tfm = FUNC_2("aes", 0, VAR_0);

        if (FUNC_0(VAR_4->tfm)) {
                FUNC_1(VAR_4->dev->name, "failed to load transform for AES");
                VAR_4->tfm = ((void*)0);
                return VAR_1;
        }

 for (VAR_5=0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_3(&VAR_4->mod[VAR_5].mCtx,0,sizeof(miccntx));
  FUNC_3(&VAR_4->mod[VAR_5].uCtx,0,sizeof(miccntx));
 }
 return VAR_3;
}

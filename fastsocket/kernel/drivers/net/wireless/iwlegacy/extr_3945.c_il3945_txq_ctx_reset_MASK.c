
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_txq_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,int) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_1(VAR_0);


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;


 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto error;


 for (VAR_2 = 0; VAR_2 < VAR_0->hw_params.max_txq_num; VAR_2++) {
  VAR_1 = FUNC_4(VAR_0, VAR_2);
  if (VAR_1) {
   FUNC_0("Tx %d queue init failed\n", VAR_2);
   goto error;
  }
 }

 return VAR_1;

error:
 FUNC_1(VAR_0);
 return VAR_1;
}

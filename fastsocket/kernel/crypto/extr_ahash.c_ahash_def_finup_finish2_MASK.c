
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request_priv {int result; } ;
struct ahash_request {int result; struct ahash_request_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request_priv*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ahash_request *VAR_1, int VAR_2)
{
 struct ahash_request_priv *VAR_3 = VAR_1->priv;

 if (VAR_2 == -VAR_0)
  return;

 if (!VAR_2)
  FUNC_3(VAR_3->result, VAR_1->result,
         FUNC_0(FUNC_1(VAR_1)));

 FUNC_2(VAR_3);
}

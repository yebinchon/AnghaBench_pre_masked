
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct flow_divert_group {int * token_key; int token_key_size; } ;
typedef int * mbuf_t ;
struct TYPE_2__ {int ccsha1_di; int (* cchmac_final_fn ) (int ,int ,int *) ;int (* cchmac_update_fn ) (int ,int ,int ,int ) ;int (* cchmac_init_fn ) (int ,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_7(mbuf_t VAR_3, struct flow_divert_group *VAR_4, uint8_t *VAR_5)
{
 mbuf_t VAR_6 = VAR_3;

 if (VAR_1 == ((void*)0) || VAR_4->token_key == ((void*)0)) {
  return VAR_0;
 }

 FUNC_0(VAR_1->ccsha1_di, VAR_2);
 VAR_1->cchmac_init_fn(VAR_1->ccsha1_di, VAR_2, VAR_4->token_key_size, VAR_4->token_key);

 while (VAR_6 != ((void*)0)) {
  VAR_1->cchmac_update_fn(VAR_1->ccsha1_di, VAR_2, FUNC_2(VAR_6), FUNC_1(VAR_6));
  VAR_6 = FUNC_3(VAR_6);
 }

 VAR_1->cchmac_final_fn(VAR_1->ccsha1_di, VAR_2, VAR_5);

 return 0;
}

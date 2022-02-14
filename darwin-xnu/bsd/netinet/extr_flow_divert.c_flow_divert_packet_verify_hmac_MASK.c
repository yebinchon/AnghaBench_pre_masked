
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct flow_divert_group {int lck; int * token_key; } ;
typedef int packet_hmac ;
typedef int mbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct flow_divert_group*,int *) ;
 int FUNC_2 (int ,int ,int ,int*,int ) ;
 int FUNC_3 (int ,int,int ,int,int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct flow_divert_group** VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_9(mbuf_t VAR_10, uint32_t VAR_11)
{
 int VAR_12 = 0;
 struct flow_divert_group *VAR_13 = ((void*)0);
 int VAR_14;
 uint8_t VAR_15[VAR_5];
 uint8_t VAR_16[VAR_5];
 mbuf_t VAR_17;

 FUNC_5(&VAR_7);

 if (VAR_8 != ((void*)0) && VAR_6 > 0) {
  VAR_13 = VAR_8[VAR_11];
 }

 if (VAR_13 == ((void*)0)) {
  FUNC_4(&VAR_7);
  return VAR_1;
 }

 FUNC_5(&VAR_13->lck);

 if (VAR_13->token_key == ((void*)0)) {
  VAR_12 = VAR_1;
  goto done;
 }

 VAR_14 = FUNC_2(VAR_10, 0, VAR_2, &VAR_12, 0);
 if (VAR_14 < 0) {
  goto done;
 }

 VAR_12 = FUNC_3(VAR_10, VAR_14, VAR_2, sizeof(VAR_15), VAR_15, ((void*)0));
 if (VAR_12) {
  goto done;
 }


 VAR_12 = FUNC_7(VAR_10, VAR_14, VAR_4, &VAR_17);
 if (VAR_12) {
  goto done;
 }

 FUNC_6(VAR_17);

 VAR_12 = FUNC_1(VAR_10, VAR_13, VAR_16);
 if (VAR_12) {
  goto done;
 }

 if (FUNC_8(VAR_15, VAR_16, sizeof(VAR_15))) {
  FUNC_0(VAR_3, &VAR_9, "HMAC in token does not match computed HMAC");
  VAR_12 = VAR_0;
  goto done;
 }

done:
 FUNC_4(&VAR_13->lck);
 FUNC_4(&VAR_7);
 return VAR_12;
}

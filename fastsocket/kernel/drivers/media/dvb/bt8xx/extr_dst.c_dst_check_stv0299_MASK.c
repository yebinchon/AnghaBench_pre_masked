
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int tuner_type; int rxbuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_state*) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct dst_state*,int*,int) ;
 scalar_t__ FUNC_4 (int**,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct dst_state *VAR_3)
{
 u8 VAR_4[] = { 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

 VAR_4[7] = FUNC_2(VAR_4, 7);
 if (FUNC_3(VAR_3, VAR_4, 8) < 0) {
  FUNC_1(VAR_2, VAR_0, 1, "Cmd=[0x04] failed");
  return -1;
 }
 FUNC_0(VAR_3);

 if (FUNC_4(&VAR_4, &VAR_3->rxbuffer, 8)) {
  FUNC_1(VAR_2, VAR_0, 1, "Found a STV0299 NIM");
  VAR_3->tuner_type = VAR_1;
  return 0;
 }

 return -1;
}

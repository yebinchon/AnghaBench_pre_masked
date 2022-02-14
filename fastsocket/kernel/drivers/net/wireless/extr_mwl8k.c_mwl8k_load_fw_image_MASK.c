
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwl8k_priv {int dummy; } ;
struct mwl8k_cmd_pkt {void* length; int payload; scalar_t__ result; scalar_t__ macid; scalar_t__ seq_num; void* code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_pkt*) ;
 struct mwl8k_cmd_pkt* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (struct mwl8k_priv*,struct mwl8k_cmd_pkt*,int) ;

__attribute__((used)) static int FUNC_5(struct mwl8k_priv *VAR_3,
    const u8 *VAR_4, size_t VAR_5)
{
 struct mwl8k_cmd_pkt *VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_2(sizeof(*VAR_6) + 256, VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->code = FUNC_0(VAR_2);
 VAR_6->seq_num = 0;
 VAR_6->macid = 0;
 VAR_6->result = 0;

 VAR_7 = 0;
 while (VAR_5) {
  int VAR_9 = VAR_5 > 256 ? 256 : VAR_5;

  FUNC_3(VAR_6->payload, VAR_4 + VAR_7, VAR_9);
  VAR_6->length = FUNC_0(VAR_9);

  VAR_8 = FUNC_4(VAR_3, VAR_6,
      sizeof(*VAR_6) + VAR_9);
  if (VAR_8)
   break;

  VAR_7 += VAR_9;
  VAR_5 -= VAR_9;
 }

 if (!VAR_8) {
  VAR_6->length = 0;
  VAR_8 = FUNC_4(VAR_3, VAR_6, sizeof(*VAR_6));
 }

 FUNC_1(VAR_6);

 return VAR_8;
}

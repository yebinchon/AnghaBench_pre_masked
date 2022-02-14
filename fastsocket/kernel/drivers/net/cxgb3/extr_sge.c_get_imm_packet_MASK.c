
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rsp_desc {int imm_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(const struct rsp_desc *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (VAR_3) {
  FUNC_0(VAR_3, VAR_1);
  FUNC_2(VAR_3, VAR_2->imm_data, VAR_1);
 }
 return VAR_3;
}

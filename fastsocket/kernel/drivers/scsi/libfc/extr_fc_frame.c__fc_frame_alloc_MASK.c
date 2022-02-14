
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct sk_buff*,size_t) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

struct fc_frame *FUNC_5(size_t VAR_4)
{
 struct fc_frame *VAR_5;
 struct sk_buff *VAR_6;

 FUNC_0((VAR_4 % sizeof(u32)) != 0);
 VAR_4 += sizeof(struct fc_frame_header);
 VAR_6 = FUNC_1(VAR_4 + VAR_0 + VAR_1 +
          VAR_3, VAR_2);
 if (!VAR_6)
  return ((void*)0);
 FUNC_4(VAR_6, VAR_3 + VAR_0);
 VAR_5 = (struct fc_frame *) VAR_6;
 FUNC_2(VAR_5);
 FUNC_3(VAR_6, VAR_4);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int dummy; } ;
struct TYPE_2__ {int member_0; } ;
struct attn_route {void** sig; TYPE_1__ member_0; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,int*,int,void**) ;

bool FUNC_4(struct bnx2x *VAR_5, bool *VAR_6, bool VAR_7)
{
 struct attn_route VAR_8 = { 0 };
 int VAR_9 = FUNC_0(VAR_5);

 VAR_8.sig[0] = FUNC_2(VAR_5,
  VAR_0 +
        VAR_9*4);
 VAR_8.sig[1] = FUNC_2(VAR_5,
  VAR_1 +
        VAR_9*4);
 VAR_8.sig[2] = FUNC_2(VAR_5,
  VAR_2 +
        VAR_9*4);
 VAR_8.sig[3] = FUNC_2(VAR_5,
  VAR_3 +
        VAR_9*4);

 if (!FUNC_1(VAR_5))
  VAR_8.sig[4] = FUNC_2(VAR_5,
   VAR_4 +
         VAR_9*4);

 return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8.sig);
}

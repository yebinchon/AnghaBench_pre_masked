
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ pipenum; } ;
struct r8a66597_pipe {int pipectr; TYPE_1__ info; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct r8a66597*,struct r8a66597_pipe*) ;
 int FUNC_1 (struct r8a66597*,int ,int ) ;
 int FUNC_2 (struct r8a66597*,int ,int ) ;
 int FUNC_3 (struct r8a66597*,int ) ;

__attribute__((used)) static void FUNC_4(struct r8a66597 *VAR_1,
        struct r8a66597_pipe *VAR_2)
{
 u16 VAR_3;

 if (!VAR_2 || VAR_2->info.pipenum == 0)
  return;

 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_0, VAR_2->pipectr);
 VAR_3 = FUNC_3(VAR_1, VAR_2->pipectr);
 VAR_3 = FUNC_3(VAR_1, VAR_2->pipectr);
 VAR_3 = FUNC_3(VAR_1, VAR_2->pipectr);
 FUNC_1(VAR_1, VAR_0, VAR_2->pipectr);
}

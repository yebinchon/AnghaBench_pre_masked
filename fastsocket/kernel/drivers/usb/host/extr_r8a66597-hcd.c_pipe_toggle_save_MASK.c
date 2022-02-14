
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct r8a66597_pipe {int pipectr; } ;
struct r8a66597 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct r8a66597*,struct r8a66597_pipe*,struct urb*,int) ;
 int FUNC_1 (struct r8a66597*,int ) ;

__attribute__((used)) static void FUNC_2(struct r8a66597 *VAR_1,
        struct r8a66597_pipe *VAR_2,
        struct urb *VAR_3)
{
 if (FUNC_1(VAR_1, VAR_2->pipectr) & VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3, 1);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3, 0);
}

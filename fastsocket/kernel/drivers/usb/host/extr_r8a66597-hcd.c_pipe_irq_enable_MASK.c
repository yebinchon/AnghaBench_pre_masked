
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct urb {int pipe; } ;
struct r8a66597 {int dummy; } ;


 int FUNC_0 (struct r8a66597*,scalar_t__) ;
 int FUNC_1 (struct r8a66597*,scalar_t__) ;
 int FUNC_2 (struct r8a66597*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct r8a66597 *VAR_0, struct urb *VAR_1,
       u16 VAR_2)
{
 if (VAR_2 == 0 && FUNC_4(VAR_1->pipe))
  FUNC_0(VAR_0, VAR_2);
 else
  FUNC_2(VAR_0, VAR_2);

 if (!FUNC_3(VAR_1->pipe))
  FUNC_1(VAR_0, VAR_2);
}

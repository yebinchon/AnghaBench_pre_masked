
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int pipe; int setup_packet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct urb*) ;
 scalar_t__ FUNC_1 (struct urb*) ;
 scalar_t__ FUNC_2 (struct urb*) ;
 scalar_t__ FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct urb*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_1)
{
 if (!VAR_1 || !VAR_1->setup_packet)
  return;

 if (FUNC_8(VAR_1->pipe) != VAR_0)
  return;

 if (FUNC_0(VAR_1))

   FUNC_4(VAR_1);

 else if (FUNC_3(VAR_1))

  FUNC_7(VAR_1);

 else if (FUNC_2(VAR_1))

  FUNC_6(VAR_1);

 else if (FUNC_1(VAR_1))
  FUNC_5(VAR_1);
 else
  FUNC_9("no need to tweak\n");
}

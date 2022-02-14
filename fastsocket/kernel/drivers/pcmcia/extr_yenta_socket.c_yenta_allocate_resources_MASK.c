
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yenta_socket {TYPE_1__* dev; } ;
struct TYPE_2__ {int subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct yenta_socket*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct yenta_socket *VAR_11)
{
 int VAR_12 = 0;
 VAR_12 += FUNC_1(VAR_11, 0, VAR_0,
      VAR_3, VAR_5);
 VAR_12 += FUNC_1(VAR_11, 1, VAR_0,
      VAR_4, VAR_6);
 VAR_12 += FUNC_1(VAR_11, 2, VAR_1|VAR_2,
      VAR_7, VAR_9);
 VAR_12 += FUNC_1(VAR_11, 3, VAR_1,
      VAR_8, VAR_10);
 if (VAR_12)
  FUNC_0(VAR_11->dev->subordinate);
}

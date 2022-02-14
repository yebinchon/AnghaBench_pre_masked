
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_endpoint {struct bnx2i_endpoint* dd_data; } ;
struct bnx2i_endpoint {scalar_t__ state; int ofld_wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct iscsi_endpoint *VAR_4, int VAR_5)
{
 struct bnx2i_endpoint *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_4->dd_data;
 if ((VAR_6->state == VAR_2) ||
     (VAR_6->state == VAR_1) ||
     (VAR_6->state == VAR_3))
  return -1;
 if (VAR_6->state == VAR_0)
  return 1;

 VAR_7 = FUNC_1(VAR_6->ofld_wait,
           ((VAR_6->state ==
      VAR_3) ||
            (VAR_6->state ==
      VAR_1) ||
            (VAR_6->state ==
      VAR_0)),
           FUNC_0(VAR_5));
 if (VAR_6->state == VAR_3)
  VAR_7 = -1;

 if (VAR_7 > 0)
  return 1;
 else if (!VAR_7)
  return 0;
 else
  return VAR_7;
}

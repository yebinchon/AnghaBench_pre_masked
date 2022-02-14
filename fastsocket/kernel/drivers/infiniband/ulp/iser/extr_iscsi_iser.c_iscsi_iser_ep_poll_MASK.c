
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_conn {scalar_t__ state; int wait; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,struct iser_conn*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_endpoint *VAR_3, int VAR_4)
{
 struct iser_conn *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->dd_data;
 VAR_6 = FUNC_2(VAR_5->wait,
        VAR_5->state == VAR_2,
        FUNC_1(VAR_4));


 if (!VAR_6 &&
     (VAR_5->state == VAR_1 ||
      VAR_5->state == VAR_0))
  VAR_6 = -1;

 FUNC_0("ib conn %p rc = %d\n", VAR_5, VAR_6);

 if (VAR_6 > 0)
  return 1;
 else if (!VAR_6)
  return 0;
 else
  return VAR_6;
}

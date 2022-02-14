
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int port_init; int port_link_up; int ndev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*) ;
 int FUNC_6 (struct ql_adapter*) ;
 int FUNC_7 (struct ql_adapter*) ;
 int FUNC_8 (struct ql_adapter*) ;
 int FUNC_9 (struct ql_adapter*,int ) ;
 int FUNC_10 (struct ql_adapter*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ql_adapter *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5, VAR_4, VAR_5->ndev, "Unable to initialize adapter.\n");
  goto err_init;
 }
 FUNC_12(VAR_0, &VAR_5->flags);
 FUNC_5(VAR_5);



 if ((FUNC_9(VAR_5, VAR_3) & VAR_5->port_init) &&
   (FUNC_9(VAR_5, VAR_3) & VAR_5->port_link_up))
  FUNC_8(VAR_5);

 FUNC_0(VAR_1, &VAR_5->flags);
 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_11(VAR_5->ndev);


 FUNC_10(VAR_5);

 FUNC_7(VAR_5);
 FUNC_6(VAR_5);
 FUNC_2(VAR_5->ndev);

 return 0;
err_init:
 FUNC_4(VAR_5);
 return VAR_6;
}

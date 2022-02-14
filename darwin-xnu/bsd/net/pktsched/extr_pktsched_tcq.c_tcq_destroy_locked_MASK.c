
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcq_if {int tif_ifq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tcq_if*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct tcq_if*) ;
 int FUNC_5 (struct tcq_if*) ;
 int VAR_2 ;
 int FUNC_6 (int ,struct tcq_if*) ;

__attribute__((used)) static int
FUNC_7(struct tcq_if *VAR_3)
{
 FUNC_0(VAR_3->tif_ifq);

 (void) FUNC_4(VAR_3);

 if (VAR_1) {
  FUNC_3(VAR_0, "%s: %s scheduler destroyed\n",
      FUNC_2(FUNC_1(VAR_3)), FUNC_5(VAR_3));
 }

 FUNC_6(VAR_2, VAR_3);

 return (0);
}

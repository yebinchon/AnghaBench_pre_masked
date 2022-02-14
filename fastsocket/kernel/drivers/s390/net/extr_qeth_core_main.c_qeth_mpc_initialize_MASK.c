
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct qeth_card {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (struct qeth_card*,int) ;
 int FUNC_10 (struct qeth_card*) ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_13(struct qeth_card *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, 2, "mpcinit");

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "1err%d", VAR_3);
  return VAR_3;
 }
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "2err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "3err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_11(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "4err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_12(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "5err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "5err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "6err%d", VAR_3);
  FUNC_6(VAR_2);
  goto out_qdio;
 }
 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "7err%d", VAR_3);
  goto out_qdio;
 }
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, 2, "8err%d", VAR_3);
  goto out_qdio;
 }

 return 0;
out_qdio:
 FUNC_9(VAR_2, VAR_2->info.type != VAR_0);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct ar9170 {int tx_cmd_urbs; int tx_anch; int tx_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct urb*,int *) ;
 int FUNC_4 (struct urb*) ;
 struct urb* FUNC_5 (int *) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 if (FUNC_1(&VAR_1->tx_cmd_urbs) != 1) {
  FUNC_0(&VAR_1->tx_cmd_urbs);
  return 0;
 }

 VAR_2 = FUNC_5(&VAR_1->tx_cmd);
 if (!VAR_2) {
  FUNC_0(&VAR_1->tx_cmd_urbs);
  return 0;
 }

 FUNC_3(VAR_2, &VAR_1->tx_anch);
 VAR_3 = FUNC_6(VAR_2, VAR_0);
 if (FUNC_2(VAR_3)) {
  FUNC_7(VAR_2);
  FUNC_0(&VAR_1->tx_cmd_urbs);
 }
 FUNC_4(VAR_2);

 return VAR_3;
}

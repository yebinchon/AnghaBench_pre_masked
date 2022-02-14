
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
struct cmd {int val; int idx; int req; } ;


 int FUNC_0 (struct gspca_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   const struct cmd *VAR_1, int VAR_2)
{
 while (--VAR_2 >= 0) {
  FUNC_0(VAR_0, VAR_1->req, VAR_1->idx, VAR_1->val);
  VAR_1++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; int ws_col; } ;
struct vc_data {int dummy; } ;
struct tty_struct {struct vc_data* driver_data; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct tty_struct*,struct vc_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0, struct winsize *VAR_1)
{
 struct vc_data *VAR_2 = VAR_0->driver_data;
 int VAR_3;

 FUNC_0();
 VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_1->ws_col, VAR_1->ws_row);
 FUNC_1();
 return VAR_3;
}

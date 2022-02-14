
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int write; int update_flags; } ;
struct raw3270_request {scalar_t__ rc; scalar_t__ view; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw3270_request*) ;
 int FUNC_1 (struct tty3270*,int) ;
 int FUNC_2 (int *,struct raw3270_request*) ;

__attribute__((used)) static void
FUNC_3(struct raw3270_request *VAR_1, void *VAR_2)
{
 struct tty3270 *VAR_3;

 VAR_3 = (struct tty3270 *) VAR_1->view;
 if (VAR_1->rc != 0) {

  VAR_3->update_flags = VAR_0;
  FUNC_1(VAR_3, 1);
 }
 FUNC_0(VAR_1);
 FUNC_2(&VAR_3->write, VAR_1);
}

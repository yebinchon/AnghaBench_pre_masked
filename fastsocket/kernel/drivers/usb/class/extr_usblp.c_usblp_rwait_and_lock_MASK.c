
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int rwait; int mut; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usblp*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct usblp *VAR_5, int VAR_6)
{
 FUNC_0(VAR_4, VAR_3);
 int VAR_7;

 FUNC_1(&VAR_5->rwait, &VAR_4);
 for (;;) {
  if (FUNC_2(&VAR_5->mut)) {
   VAR_7 = -VAR_0;
   break;
  }
  FUNC_6(VAR_1);
  if ((VAR_7 = FUNC_7(VAR_5, VAR_6)) < 0) {
   FUNC_3(&VAR_5->mut);
   break;
  }
  if (VAR_7 == 0)
   break;
  FUNC_3(&VAR_5->mut);
  FUNC_5();
 }
 FUNC_6(VAR_2);
 FUNC_4(&VAR_5->rwait, &VAR_4);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int flags; int wwait; int mut; int statusbuf; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usblp*,int) ;
 int FUNC_10 (struct usblp*,int ) ;
 int FUNC_11 (struct usblp*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct usblp *VAR_7, int VAR_8)
{
 FUNC_0(VAR_6, VAR_5);
 int VAR_9;
 int VAR_10 = 0;

 FUNC_1(&VAR_7->wwait, &VAR_6);
 for (;;) {
  FUNC_8(VAR_3);
  if (FUNC_4(&VAR_7->mut)) {
   VAR_9 = -VAR_0;
   break;
  }
  VAR_9 = FUNC_11(VAR_7, VAR_8);
  FUNC_5(&VAR_7->mut);
  if (VAR_9 <= 0)
   break;

  if (FUNC_7(FUNC_2(1500)) == 0) {
   if (VAR_7->flags & VAR_2) {
    VAR_10 = FUNC_9(VAR_7, VAR_10);
    if (VAR_10 == 1) {
     VAR_9 = -VAR_1;
     break;
    }
   } else {

    FUNC_3(&VAR_7->mut);
    FUNC_10(VAR_7, VAR_7->statusbuf);
    FUNC_5(&VAR_7->mut);
   }
  }
 }
 FUNC_8(VAR_4);
 FUNC_6(&VAR_7->wwait, &VAR_6);
 return VAR_9;
}

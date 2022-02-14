
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_path {int dummy; } ;
struct hvc_struct {int vtermno; } ;
struct hvc_iucv_private {int lock; int iucv_state; struct iucv_path* path; } ;


 int VAR_0 ;
 int FUNC_0 (struct hvc_iucv_private*) ;
 struct hvc_iucv_private* FUNC_1 (int ) ;
 int FUNC_2 (struct iucv_path*) ;
 int FUNC_3 (struct iucv_path*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hvc_struct *VAR_1, int VAR_2)
{
 struct hvc_iucv_private *VAR_3;
 struct iucv_path *VAR_4;




 if (VAR_2)
  return;

 VAR_3 = FUNC_1(VAR_1->vtermno);
 if (!VAR_3)
  return;




 FUNC_0(VAR_3);

 FUNC_4(&VAR_3->lock);
 VAR_4 = VAR_3->path;
 VAR_3->path = ((void*)0);
 VAR_3->iucv_state = VAR_0;
 FUNC_5(&VAR_3->lock);



 if (VAR_4) {
  FUNC_3(VAR_4, ((void*)0));
  FUNC_2(VAR_4);
 }
}

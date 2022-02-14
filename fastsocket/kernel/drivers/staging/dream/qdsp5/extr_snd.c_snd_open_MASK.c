
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctxt {int opened; int lock; int * ept; } ;
struct inode {int dummy; } ;
struct file {struct snd_ctxt* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 struct snd_ctxt VAR_4 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 struct snd_ctxt *VAR_7 = &VAR_4;
 int VAR_8 = 0;

 FUNC_3(&VAR_7->lock);
 if (VAR_7->opened == 0) {
  if (VAR_7->ept == ((void*)0)) {
   VAR_7->ept = FUNC_2(VAR_2, VAR_3,
     VAR_1);
   if (FUNC_0(VAR_7->ept)) {
    VAR_8 = FUNC_1(VAR_7->ept);
    VAR_7->ept = ((void*)0);
    FUNC_5("snd: failed to connect snd svc\n");
    goto err;
   }
  }
  VAR_6->private_data = VAR_7;
  VAR_7->opened = 1;
 } else {
  FUNC_5("snd already opened.\n");
  VAR_8 = -VAR_0;
 }

err:
 FUNC_4(&VAR_7->lock);
 return VAR_8;
}

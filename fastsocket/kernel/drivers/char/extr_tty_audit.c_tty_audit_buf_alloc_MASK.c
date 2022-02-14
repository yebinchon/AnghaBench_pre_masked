
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_audit_buf {int major; int minor; int icanon; scalar_t__ valid; int mutex; int count; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct tty_audit_buf*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct tty_audit_buf *FUNC_4(int VAR_2, int VAR_3,
       int VAR_4)
{
 struct tty_audit_buf *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto err;
 VAR_5->data = FUNC_2(VAR_1, VAR_0);
 if (!VAR_5->data)
  goto err_buf;
 FUNC_0(&VAR_5->count, 1);
 FUNC_3(&VAR_5->mutex);
 VAR_5->major = VAR_2;
 VAR_5->minor = VAR_3;
 VAR_5->icanon = VAR_4;
 VAR_5->valid = 0;
 return VAR_5;

err_buf:
 FUNC_1(VAR_5);
err:
 return ((void*)0);
}

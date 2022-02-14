
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvc_struct {int n_outbuf; int do_wakeup; int outbuf; int vtermno; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* put_chars ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hvc_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->ops->put_chars(VAR_1->vtermno, VAR_1->outbuf, VAR_1->n_outbuf);
 if (VAR_2 <= 0) {
  if (VAR_2 == 0 || VAR_2 == -VAR_0) {
   VAR_1->do_wakeup = 1;
   return 0;
  }


  VAR_1->n_outbuf = 0;
 } else
  VAR_1->n_outbuf -= VAR_2;
 if (VAR_1->n_outbuf > 0)
  FUNC_0(VAR_1->outbuf, VAR_1->outbuf + VAR_2, VAR_1->n_outbuf);
 else
  VAR_1->do_wakeup = 1;

 return VAR_2;
}

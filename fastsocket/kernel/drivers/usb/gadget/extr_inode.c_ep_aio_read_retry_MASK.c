
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb_priv {scalar_t__ actual; int nr_segs; struct kiocb_priv* buf; TYPE_1__* iv; } ;
struct kiocb {struct kiocb_priv* private; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int iov_base; scalar_t__ iov_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (struct kiocb_priv*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_1)
{
 struct kiocb_priv *VAR_2 = VAR_1->private;
 ssize_t VAR_3, VAR_4;
 void *VAR_5;
 int VAR_6;




 VAR_4 = VAR_2->actual;
 VAR_3 = 0;
 VAR_5 = VAR_2->buf;
 for (VAR_6=0; VAR_6 < VAR_2->nr_segs; VAR_6++) {
  ssize_t VAR_7 = FUNC_2((ssize_t)(VAR_2->iv[VAR_6].iov_len), VAR_4);

  if (FUNC_0(VAR_2->iv[VAR_6].iov_base, VAR_5, VAR_7)) {
   if (VAR_3 == 0)
    VAR_3 = -VAR_0;
   break;
  }

  VAR_4 -= VAR_7;
  VAR_3 += VAR_7;
  VAR_5 += VAR_7;
  if (VAR_4 == 0)
   break;
 }
 FUNC_1(VAR_2->buf);
 FUNC_1(VAR_2);
 return VAR_3;
}

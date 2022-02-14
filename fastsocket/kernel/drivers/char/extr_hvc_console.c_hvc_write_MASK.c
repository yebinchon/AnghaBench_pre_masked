
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hvc_struct* driver_data; } ;
struct hvc_struct {scalar_t__ count; scalar_t__ n_outbuf; int outbuf_size; int outbuf; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct hvc_struct*) ;
 int FUNC_2 (int,unsigned char const*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
 struct hvc_struct *VAR_5 = VAR_2->driver_data;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;


 if (!VAR_5)
  return -VAR_1;

 if (VAR_5->count <= 0)
  return -VAR_0;

 FUNC_3(&VAR_5->lock, VAR_6);


 if (VAR_5->n_outbuf > 0)
  FUNC_1(VAR_5);

 while (VAR_4 > 0 && (VAR_7 = VAR_5->outbuf_size - VAR_5->n_outbuf) > 0) {
  if (VAR_7 > VAR_4)
   VAR_7 = VAR_4;
  FUNC_2(VAR_5->outbuf + VAR_5->n_outbuf, VAR_3, VAR_7);
  VAR_4 -= VAR_7;
  VAR_3 += VAR_7;
  VAR_5->n_outbuf += VAR_7;
  VAR_8 += VAR_7;
  FUNC_1(VAR_5);
 }
 FUNC_4(&VAR_5->lock, VAR_6);




 if (VAR_5->n_outbuf)
  FUNC_0();

 return VAR_8;
}

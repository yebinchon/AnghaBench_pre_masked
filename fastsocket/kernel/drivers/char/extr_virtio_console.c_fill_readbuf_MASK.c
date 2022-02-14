
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_buffer {scalar_t__ len; scalar_t__ offset; scalar_t__ buf; } ;
struct port {int inbuf_lock; int dev; int in_vq; struct port_buffer* inbuf; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct port_buffer*) ;
 size_t FUNC_1 (char*,scalar_t__,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,scalar_t__,size_t) ;
 size_t FUNC_4 (size_t,scalar_t__) ;
 int FUNC_5 (struct port*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct port *VAR_1, char *VAR_2, size_t VAR_3,
       bool VAR_4)
{
 struct port_buffer *VAR_5;
 unsigned long VAR_6;

 if (!VAR_3 || !FUNC_5(VAR_1))
  return 0;

 VAR_5 = VAR_1->inbuf;
 VAR_3 = FUNC_4(VAR_3, VAR_5->len - VAR_5->offset);

 if (VAR_4) {
  ssize_t VAR_7;

  VAR_7 = FUNC_1(VAR_2, VAR_5->buf + VAR_5->offset, VAR_3);
  if (VAR_7)
   return -VAR_0;
 } else {
  FUNC_3(VAR_2, VAR_5->buf + VAR_5->offset, VAR_3);
 }

 VAR_5->offset += VAR_3;

 if (VAR_5->offset == VAR_5->len) {




  FUNC_6(&VAR_1->inbuf_lock, VAR_6);
  VAR_1->inbuf = ((void*)0);

  if (FUNC_0(VAR_1->in_vq, VAR_5) < 0)
   FUNC_2(VAR_1->dev, "failed add_buf\n");

  FUNC_7(&VAR_1->inbuf_lock, VAR_6);
 }

 return VAR_3;
}

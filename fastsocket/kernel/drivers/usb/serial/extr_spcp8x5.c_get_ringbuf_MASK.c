
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ringbuf {unsigned int buf_buf; unsigned int buf_size; unsigned int buf_get; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct ringbuf*) ;

__attribute__((used)) static unsigned int FUNC_2(struct ringbuf *VAR_0, char *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 if (VAR_2 == 0)
  return 0;

 VAR_3 = VAR_0->buf_buf + VAR_0->buf_size - VAR_0->buf_get;
 if (VAR_2 > VAR_3) {
  FUNC_0(VAR_1, VAR_0->buf_get, VAR_3);
  FUNC_0(VAR_1+VAR_3, VAR_0->buf_buf, VAR_2 - VAR_3);
  VAR_0->buf_get = VAR_0->buf_buf + VAR_2 - VAR_3;
 } else {
  FUNC_0(VAR_1, VAR_0->buf_get, VAR_2);
  if (VAR_2 < VAR_3)
   VAR_0->buf_get += VAR_2;
  else
   VAR_0->buf_get = VAR_0->buf_buf;
 }

 return VAR_2;
}

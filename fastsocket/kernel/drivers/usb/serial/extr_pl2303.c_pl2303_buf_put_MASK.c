
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl2303_buf {unsigned int buf_buf; unsigned int buf_size; unsigned int buf_put; } ;


 int FUNC_0 (unsigned int,char const*,unsigned int) ;
 unsigned int FUNC_1 (struct pl2303_buf*) ;

__attribute__((used)) static unsigned int FUNC_2(struct pl2303_buf *VAR_0, const char *VAR_1,
       unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 if (VAR_2 == 0)
  return 0;

 VAR_3 = VAR_0->buf_buf + VAR_0->buf_size - VAR_0->buf_put;
 if (VAR_2 > VAR_3) {
  FUNC_0(VAR_0->buf_put, VAR_1, VAR_3);
  FUNC_0(VAR_0->buf_buf, VAR_1+VAR_3, VAR_2 - VAR_3);
  VAR_0->buf_put = VAR_0->buf_buf + VAR_2 - VAR_3;
 } else {
  FUNC_0(VAR_0->buf_put, VAR_1, VAR_2);
  if (VAR_2 < VAR_3)
   VAR_0->buf_put += VAR_2;
  else
   VAR_0->buf_put = VAR_0->buf_buf;
 }

 return VAR_2;
}

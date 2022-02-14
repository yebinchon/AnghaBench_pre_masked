
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_buf {unsigned int buf_size; int * buf_buf; int * buf_get; int * buf_put; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct gs_buf *VAR_2, unsigned VAR_3)
{
 VAR_2->buf_buf = FUNC_0(VAR_3, VAR_1);
 if (VAR_2->buf_buf == ((void*)0))
  return -VAR_0;

 VAR_2->buf_size = VAR_3;
 VAR_2->buf_put = VAR_2->buf_buf;
 VAR_2->buf_get = VAR_2->buf_buf;

 return 0;
}

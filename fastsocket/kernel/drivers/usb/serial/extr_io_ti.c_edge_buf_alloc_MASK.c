
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_buf {unsigned int buf_size; int * buf_buf; int * buf_put; int * buf_get; } ;


 int VAR_0 ;
 int FUNC_0 (struct edge_buf*) ;
 void* FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static struct edge_buf *FUNC_2(unsigned int VAR_1)
{
 struct edge_buf *VAR_2;


 if (VAR_1 == 0)
  return ((void*)0);

 VAR_2 = FUNC_1(sizeof(struct edge_buf), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->buf_buf = FUNC_1(VAR_1, VAR_0);
 if (VAR_2->buf_buf == ((void*)0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_2->buf_size = VAR_1;
 VAR_2->buf_get = VAR_2->buf_put = VAR_2->buf_buf;

 return VAR_2;
}

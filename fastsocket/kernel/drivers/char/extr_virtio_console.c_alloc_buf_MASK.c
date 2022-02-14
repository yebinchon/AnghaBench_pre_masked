
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
struct port_buffer {int sgpages; size_t size; scalar_t__ offset; scalar_t__ len; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct port_buffer*) ;
 void* FUNC_1 (size_t,int ) ;

__attribute__((used)) static struct port_buffer *FUNC_2(struct virtqueue *VAR_1, size_t VAR_2,
         int VAR_3)
{
 struct port_buffer *VAR_4;





 VAR_4 = FUNC_1(sizeof(*VAR_4) + sizeof(struct scatterlist) * VAR_3,
        VAR_0);
 if (!VAR_4)
  goto fail;

 VAR_4->sgpages = VAR_3;
 if (VAR_3 > 0) {
  VAR_4->buf = ((void*)0);
  return VAR_4;
 }

 VAR_4->buf = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4->buf)
  goto free_buf;
 VAR_4->len = 0;
 VAR_4->offset = 0;
 VAR_4->size = VAR_2;
 return VAR_4;

free_buf:
 FUNC_0(VAR_4);
fail:
 return ((void*)0);
}

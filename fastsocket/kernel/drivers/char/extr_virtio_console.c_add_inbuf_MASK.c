
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct scatterlist {int dummy; } ;
struct port_buffer {int size; int buf; } ;


 int FUNC_0 (struct scatterlist*,int ,int ) ;
 int FUNC_1 (struct virtqueue*,struct scatterlist*,int ,int,struct port_buffer*) ;
 int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static int FUNC_3(struct virtqueue *VAR_0, struct port_buffer *VAR_1)
{
 struct scatterlist VAR_2[1];
 int VAR_3;

 FUNC_0(VAR_2, VAR_1->buf, VAR_1->size);

 VAR_3 = FUNC_1(VAR_0, VAR_2, 0, 1, VAR_1);
 FUNC_2(VAR_0);
 return VAR_3;
}

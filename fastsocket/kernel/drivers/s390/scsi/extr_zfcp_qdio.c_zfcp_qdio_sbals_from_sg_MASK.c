
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zfcp_queue_req {int dummy; } ;
struct zfcp_qdio {int dummy; } ;
struct scatterlist {int length; } ;
struct qdio_buffer_element {int sflags; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct zfcp_qdio*,struct zfcp_queue_req*,int ,int ,int ) ;
 int FUNC_3 (struct zfcp_qdio*,struct zfcp_queue_req*,int) ;
 struct qdio_buffer_element* FUNC_4 (struct zfcp_qdio*,struct zfcp_queue_req*) ;

int FUNC_5(struct zfcp_qdio *VAR_0,
       struct zfcp_queue_req *VAR_1,
       u8 VAR_2, struct scatterlist *VAR_3,
       int VAR_4)
{
 struct qdio_buffer_element *VAR_5;
 int VAR_6;



 FUNC_3(VAR_0, VAR_1, VAR_4);



 VAR_5 = FUNC_4(VAR_0, VAR_1);
 VAR_5->sflags |= VAR_2;

 for (; VAR_3; VAR_3 = FUNC_0(VAR_3)) {
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2,
           FUNC_1(VAR_3), VAR_3->length);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}

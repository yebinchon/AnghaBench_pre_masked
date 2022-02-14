
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_qdio {int dummy; } ;
struct zfcp_fsf_req {int queue_req; struct fsf_qtcb* qtcb; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int adapter_features; struct zfcp_qdio* qdio; } ;
struct scatterlist {int dummy; } ;
struct qdio_buffer_element {int dummy; } ;
struct TYPE_3__ {void* resp_buf_length; void* req_buf_length; } ;
struct TYPE_4__ {TYPE_1__ support; } ;
struct fsf_qtcb {TYPE_2__ bottom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct qdio_buffer_element*,struct scatterlist*,struct scatterlist*) ;
 void* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;
 struct qdio_buffer_element* FUNC_5 (struct zfcp_qdio*,int *) ;
 scalar_t__ FUNC_6 (struct zfcp_qdio*,int *,int ,struct scatterlist*,int) ;
 int FUNC_7 (struct zfcp_qdio*,int *,int ) ;
 int FUNC_8 (struct zfcp_qdio*,int *) ;
 int FUNC_9 (struct zfcp_qdio*,int *) ;
 int FUNC_10 (struct zfcp_qdio*,int *) ;

__attribute__((used)) static int FUNC_11(struct zfcp_fsf_req *VAR_4,
           struct scatterlist *VAR_5,
           struct scatterlist *VAR_6,
           int VAR_7)
{
 struct zfcp_adapter *VAR_8 = VAR_4->adapter;
 struct qdio_buffer_element *VAR_9 = FUNC_5(VAR_8->qdio,
              &VAR_4->queue_req);
 struct zfcp_qdio *VAR_10 = VAR_8->qdio;
 struct fsf_qtcb *VAR_11 = VAR_4->qtcb;
 u32 VAR_12 = VAR_8->adapter_features;

 if (FUNC_0(VAR_8)) {
  if (FUNC_6(VAR_10, &VAR_4->queue_req,
         VAR_3,
         VAR_5, VAR_7))
   return -VAR_0;
  if (FUNC_6(VAR_10, &VAR_4->queue_req,
         VAR_3,
         VAR_6, VAR_7))
   return -VAR_0;

  FUNC_7(VAR_10, &VAR_4->queue_req,
           FUNC_4(VAR_5));
  FUNC_8(VAR_10, &VAR_4->queue_req);
  FUNC_9(VAR_10, &VAR_4->queue_req);
  return 0;
 }


 if (FUNC_1(VAR_5) && FUNC_1(VAR_6)) {
  FUNC_2(VAR_9, VAR_5, VAR_6);
  return 0;
 }

 if (!(VAR_12 & VAR_2))
  return -VAR_1;

 if (FUNC_6(VAR_10, &VAR_4->queue_req,
        VAR_3,
        VAR_5, VAR_7))
  return -VAR_0;

 VAR_11->bottom.support.req_buf_length = FUNC_3(VAR_5);

 FUNC_8(VAR_10, &VAR_4->queue_req);
 FUNC_10(VAR_10, &VAR_4->queue_req);

 if (FUNC_6(VAR_10, &VAR_4->queue_req,
        VAR_3,
        VAR_6, VAR_7))
  return -VAR_0;

 VAR_11->bottom.support.resp_buf_length = FUNC_3(VAR_6);

 FUNC_8(VAR_10, &VAR_4->queue_req);

 return 0;
}

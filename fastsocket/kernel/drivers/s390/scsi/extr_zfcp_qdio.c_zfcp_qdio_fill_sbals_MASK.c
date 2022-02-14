
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_queue_req {int dummy; } ;
struct zfcp_qdio {int req_q_full; } ;
struct qdio_buffer_element {unsigned long length; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 struct qdio_buffer_element* FUNC_2 (struct zfcp_qdio*,struct zfcp_queue_req*,unsigned int) ;
 int FUNC_3 (struct zfcp_qdio*,struct zfcp_queue_req*) ;

__attribute__((used)) static int FUNC_4(struct zfcp_qdio *VAR_2,
    struct zfcp_queue_req *VAR_3,
    unsigned int VAR_4, void *VAR_5,
    unsigned int VAR_6)
{
 struct qdio_buffer_element *VAR_7;
 unsigned long VAR_8, VAR_9;
 void *VAR_10;


 for (VAR_10 = VAR_5, VAR_8 = VAR_6; VAR_8 > 0;
      VAR_10 += VAR_9, VAR_8 -= VAR_9) {
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (!VAR_7) {
   FUNC_0(&VAR_2->req_q_full);
   FUNC_3(VAR_2, VAR_3);
   return -VAR_0;
  }


  VAR_9 = FUNC_1(VAR_8,
        (VAR_1 - ((unsigned long)VAR_10 &
        (VAR_1 - 1))));
  VAR_7->addr = VAR_10;
  VAR_7->length = VAR_9;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_4__ {TYPE_1__** sbal; } ;
struct zfcp_qdio {struct zfcp_adapter* adapter; TYPE_2__ resp_q; } ;
struct zfcp_adapter {int dbf; } ;
struct qdio_buffer_element {scalar_t__ scount; scalar_t__ addr; } ;
struct ccw_device {int dummy; } ;
struct TYPE_3__ {struct qdio_buffer_element* element; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int ,int) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct zfcp_adapter*) ;
 int FUNC_4 (int ,unsigned int,int,int,scalar_t__,int,void**) ;
 int FUNC_5 (struct zfcp_qdio*,int) ;
 int FUNC_6 (struct zfcp_qdio*,char*,unsigned int) ;
 int FUNC_7 (struct zfcp_qdio*,int) ;

__attribute__((used)) static void FUNC_8(struct ccw_device *VAR_2, unsigned int VAR_3,
          int VAR_4, int VAR_5, int VAR_6,
          unsigned long VAR_7)
{
 struct zfcp_qdio *VAR_8 = (struct zfcp_qdio *) VAR_7;
 struct zfcp_adapter *VAR_9 = VAR_8->adapter;
 struct qdio_buffer_element *VAR_10;
 int VAR_11, VAR_12;
 void *VAR_13[VAR_0 + 1];
 u64 VAR_14 = 0;
 u8 VAR_15 = 0;

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_13, 0, (VAR_0 + 1) * sizeof(void *));
  if (FUNC_3(VAR_9)) {
   VAR_10 = VAR_8->resp_q.sbal[VAR_5]->element;
   VAR_14 = (u64) VAR_10->addr;
   VAR_15 = FUNC_1(VAR_10->scount + 1,
         VAR_0 + 1);


   for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++) {
    VAR_12 = (VAR_5 + VAR_11) %
     VAR_1;
    VAR_13[VAR_11] = VAR_8->resp_q.sbal[VAR_12];
   }
  }
  FUNC_4(VAR_8->adapter->dbf, VAR_3, VAR_5,
      VAR_6, VAR_14, VAR_15,
      FUNC_3(VAR_9)
      ? VAR_13 : ((void*)0));
  FUNC_6(VAR_8, "qdires1", VAR_3);
  return;
 }





 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = (VAR_5 + VAR_11) % VAR_1;

  FUNC_5(VAR_8, VAR_12);
 }





 FUNC_7(VAR_8, VAR_6);
}

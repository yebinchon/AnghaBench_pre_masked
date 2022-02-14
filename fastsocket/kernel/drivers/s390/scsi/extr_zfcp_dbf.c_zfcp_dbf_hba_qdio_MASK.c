
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {unsigned int qdio_error; int sbal_index; int sbal_count; int scount; int fsf_reqid; } ;
struct TYPE_4__ {TYPE_1__ qdio; } ;
struct zfcp_dbf_hba_record {int total_size; int offset; int size; int tag; scalar_t__ data; TYPE_2__ u; } ;
struct zfcp_dbf_dump {int total_size; int offset; int size; int tag; scalar_t__ data; TYPE_2__ u; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba_record hba_buf; } ;
struct qdio_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_hba_record*,int) ;
 int FUNC_1 (scalar_t__,void*,int) ;
 int FUNC_2 (struct zfcp_dbf_hba_record*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,char*,int ) ;

void FUNC_7(struct zfcp_dbf *VAR_1, unsigned int VAR_2,
         int VAR_3, int VAR_4,
         u32 VAR_5, u8 VAR_6, void *VAR_7[])
{
 struct zfcp_dbf_hba_record *VAR_8 = &VAR_1->hba_buf;
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_1->hba_lock, VAR_9);
 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 FUNC_6(VAR_8->tag, "qdio", VAR_0);
 VAR_8->u.qdio.qdio_error = VAR_2;
 VAR_8->u.qdio.sbal_index = VAR_3;
 VAR_8->u.qdio.sbal_count = VAR_4;
 if (VAR_7) {
  VAR_8->u.qdio.fsf_reqid = VAR_5;
  VAR_8->u.qdio.scount = VAR_6;
 }
 FUNC_0(VAR_1->hba, VAR_10, VAR_8, sizeof(*VAR_8));
 if (VAR_7) {
  struct zfcp_dbf_dump *VAR_11 = (struct zfcp_dbf_dump *)VAR_8;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
   VAR_18, VAR_19;




  VAR_12 = 0;
  VAR_13 = 0;
  VAR_15 = sizeof(struct qdio_buffer);
  VAR_14 = 0;
  VAR_16 = sizeof(*VAR_8) - sizeof(*VAR_11) ;
  VAR_18 = 0;
  VAR_19 = 0;
  FUNC_2(VAR_8, 0, sizeof(*VAR_8));
  FUNC_6(VAR_11->tag, "dump", VAR_0);
  VAR_11->total_size = VAR_6 * sizeof(struct qdio_buffer);
  VAR_11->offset = VAR_18;
  for (;;) {
   VAR_17 = FUNC_3(VAR_15, VAR_16);
   if (VAR_12 >= VAR_6 || !VAR_7[VAR_12]) {
    if (VAR_14) {
     VAR_11->size = VAR_19;
     FUNC_0(VAR_1->hba, VAR_10, VAR_11,
          VAR_11->size + sizeof(*VAR_11));
    }
    break;
   }
   FUNC_1(VAR_11->data + VAR_14,
          VAR_7[VAR_12] + VAR_13, VAR_17);
   VAR_13 += VAR_17;
   VAR_15 -= VAR_17;
   VAR_14 += VAR_17;
   VAR_16 -= VAR_17;
   VAR_19 += VAR_17;
   if (!VAR_15) {
    VAR_12++;
    VAR_13 = 0;
    VAR_15 = sizeof(struct qdio_buffer);
   }
   if (!VAR_16) {
    VAR_11->size = VAR_19;
    FUNC_0(VAR_1->hba, VAR_10, VAR_11,
         VAR_11->size + sizeof(*VAR_11));
    VAR_18 += VAR_11->size;
    VAR_19 = 0;
    VAR_14 = 0;
    VAR_16 = sizeof(*VAR_8) - sizeof(*VAR_11);
    FUNC_2(VAR_8, 0, sizeof(*VAR_8));
    FUNC_6(VAR_11->tag, "dump", VAR_0);
    VAR_11->total_size =
     VAR_6 * sizeof(struct qdio_buffer);
    VAR_11->offset = VAR_18;

   }
  }
 }
 FUNC_5(&VAR_1->hba_lock, VAR_9);
}

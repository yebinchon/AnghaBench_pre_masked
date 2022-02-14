
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ssp_response_iu {int status; int datapres; int* resp_data; int tag; } ;
struct ssp_frame_hdr {int status; int datapres; int* resp_data; int tag; } ;
struct done_list_struct {scalar_t__ status_block; } ;
struct TYPE_2__ {struct asd_dma_tok** edb_arr; int tc_index_lock; } ;
struct asd_ha_struct {TYPE_1__ seq; } ;
struct asd_dma_tok {struct ssp_response_iu* vaddr; } ;
struct asd_ascb {int edb_index; int tag_valid; int tag; struct asd_ha_struct* ha; } ;
typedef int __le16 ;
typedef int __be16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct asd_ascb*,int) ;
 struct asd_ascb* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct asd_ascb *VAR_1,
        struct done_list_struct *VAR_2)
{
 struct asd_ha_struct *VAR_3 = VAR_1->ha;
 unsigned long VAR_4;
 struct tc_resp_sb_struct {
  __le16 index_escb;
  u8 len_lsb;
  u8 flags;
 } __attribute__ ((packed)) *VAR_5 = (void *) VAR_2->status_block;

 int VAR_6 = ((VAR_5->flags & 0x70) >> 4)-1;
 struct asd_ascb *VAR_7;
 struct asd_dma_tok *VAR_8;
 struct ssp_frame_hdr *VAR_9;
 struct ssp_response_iu *VAR_10;
 int VAR_11 = VAR_0;

 FUNC_0("tmf resp tasklet\n");

 FUNC_4(&VAR_3->seq.tc_index_lock, VAR_4);
 VAR_7 = FUNC_2(&VAR_3->seq,
     (int)FUNC_3(VAR_5->index_escb));
 FUNC_5(&VAR_3->seq.tc_index_lock, VAR_4);

 if (!VAR_7) {
  FUNC_0("Uh-oh! No escb for this dl?!\n");
  return VAR_11;
 }

 VAR_8 = VAR_3->seq.edb_arr[VAR_6 + VAR_7->edb_index];
 VAR_1->tag = *(__be16 *)(VAR_8->vaddr+4);
 VAR_9 = VAR_8->vaddr + 16;
 VAR_10 = VAR_8->vaddr + 16 + sizeof(*VAR_9);
 VAR_11 = VAR_10->status;
 if (VAR_10->datapres == 1)
  VAR_11 = VAR_10->resp_data[3];



 VAR_1->tag_valid = 1;

 FUNC_1(VAR_7, VAR_6);
 return VAR_11;
}

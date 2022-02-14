
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_user_info {unsigned int spu_subctxt_cnt; int spu_userversion; int spu_subctxt_id; } ;
struct qib_devdata {int rcvhdrcnt; int rcvhdrentsize; int pcidev; } ;
struct qib_ctxtdata {unsigned int rcvegrbuf_chunks; unsigned int rcvegrbuf_size; unsigned int subctxt_cnt; int active_slaves; int redirect_seq_cnt; int * subctxt_uregbase; int * subctxt_rcvhdr_base; int flag; int subctxt_id; void* subctxt_rcvegrbuf; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,int,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct qib_devdata *VAR_7,
    struct qib_ctxtdata *VAR_8,
    const struct qib_user_info *VAR_9)
{
 int VAR_10 = 0;
 unsigned VAR_11;
 size_t VAR_12;





 if (VAR_9->spu_subctxt_cnt <= 0)
  goto bail;
 VAR_11 = VAR_9->spu_subctxt_cnt;


 if (!FUNC_1(VAR_9->spu_userversion >> 16,
  VAR_9->spu_userversion & 0xffff)) {
  FUNC_2(VAR_7->pcidev,
    "Mismatched user version (%d.%d) and driver "
    "version (%d.%d) while context sharing. Ensure "
    "that driver and library are from the same "
    "release.\n",
    (int) (VAR_9->spu_userversion >> 16),
    (int) (VAR_9->spu_userversion & 0xffff),
    VAR_4, VAR_5);
  goto bail;
 }
 if (VAR_11 > VAR_6) {
  VAR_10 = -VAR_0;
  goto bail;
 }

 VAR_8->subctxt_uregbase = FUNC_5(VAR_2 * VAR_11);
 if (!VAR_8->subctxt_uregbase) {
  VAR_10 = -VAR_1;
  goto bail;
 }

 VAR_12 = FUNC_0(VAR_7->rcvhdrcnt * VAR_7->rcvhdrentsize *
       sizeof(u32), VAR_2) * VAR_11;
 VAR_8->subctxt_rcvhdr_base = FUNC_5(VAR_12);
 if (!VAR_8->subctxt_rcvhdr_base) {
  VAR_10 = -VAR_1;
  goto bail_ureg;
 }

 VAR_8->subctxt_rcvegrbuf = FUNC_5(VAR_8->rcvegrbuf_chunks *
           VAR_8->rcvegrbuf_size *
           VAR_11);
 if (!VAR_8->subctxt_rcvegrbuf) {
  VAR_10 = -VAR_1;
  goto bail_rhdr;
 }

 VAR_8->subctxt_cnt = VAR_9->spu_subctxt_cnt;
 VAR_8->subctxt_id = VAR_9->spu_subctxt_id;
 VAR_8->active_slaves = 1;
 VAR_8->redirect_seq_cnt = 1;
 FUNC_3(VAR_3, &VAR_8->flag);
 goto bail;

bail_rhdr:
 FUNC_4(VAR_8->subctxt_rcvhdr_base);
bail_ureg:
 FUNC_4(VAR_8->subctxt_uregbase);
 VAR_8->subctxt_uregbase = ((void*)0);
bail:
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int rcvegrbufsize; int (* f_init_ctxt ) (struct qib_ctxtdata*) ;struct qib_ctxtdata** rcd; } ;
struct qib_ctxtdata {int cnt; size_t ctxt; int rcvegrbuf_size; int rcvegrbufs_perchunk; int rcvegrbuf_chunks; int rcvegrcnt; int rcvegrbufs_perchunk_shift; struct qib_devdata* dd; struct qib_pportdata* ppd; int qp_wait_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct qib_ctxtdata* FUNC_4 (int,int ) ;
 int FUNC_5 (struct qib_ctxtdata*) ;

struct qib_ctxtdata *FUNC_6(struct qib_pportdata *VAR_1, u32 VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_1->dd;
 struct qib_ctxtdata *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  FUNC_1(&VAR_4->qp_wait_list);
  VAR_4->ppd = VAR_1;
  VAR_4->dd = VAR_3;
  VAR_4->cnt = 1;
  VAR_4->ctxt = VAR_2;
  VAR_3->rcd[VAR_2] = VAR_4;

  VAR_3->f_init_ctxt(VAR_4);
  VAR_4->rcvegrbuf_size = 0x8000;
  VAR_4->rcvegrbufs_perchunk =
   VAR_4->rcvegrbuf_size / VAR_3->rcvegrbufsize;
  VAR_4->rcvegrbuf_chunks = (VAR_4->rcvegrcnt +
   VAR_4->rcvegrbufs_perchunk - 1) /
   VAR_4->rcvegrbufs_perchunk;
  FUNC_0(!FUNC_3(VAR_4->rcvegrbufs_perchunk));
  VAR_4->rcvegrbufs_perchunk_shift =
   FUNC_2(VAR_4->rcvegrbufs_perchunk);
 }
 return VAR_4;
}

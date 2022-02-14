
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int uio_t ;
typedef int uio_buf ;
struct fd_vn_data {int fv_eofflag; size_t fv_bufallocsiz; size_t fv_bufsiz; int * fv_buf; scalar_t__ fv_bufdone; int fv_eoff; int fv_soff; scalar_t__ fv_offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int *,int ,size_t,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,size_t) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (int,int ,int ,int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int*,int*,int ) ;

__attribute__((used)) static int
FUNC_11(vfs_context_t VAR_8, vnode_t VAR_9, struct fd_vn_data *VAR_10,
    int *VAR_11)
{
 uio_t VAR_12;
 char VAR_13[FUNC_3(1)];
 size_t VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;




 if (VAR_10->fv_eofflag) {
  *VAR_11 = 1;
  if (VAR_10->fv_buf) {
   FUNC_1(VAR_10->fv_buf, VAR_2);
   VAR_10->fv_buf = ((void*)0);
  }
  return 0;
 }

 VAR_18 = 0;
 if (VAR_10->fv_offset && VAR_10->fv_bufallocsiz) {
  VAR_14 = VAR_10->fv_bufallocsiz;
 } else {
  VAR_14 = VAR_1;
 }

 *VAR_11 = 0;

 VAR_12 = FUNC_6(1, 0, VAR_5, VAR_4,
     &VAR_13[0], sizeof(VAR_13));

retry_alloc:




 if (!VAR_10->fv_buf) {
  FUNC_2(VAR_10->fv_buf, VAR_7, VAR_14, VAR_2, VAR_3);
  VAR_10->fv_bufdone = 0;
 }

 FUNC_8(VAR_12, VAR_10->fv_eoff, VAR_5, VAR_4);
 FUNC_5(VAR_12, FUNC_0(VAR_10->fv_buf), VAR_14);




 VAR_16 = 0;
 VAR_17 = 0;
 VAR_18 = FUNC_10(VAR_9, VAR_12, VAR_6,
     &VAR_16, &VAR_17, VAR_8);

 VAR_15 = VAR_14 - (size_t)FUNC_9(VAR_12);

 if (!VAR_18 && (VAR_15 > 0) && (VAR_15 <= VAR_14)) {

  VAR_10->fv_soff = VAR_10->fv_eoff;
  VAR_10->fv_eoff = FUNC_7(VAR_12);

  VAR_10->fv_eofflag = VAR_16;
  VAR_16 = 0;

  VAR_10->fv_bufsiz = VAR_15;
  VAR_10->fv_bufdone = 0;
  FUNC_4(VAR_10->fv_buf + VAR_15, VAR_14 - VAR_15);

  VAR_10->fv_bufallocsiz = VAR_14;
 } else if (!VAR_16 && (VAR_14 < VAR_0)) {
  FUNC_1(VAR_10->fv_buf, VAR_2);
  VAR_10->fv_buf = ((void*)0);
  VAR_14 = 2 * VAR_14;
  VAR_10->fv_bufallocsiz = 0;
  goto retry_alloc;
 } else if (!VAR_18) {





  VAR_10->fv_eofflag = VAR_16 = 1;
 }





 if (VAR_18 && VAR_10->fv_eofflag) {
  VAR_16 = 1;
  VAR_18 = 0;
 }





 if ((VAR_18 || VAR_16) && VAR_10->fv_buf) {
  FUNC_1(VAR_10->fv_buf, VAR_2);
  VAR_10->fv_buf = ((void*)0);
 }

 *VAR_11 = VAR_16;

 return (VAR_18);
}

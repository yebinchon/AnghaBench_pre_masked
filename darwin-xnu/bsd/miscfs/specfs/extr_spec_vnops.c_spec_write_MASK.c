
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
struct vnop_write_args {int a_ioflag; struct uio* a_uio; struct vnode* a_vp; } ;
struct TYPE_5__ {TYPE_1__* vu_specinfo; } ;
struct vnode {int v_type; int v_specsize; int v_specdevsize; int v_rdev; TYPE_2__ v_un; } ;
struct uio {scalar_t__ uio_rw; int uio_offset; int uio_segflg; } ;
struct buf {int dummy; } ;
struct _throttle_io_info_t {int throttle_last_write_timestamp; } ;
typedef int dev_t ;
typedef int daddr64_t ;
struct TYPE_6__ {int (* d_write ) (int ,struct uio*,int) ;int d_type; } ;
struct TYPE_4__ {size_t si_devbsdunit; int si_isssd; int si_throttleable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;


 struct _throttle_io_info_t* VAR_8 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct buf*) ;
 scalar_t__ FUNC_3 (struct vnode*,int ,int,int ,struct buf**) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 scalar_t__ FUNC_6 (struct buf*) ;
 scalar_t__ FUNC_7 (struct buf*) ;
 struct buf* FUNC_8 (struct vnode*,int ,int,int ,int ,int ) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (struct buf*) ;
 TYPE_3__* VAR_9 ;
 size_t FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,struct uio*,int) ;
 int FUNC_16 (struct _throttle_io_info_t*,int) ;
 int FUNC_17 (struct _throttle_io_info_t*,int *,int ,int ,int ,int *) ;
 int FUNC_18 (struct uio*) ;
 int FUNC_19 (char*,int,struct uio*) ;

int
FUNC_20(struct vnop_write_args *VAR_10)
{
 struct vnode *VAR_11 = VAR_10->a_vp;
 struct uio *VAR_12 = VAR_10->a_uio;
 struct buf *VAR_13;
 daddr64_t VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19=0;
 int VAR_20, VAR_21;
 int VAR_22 = 0;
 dev_t VAR_23;
 switch (VAR_11->v_type) {

 case 128:
  {
   struct _throttle_io_info_t *VAR_24 = ((void*)0);
   int VAR_25;
                if (VAR_9[FUNC_11(VAR_11->v_rdev)].d_type == VAR_1 && VAR_11->v_un.vu_specinfo->si_throttleable) {
   VAR_24 = &VAR_8[VAR_11->v_un.vu_specinfo->si_devbsdunit];

    VAR_25 = FUNC_17(VAR_24, ((void*)0), 0, VAR_11->v_un.vu_specinfo->si_isssd, VAR_6, ((void*)0));

   FUNC_12(&VAR_24->throttle_last_write_timestamp);
                }
  VAR_22 = (*VAR_9[FUNC_11(VAR_11->v_rdev)].d_write)
   (VAR_11->v_rdev, VAR_12, VAR_10->a_ioflag);

   if (VAR_24) {
    FUNC_16(VAR_24, VAR_25);
   }

  return (VAR_22);
  }

 case 129:
  if (FUNC_18(VAR_12) == 0)
   return (0);
  if (VAR_12->uio_offset < 0)
   return (VAR_2);

  VAR_18 = (VAR_10->a_ioflag & VAR_3);

  VAR_23 = (VAR_11->v_rdev);

  VAR_19 = VAR_11->v_specsize;
  if (VAR_19 > VAR_5)
   return(VAR_2);

         VAR_17 = VAR_5 / VAR_19;
  VAR_16 = VAR_17 - 1;
  VAR_15 = VAR_17 * VAR_19;


  do {
   VAR_14 = (daddr64_t)((VAR_12->uio_offset / VAR_19) &~ VAR_16);
   VAR_21 = VAR_12->uio_offset % VAR_15;

   VAR_20 = FUNC_13((unsigned)(VAR_15 - VAR_21), FUNC_18(VAR_12));
   if (VAR_20 == VAR_15 &&
       VAR_11->v_specdevsize != (u_int64_t)0 &&
       (VAR_12->uio_offset + (u_int64_t)VAR_20) > VAR_11->v_specdevsize) {

       VAR_20 = (VAR_12->uio_offset + (u_int64_t)VAR_20) - VAR_11->v_specdevsize;
   }

   if (VAR_20 == VAR_15)
           VAR_13 = FUNC_8(VAR_11, VAR_14, VAR_15, 0, 0, VAR_0);
   else
           VAR_22 = (int)FUNC_3(VAR_11, VAR_14, VAR_15, VAR_4, &VAR_13);


   if (!VAR_22)
    VAR_22 = (int)FUNC_7(VAR_13);
   if (VAR_22) {
    FUNC_4(VAR_13);
    return (VAR_22);
   }
   VAR_20 = FUNC_13(VAR_20, VAR_15 - FUNC_10(VAR_13));

   VAR_22 = FUNC_19((char *)FUNC_6(VAR_13) + VAR_21, VAR_20, VAR_12);
   if (VAR_22) {
    FUNC_4(VAR_13);
    return (VAR_22);
   }
   FUNC_9(VAR_13);

   if (VAR_18)
           VAR_22 = FUNC_5(VAR_13);
   else {
           if ((VAR_20 + VAR_21) == VAR_15)
            VAR_22 = FUNC_1(VAR_13);
    else
            VAR_22 = FUNC_2(VAR_13);
   }
  } while (VAR_22 == 0 && FUNC_18(VAR_12) > 0 && VAR_20 != 0);
  return (VAR_22);

 default:
  FUNC_14("spec_write type");
 }


 return (0);
}

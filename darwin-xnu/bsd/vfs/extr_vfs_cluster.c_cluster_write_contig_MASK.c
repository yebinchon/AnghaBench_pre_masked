
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int user_size_t ;
typedef int user_addr_t ;
typedef int upl_t ;
typedef scalar_t__ upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_control_flags_t ;
typedef int u_int32_t ;
struct uio {int uio_offset; int uio_segflg; } ;
struct clios {int io_error; int io_mtxp; scalar_t__ io_wanted; scalar_t__ io_issued; scalar_t__ io_completed; } ;
typedef int off_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
typedef int addr64_t ;
struct TYPE_9__ {TYPE_1__* v_mount; } ;
struct TYPE_8__ {scalar_t__ mnt_alignmentmask; scalar_t__ mnt_devblocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (TYPE_2__*,struct uio*,int,int,int ,int (*) (buf_t,void*),void*) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int,int,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_4 (struct uio*,int*,int*,int ) ;
 int FUNC_5 (struct clios*,int,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int (*) (buf_t,void*),void*,int ) ;
 int FUNC_7 () ;
 int VAR_21 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (struct uio*) ;
 int FUNC_13 (struct uio*,int ) ;
 scalar_t__ FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int ,int ,scalar_t__*,int *,int *,scalar_t__*,int*,int ,int ) ;

__attribute__((used)) static int
FUNC_16(vnode_t VAR_22, struct uio *VAR_23, off_t VAR_24, int *VAR_25, u_int32_t *VAR_26,
       int (*VAR_27)(buf_t, void *), void *VAR_28, int VAR_29)
{
 upl_page_info_t *VAR_30;
 addr64_t VAR_31 = 0;
  upl_t VAR_32[VAR_7];
 vm_offset_t VAR_33;
 u_int32_t VAR_34 = 0;
 u_int32_t VAR_35;
 u_int32_t VAR_36;
 upl_size_t VAR_37;
 vm_size_t VAR_38;
 mach_msg_type_number_t VAR_39;
 upl_control_flags_t VAR_40;
 kern_return_t VAR_41;
        struct clios VAR_42;
 int VAR_43 = 0;
 int VAR_44 = 0;
 int VAR_45 = 0;
 int VAR_46;
 user_addr_t VAR_47;
 u_int32_t VAR_48;
 u_int32_t VAR_49;






 FUNC_6(VAR_22, VAR_24, VAR_27, VAR_28, VAR_27 ? VAR_10 : 0);

 VAR_48 = (u_int32_t)VAR_22->v_mount->mnt_devblocksize;
 VAR_49 = (u_int32_t)VAR_22->v_mount->mnt_alignmentmask;

        VAR_42.io_completed = 0;
        VAR_42.io_issued = 0;
        VAR_42.io_error = 0;
        VAR_42.io_wanted = 0;

 FUNC_9(&VAR_42.io_mtxp, VAR_20, VAR_19);

next_cwrite:
 VAR_35 = *VAR_26;

 VAR_47 = FUNC_12(VAR_23);

 VAR_33 = (vm_offset_t)((u_int32_t)VAR_47 & VAR_8);
 VAR_38 = VAR_33 + VAR_35;

 VAR_39 = 0;
 VAR_37 = VAR_38;
 VAR_40 = VAR_13 | VAR_12 | VAR_14 |
             VAR_11 | VAR_15 | VAR_17 | VAR_16;

 vm_map_t VAR_50 = FUNC_1(VAR_23->uio_segflg) ? FUNC_7() : VAR_21;
 VAR_41 = FUNC_15(VAR_50,
         (vm_map_offset_t)(VAR_47 & ~((user_addr_t)VAR_8)),
         &VAR_37, &VAR_32[VAR_44], ((void*)0), &VAR_39, &VAR_40, VAR_18, 0);

 if (VAR_41 != VAR_5) {



         VAR_43 = VAR_2;
  goto wait_for_cwrites;
 }
 VAR_45++;




 if (VAR_37 < VAR_38) {



  VAR_43 = VAR_2;
  goto wait_for_cwrites;
 }
 VAR_30 = FUNC_11(VAR_32[VAR_44]);

 VAR_31 = ((addr64_t)FUNC_14(VAR_30, 0) << VAR_9) + (addr64_t)VAR_33;

 while (((VAR_23->uio_offset & (VAR_48 - 1)) || VAR_35 < VAR_48) && VAR_35) {
         u_int32_t VAR_51;

  VAR_51 = VAR_48 - (u_int32_t)(VAR_23->uio_offset & (VAR_48 - 1));

  if (VAR_51 > VAR_35)
          VAR_51 = VAR_35;

  VAR_43 = FUNC_2(VAR_22, VAR_23, VAR_31, VAR_51, 0, VAR_27, VAR_28);

  if (VAR_43)
          goto wait_for_cwrites;

  VAR_33 += VAR_51;
  VAR_31 += VAR_51;
  VAR_35 -= VAR_51;

  VAR_47 += VAR_51;
 }
 if ((u_int32_t)VAR_47 & VAR_49) {







         VAR_43 = VAR_2;
  goto wait_for_cwrites;
 }

 VAR_34 = VAR_35 & (VAR_48 - 1);
 VAR_35 -= VAR_34;

 while (VAR_35 && VAR_43 == 0) {

         if (VAR_35 > VAR_6)
          VAR_36 = VAR_6;
  else
          VAR_36 = VAR_35;
  FUNC_5(&VAR_42, VAR_6 * FUNC_0(VAR_22, 2), "cluster_write_contig");

                if (VAR_42.io_error) {






          goto wait_for_cwrites;
  }



         VAR_43 = FUNC_3(VAR_22, VAR_32[VAR_44], VAR_33, VAR_23->uio_offset,
       VAR_36, VAR_1 | VAR_0 | VAR_29, (buf_t)((void*)0), (struct clios *)&VAR_42, VAR_27, VAR_28);

  if (VAR_43 == 0) {




          FUNC_13(VAR_23, (user_size_t)VAR_36);

   VAR_33 += VAR_36;
   VAR_31 += VAR_36;
   VAR_35 -= VAR_36;
  }
 }
        if (VAR_43 == 0 && VAR_42.io_error == 0 && VAR_34 == 0 && VAR_45 < VAR_7) {

         VAR_43 = FUNC_4(VAR_23, VAR_25, VAR_26, 0);

  if (VAR_43 == 0 && *VAR_25 == VAR_3) {
          VAR_44++;
                        goto next_cwrite;
  }
 } else
         *VAR_25 = VAR_4;

wait_for_cwrites:




 FUNC_5(&VAR_42, 0, "cluster_write_contig");

        if (VAR_42.io_error)
         VAR_43 = VAR_42.io_error;

 FUNC_8(&VAR_42.io_mtxp, VAR_20);

 if (VAR_43 == 0 && VAR_34)
         VAR_43 = FUNC_2(VAR_22, VAR_23, VAR_31, VAR_34, 0, VAR_27, VAR_28);

        for (VAR_46 = 0; VAR_46 < VAR_45; VAR_46++)




         FUNC_10(VAR_32[VAR_46], 0);

 return (VAR_43);
}

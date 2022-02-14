
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int user_size_t ;
typedef int upl_t ;
typedef int upl_page_info_t ;
typedef scalar_t__ u_int32_t ;
struct uio {int uio_offset; } ;
struct clios {int dummy; } ;
typedef scalar_t__ kern_return_t ;
typedef int buf_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int ,int,int ,int,int ,struct clios*,int (*) (buf_t,void*),void*) ;
 int FUNC_1 (int,int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int *,int **,int,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct uio*,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(vnode_t VAR_16, struct uio *VAR_17, addr64_t VAR_18, u_int32_t VAR_19, int VAR_20, int (*VAR_21)(buf_t, void *), void *VAR_22)
{
        upl_page_info_t *VAR_23;
        upl_t VAR_24;
        addr64_t VAR_25;
        kern_return_t VAR_26;
        int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 if (VAR_20 & VAR_5)
  VAR_31 = VAR_1;
 else
  VAR_31 = 0;

 if (VAR_20 & VAR_4)
  VAR_31 |= VAR_0;

 VAR_30 = VAR_13;

 if ( !(VAR_20 & VAR_2) ) {





  VAR_30 |= VAR_14;
 } else {





  VAR_30 |= VAR_12;
 }
        VAR_26 = FUNC_2(VAR_16,
                              VAR_17->uio_offset & ~VAR_7,
                              VAR_9,
                              &VAR_24,
                              &VAR_23,
                              VAR_30,
                              VAR_15);

        if (VAR_26 != VAR_6)
                return(VAR_3);

        if (!FUNC_7(VAR_23, 0)) {



                VAR_27 = FUNC_0(VAR_16, VAR_24, 0, VAR_17->uio_offset & ~VAR_7, VAR_9,
       VAR_2 | VAR_31, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_21, VAR_22);
                if (VAR_27) {
                          FUNC_3(VAR_24, 0, VAR_9, VAR_10 | VAR_11);

                          return(VAR_27);
                }
  VAR_28 = 1;
        }
        VAR_25 = ((addr64_t)FUNC_6(VAR_23, 0) << VAR_8) + (addr64_t)(VAR_17->uio_offset & VAR_7);







 if (VAR_20 & VAR_2)

  FUNC_1(VAR_25, VAR_18, VAR_19, 2 | 1 | 4);
 else

  FUNC_1(VAR_18, VAR_25, VAR_19, 2 | 1 | 8);

 if ( !(VAR_20 & VAR_2) || (FUNC_7(VAR_23, 0) && FUNC_5(VAR_23, 0))) {



  VAR_27 = FUNC_0(VAR_16, VAR_24, 0, VAR_17->uio_offset & ~VAR_7, VAR_9,
       VAR_31, (buf_t)((void*)0), (struct clios *)((void*)0), VAR_21, VAR_22);
 }
 if (VAR_27 == 0)
         FUNC_4(VAR_17, (user_size_t)VAR_19);

 if (VAR_28)
         VAR_29 = VAR_11;
 else
         VAR_29 = VAR_11 | VAR_10;

 FUNC_3(VAR_24, 0, VAR_9, VAR_29);

 return (VAR_27);
}

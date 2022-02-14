
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
typedef int uio_t ;
typedef int uio_buf ;
struct nameidata {TYPE_1__* ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_6__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct nameidata*,int) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (int ,int ,size_t) ;
 int FUNC_7 (int,int ,int,int ,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(vfs_context_t VAR_8, int VAR_9, user_addr_t VAR_10,
    enum uio_seg VAR_11, user_addr_t VAR_12, size_t VAR_13, enum uio_seg VAR_14,
    int *VAR_15)
{
 vnode_t VAR_16;
 uio_t VAR_17;
 int VAR_18;
 struct nameidata VAR_19;
 char VAR_20[ FUNC_1(1) ];

 FUNC_0(&VAR_19, VAR_3, VAR_5, VAR_4 | VAR_0,
     VAR_11, VAR_10, VAR_8);

 VAR_18 = FUNC_4(&VAR_19, VAR_9);
 if (VAR_18)
  return (VAR_18);
 VAR_16 = VAR_19.ni_vp;

 FUNC_5(&VAR_19);

 VAR_17 = FUNC_7(1, 0, VAR_14, VAR_6,
                                    &VAR_20[0], sizeof(VAR_20));
 FUNC_6(VAR_17, VAR_12, VAR_13);
 if (VAR_16->v_type != VAR_7) {
  VAR_18 = VAR_1;
 } else {



  if (VAR_18 == 0)
   VAR_18 = FUNC_9(VAR_16, ((void*)0), VAR_2,
                           VAR_8);
  if (VAR_18 == 0)
   VAR_18 = FUNC_2(VAR_16, VAR_17, VAR_8);
 }
 FUNC_10(VAR_16);

 *VAR_15 = VAR_13 - (int)FUNC_8(VAR_17);
 return (VAR_18);
}

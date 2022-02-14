
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct bufhashhdr {int dummy; } ;
struct buf {int b_lflags; int b_flags; int b_tag; int b_owner; } ;
typedef scalar_t__ errno_t ;
typedef int daddr64_t ;
typedef int caddr_t ;
typedef struct buf* buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bufhashhdr* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 struct buf* FUNC_6 (int ,int ,struct bufhashhdr*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int,char*,int *) ;

errno_t
FUNC_10(vnode_t VAR_9, daddr64_t VAR_10, int VAR_11)
{
        buf_t VAR_12;
 errno_t VAR_13;
 struct bufhashhdr *VAR_14;

 VAR_14 = FUNC_0(VAR_9, VAR_10);

relook:
 FUNC_7(VAR_8);

 if ((VAR_12 = FUNC_6(VAR_9, VAR_10, VAR_14)) == (struct buf *)0) {
         FUNC_8(VAR_8);
  return (0);
 }
 if (FUNC_1(VAR_12->b_lflags, VAR_0)) {
         if ( !FUNC_1(VAR_11, VAR_2)) {
          FUNC_8(VAR_8);
   return (VAR_4);
  }
         FUNC_2(VAR_12->b_lflags, VAR_1);

  VAR_13 = FUNC_9((caddr_t)VAR_12, VAR_8, VAR_5 | (VAR_6 + 1), "buf_invalblkno", ((void*)0));

  if (VAR_13) {
   return (VAR_13);
  }
  goto relook;
 }
 FUNC_3(VAR_12);
 FUNC_2(VAR_12->b_lflags, VAR_0);
 FUNC_2(VAR_12->b_flags, VAR_3);
 VAR_7++;




 FUNC_8(VAR_8);
 FUNC_4(VAR_12);

 return (0);
}

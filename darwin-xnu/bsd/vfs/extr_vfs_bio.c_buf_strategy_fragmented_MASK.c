
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef size_t off_t ;
typedef int daddr64_t ;
typedef int caddr_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_17__ {int b_blkno; int b_lblkno; int b_bcount; int b_flags; size_t b_bufsize; size_t b_resid; scalar_t__ b_datap; } ;
struct TYPE_16__ {int v_numoutput; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,size_t,int,int*,size_t*,int *,int,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int
FUNC_12(vnode_t VAR_3, buf_t VAR_4, off_t VAR_5, size_t VAR_6)
{
 vnode_t VAR_7 = FUNC_10(VAR_4);
 buf_t VAR_8;
 int VAR_9;
 int VAR_10;
 size_t VAR_11;
        daddr64_t VAR_12;
 int VAR_13 = 0;
 int VAR_14;






 VAR_12 = VAR_4->b_blkno;




 VAR_4->b_blkno = VAR_4->b_lblkno;




 VAR_8 = FUNC_4(VAR_3, 0);

 VAR_8->b_lblkno = VAR_4->b_lblkno;
 VAR_8->b_datap = VAR_4->b_datap;
 VAR_10 = VAR_4->b_bcount;
        VAR_9 = VAR_4->b_flags & VAR_0;
 VAR_11 = VAR_6;

 if (VAR_4->b_flags & VAR_0)
         VAR_14 = VAR_1;
 else
         VAR_14 = VAR_2;

 for (;;) {
  if (VAR_12 == -1)



          FUNC_11((caddr_t)VAR_8->b_datap, (int)VAR_11);
  else {
          VAR_8->b_bcount = VAR_11;
   VAR_8->b_bufsize = VAR_11;
   VAR_8->b_resid = VAR_11;
   VAR_8->b_blkno = VAR_12;

   FUNC_8(VAR_8, VAR_9);





   if (!FUNC_0(VAR_4->b_flags, VAR_0))
           FUNC_1(1, &VAR_3->v_numoutput);

   if ((VAR_13 = FUNC_3(VAR_8)))
           break;
   if ((VAR_13 = (int)FUNC_6(VAR_8)))
           break;
   if (VAR_8->b_resid) {
           VAR_10 -= (VAR_11 - VAR_8->b_resid);
    break;
   }
  }
  if ((VAR_10 -= VAR_11) == 0)
          break;
  VAR_5 += VAR_11;
  VAR_8->b_datap += VAR_11;




  if ((VAR_13 = FUNC_2(VAR_7, VAR_5, VAR_10, &VAR_12, &VAR_11, ((void*)0), VAR_14, ((void*)0))))
          break;
 }
 FUNC_7(VAR_8);

 if (VAR_13)
         FUNC_9(VAR_4, VAR_13);
 VAR_4->b_resid = VAR_10;



 FUNC_5(VAR_4);

 return VAR_13;
}

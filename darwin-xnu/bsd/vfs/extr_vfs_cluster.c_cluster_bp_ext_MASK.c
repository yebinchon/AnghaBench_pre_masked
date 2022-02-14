
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct clios {int dummy; } ;
typedef int off_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_8__ {int b_flags; int b_bcount; int b_upl; int b_vp; scalar_t__ b_lblkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,TYPE_1__*,int,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,TYPE_1__*,struct clios*,int (*) (TYPE_1__*,void*),void*) ;
 int FUNC_3 (int ,scalar_t__) ;

int
FUNC_4(buf_t VAR_7, int (*VAR_8)(buf_t, void *), void *VAR_9)
{
        off_t VAR_10;
 int VAR_11;

 FUNC_1((FUNC_0(VAR_5, 19)) | VAR_6,
       VAR_7, (int)VAR_7->b_lblkno, VAR_7->b_bcount, VAR_7->b_flags, 0);

 if (VAR_7->b_flags & VAR_1)
         VAR_11 = VAR_2 | VAR_4;
 else
         VAR_11 = VAR_2;
 if (VAR_7->b_flags & VAR_0)
  VAR_11 |= VAR_3;

 VAR_10 = FUNC_3(VAR_7->b_vp, VAR_7->b_lblkno);

        return (FUNC_2(VAR_7->b_vp, VAR_7->b_upl, 0, VAR_10, VAR_7->b_bcount, VAR_11, VAR_7, (struct clios *)((void*)0), VAR_8, VAR_9));
}

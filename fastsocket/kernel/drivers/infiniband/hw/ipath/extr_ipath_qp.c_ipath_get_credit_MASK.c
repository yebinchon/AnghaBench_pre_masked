
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ipath_qp {size_t s_lsn; int s_flags; scalar_t__ s_cur; scalar_t__ s_head; } ;
struct TYPE_2__ {size_t ssn; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t* VAR_5 ;
 TYPE_1__* FUNC_0 (struct ipath_qp*,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct ipath_qp*) ;

void FUNC_3(struct ipath_qp *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = (VAR_7 >> VAR_2) & VAR_1;






 if (VAR_8 == VAR_0)
  VAR_6->s_lsn = (u32) -1;
 else if (VAR_6->s_lsn != (u32) -1) {

  VAR_8 = (VAR_7 + VAR_5[VAR_8]) & VAR_3;
  if (FUNC_1(VAR_8, VAR_6->s_lsn) > 0)
   VAR_6->s_lsn = VAR_8;
 }


 if ((VAR_6->s_flags & VAR_4) &&
     VAR_6->s_cur != VAR_6->s_head &&
     (VAR_6->s_lsn == (u32) -1 ||
      FUNC_1(FUNC_0(VAR_6, VAR_6->s_cur)->ssn,
    VAR_6->s_lsn + 1) <= 0))
  FUNC_2(VAR_6);
}

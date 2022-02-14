
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int qf_qflags; scalar_t__ qf_vp; int qf_refcnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct quotafile *VAR_4)
{
        int VAR_5 = 0;

 if ( (VAR_4->qf_qflags & (VAR_3 | VAR_2)) || (VAR_4->qf_vp == VAR_1) )
         VAR_5 = VAR_0;
 else
         VAR_4->qf_refcnt++;

 return (VAR_5);
}

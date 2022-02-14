
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qib_pportdata {int ibmaxlen; int ibmtu; int init_ibmaxlen; TYPE_1__* dd; } ;
struct TYPE_2__ {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct qib_pportdata*,int ,int ) ;

int FUNC_2(struct qib_pportdata *VAR_4, u16 VAR_5)
{
 u32 VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5 != 256 && VAR_5 != 512 && VAR_5 != 1024 && VAR_5 != 2048 &&
     VAR_5 != 4096) {
  VAR_7 = -VAR_0;
  goto bail;
 }
 VAR_8 = FUNC_0(VAR_3);
 if (VAR_8 > 0 && VAR_5 > VAR_8) {
  VAR_7 = -VAR_0;
  goto bail;
 }

 VAR_6 = VAR_4->ibmaxlen;
 VAR_4->ibmtu = VAR_5;

 if (VAR_5 >= (VAR_6 - VAR_2)) {

  if (VAR_6 != VAR_4->init_ibmaxlen) {
   if (VAR_5 > VAR_6 && VAR_5 <= VAR_4->init_ibmaxlen)
    VAR_6 = VAR_4->init_ibmaxlen - 2 * sizeof(u32);
   VAR_4->ibmaxlen = VAR_6;
  }
 } else if ((VAR_5 + VAR_2) != VAR_4->ibmaxlen) {
  VAR_6 = VAR_5 + VAR_2 - 2 * sizeof(u32);
  VAR_4->ibmaxlen = VAR_6;
 }

 VAR_4->dd->f_set_ib_cfg(VAR_4, VAR_1, 0);

 VAR_7 = 0;

bail:
 return VAR_7;
}

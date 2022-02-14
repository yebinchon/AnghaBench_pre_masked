
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_tidtemplate; int ipath_ibmaxlen; long long ipath_tidinvalid; } ;


 long long VAR_0 ;
 long long VAR_1 ;
 long long VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ipath_devdata *VAR_3)
{
 VAR_3->ipath_tidtemplate = VAR_3->ipath_ibmaxlen >> 2;
 VAR_3->ipath_tidtemplate <<= VAR_1;
 VAR_3->ipath_tidtemplate |= VAR_2;





 VAR_3->ipath_tidinvalid = (-1LL & VAR_0) <<
  VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {TYPE_1__* dd; } ;
struct qib_ibport {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* f_portcntr ) (struct qib_pportdata*,int ) ;} ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 int FUNC_2 (struct qib_pportdata*,int ) ;
 int FUNC_3 (struct qib_pportdata*,int ) ;
 int FUNC_4 (struct qib_pportdata*,int ) ;

__attribute__((used)) static u64 FUNC_5(struct qib_ibport *VAR_5, struct qib_pportdata *VAR_6,
         __be16 VAR_7)
{
 u64 VAR_8;

 switch (VAR_7) {
 case 130:
  VAR_8 = VAR_6->dd->f_portcntr(VAR_6, VAR_2);
  break;
 case 132:
  VAR_8 = VAR_6->dd->f_portcntr(VAR_6, VAR_0);
  break;
 case 129:
  VAR_8 = VAR_6->dd->f_portcntr(VAR_6, VAR_3);
  break;
 case 131:
  VAR_8 = VAR_6->dd->f_portcntr(VAR_6, VAR_1);
  break;
 case 128:
  VAR_8 = VAR_6->dd->f_portcntr(VAR_6, VAR_4);
  break;
 default:
  VAR_8 = 0;
 }

 return VAR_8;
}

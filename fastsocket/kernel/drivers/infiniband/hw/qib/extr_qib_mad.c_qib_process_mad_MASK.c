
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qib_pportdata {int congestion_entries_shadow; } ;
struct qib_ibport {int dummy; } ;
struct ib_wc {int dummy; } ;
struct TYPE_2__ {int mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;




 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;
 int FUNC_1 (struct ib_device*,int,int ,struct ib_mad*,struct ib_mad*) ;
 int FUNC_2 (struct ib_device*,int ,struct ib_mad*,struct ib_mad*) ;
 int FUNC_3 (struct ib_device*,int,int ,struct ib_mad*,struct ib_mad*) ;
 int VAR_1 ;
 struct qib_ibport* FUNC_4 (struct ib_device*,int ) ;

int FUNC_5(struct ib_device *VAR_2, int VAR_3, u8 VAR_4,
      struct ib_wc *VAR_5, struct ib_grh *VAR_6,
      struct ib_mad *VAR_7, struct ib_mad *VAR_8)
{
 int VAR_9;
 struct qib_ibport *VAR_10 = FUNC_4(VAR_2, VAR_4);
 struct qib_pportdata *VAR_11 = FUNC_0(VAR_10);

 switch (VAR_7->mad_hdr.mgmt_class) {
 case 129:
 case 128:
  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8);
  goto bail;

 case 130:
  VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_7, VAR_8);
  goto bail;

 case 131:
  if (!VAR_11->congestion_entries_shadow ||
    !VAR_1) {
   VAR_9 = VAR_0;
   goto bail;
  }
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_8);
  goto bail;

 default:
  VAR_9 = VAR_0;
 }

bail:
 return VAR_9;
}

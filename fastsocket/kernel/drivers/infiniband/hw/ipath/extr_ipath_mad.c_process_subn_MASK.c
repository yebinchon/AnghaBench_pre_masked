
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_ibdev {int mkeyprot; scalar_t__ mkey; int mkey_violations; int mkey_lease_period; int port_cap_flags; scalar_t__ mkey_lease_timeout; } ;
struct ib_smp {int class_version; scalar_t__ mkey; int method; int status; int attr_id; } ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ib_smp*,struct ib_device*) ;
 int FUNC_1 (struct ib_smp*,struct ib_device*) ;
 int FUNC_2 (struct ib_smp*,struct ib_device*,int ) ;
 int FUNC_3 (struct ib_smp*,struct ib_device*) ;
 int FUNC_4 (struct ib_smp*,struct ib_device*,int ) ;
 int FUNC_5 (struct ib_smp*,struct ib_device*) ;
 int FUNC_6 (struct ib_smp*,struct ib_device*) ;
 int FUNC_7 (struct ib_smp*,struct ib_device*,int ) ;
 int FUNC_8 (struct ib_smp*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 struct ipath_ibdev* FUNC_10 (struct ib_device*) ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_10, int VAR_11,
   u8 VAR_12, struct ib_mad *VAR_13,
   struct ib_mad *VAR_14)
{
 struct ib_smp *VAR_15 = (struct ib_smp *)VAR_14;
 struct ipath_ibdev *VAR_16 = FUNC_10(VAR_10);
 int VAR_17;

 *VAR_14 = *VAR_13;
 if (VAR_15->class_version != 1) {
  VAR_15->status |= VAR_8;
  VAR_17 = FUNC_8(VAR_15);
  goto bail;
 }


 if (VAR_16->mkey_lease_timeout &&
     FUNC_9(VAR_9, VAR_16->mkey_lease_timeout)) {

  VAR_16->mkey_lease_timeout = 0;
  VAR_16->mkeyprot = 0;
 }





 if ((VAR_11 & VAR_1) == 0 && VAR_16->mkey != 0 &&
     VAR_16->mkey != VAR_15->mkey &&
     (VAR_15->method == 136 ||
      (VAR_15->method == 140 &&
       VAR_16->mkeyprot >= 2))) {
  if (VAR_16->mkey_violations != 0xFFFF)
   ++VAR_16->mkey_violations;
  if (VAR_16->mkey_lease_timeout ||
      VAR_16->mkey_lease_period == 0) {
   VAR_17 = VAR_3 |
    VAR_2;
   goto bail;
  }
  VAR_16->mkey_lease_timeout = VAR_9 +
   VAR_16->mkey_lease_period * VAR_0;

  VAR_17 = VAR_3 | VAR_2;
  goto bail;
 } else if (VAR_16->mkey_lease_timeout)
  VAR_16->mkey_lease_timeout = 0;

 switch (VAR_15->method) {
 case 140:
  switch (VAR_15->attr_id) {
  case 132:
   VAR_17 = FUNC_1(VAR_15, VAR_10);
   goto bail;
  case 131:
   VAR_17 = FUNC_2(VAR_15, VAR_10, VAR_12);
   goto bail;
  case 133:
   VAR_17 = FUNC_0(VAR_15, VAR_10);
   goto bail;
  case 129:
   VAR_17 = FUNC_4(VAR_15, VAR_10, VAR_12);
   goto bail;
  case 130:
   VAR_17 = FUNC_3(VAR_15, VAR_10);
   goto bail;
  case 128:
   if (VAR_16->port_cap_flags & VAR_5) {
    VAR_17 = VAR_3 |
     VAR_2;
    goto bail;
   }
   if (VAR_16->port_cap_flags & VAR_4) {
    VAR_17 = VAR_3;
    goto bail;
   }

  default:
   VAR_15->status |= VAR_7;
   VAR_17 = FUNC_8(VAR_15);
   goto bail;
  }

 case 136:
  switch (VAR_15->attr_id) {
  case 133:
   VAR_17 = FUNC_5(VAR_15, VAR_10);
   goto bail;
  case 129:
   VAR_17 = FUNC_7(VAR_15, VAR_10, VAR_12);
   goto bail;
  case 130:
   VAR_17 = FUNC_6(VAR_15, VAR_10);
   goto bail;
  case 128:
   if (VAR_16->port_cap_flags & VAR_5) {
    VAR_17 = VAR_3 |
     VAR_2;
    goto bail;
   }
   if (VAR_16->port_cap_flags & VAR_4) {
    VAR_17 = VAR_3;
    goto bail;
   }

  default:
   VAR_15->status |= VAR_7;
   VAR_17 = FUNC_8(VAR_15);
   goto bail;
  }

 case 135:
 case 138:
 case 137:
 case 134:
 case 139:





  VAR_17 = VAR_3;
  goto bail;
 default:
  VAR_15->status |= VAR_6;
  VAR_17 = FUNC_8(VAR_15);
 }

bail:
 return VAR_17;
}

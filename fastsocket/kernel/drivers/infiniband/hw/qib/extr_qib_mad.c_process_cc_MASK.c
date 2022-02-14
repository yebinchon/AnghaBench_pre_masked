
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_mad {int class_version; int method; int status; int attr_id; } ;






 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_cc_mad*,struct ib_device*) ;
 int FUNC_1 (struct ib_cc_mad*,struct ib_device*,int ) ;
 int FUNC_2 (struct ib_cc_mad*,struct ib_device*,int ) ;
 int FUNC_3 (struct ib_cc_mad*,struct ib_device*,int ) ;
 int FUNC_4 (struct ib_cc_mad*,struct ib_device*,int ) ;
 int FUNC_5 (struct ib_cc_mad*,struct ib_device*,int ) ;
 int FUNC_6 (struct qib_ibport*,struct ib_cc_mad*,int) ;
 int FUNC_7 (struct ib_smp*) ;
 struct qib_ibport* FUNC_8 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_4, int VAR_5,
   u8 VAR_6, struct ib_mad *VAR_7,
   struct ib_mad *VAR_8)
{
 struct ib_cc_mad *VAR_9 = (struct ib_cc_mad *)VAR_8;
 struct qib_ibport *VAR_10 = FUNC_8(VAR_4, VAR_6);
 int VAR_11;

 *VAR_8 = *VAR_7;

 if (VAR_9->class_version != 2) {
  VAR_9->status |= VAR_3;
  VAR_11 = FUNC_7((struct ib_smp *)VAR_9);
  goto bail;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_9, VAR_5);
 if (VAR_11)
  goto bail;

 switch (VAR_9->method) {
 case 131:
  switch (VAR_9->attr_id) {
  case 134:
   VAR_11 = FUNC_0(VAR_9, VAR_4);
   goto bail;

  case 132:
   VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_6);
   goto bail;

  case 135:
   VAR_11 = FUNC_3(VAR_9, VAR_4, VAR_6);
   goto bail;

  case 133:
   VAR_11 = FUNC_1(VAR_9, VAR_4, VAR_6);
   goto bail;


  default:
   VAR_9->status |= VAR_2;
   VAR_11 = FUNC_7((struct ib_smp *) VAR_9);
   goto bail;
  }

 case 129:
  switch (VAR_9->attr_id) {
  case 135:
   VAR_11 = FUNC_5(VAR_9, VAR_4, VAR_6);
   goto bail;

  case 133:
   VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_6);
   goto bail;


  default:
   VAR_9->status |= VAR_2;
   VAR_11 = FUNC_7((struct ib_smp *) VAR_9);
   goto bail;
  }

 case 130:





  VAR_11 = VAR_0;
  goto bail;

 case 128:
 default:
  VAR_9->status |= VAR_1;
  VAR_11 = FUNC_7((struct ib_smp *) VAR_9);
 }

bail:
 return VAR_11;
}

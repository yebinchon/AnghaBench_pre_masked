
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int mbuf_svc_class_t ;
struct TYPE_3__ {int fqs_flags; } ;
typedef TYPE_1__ fq_if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
__attribute__((used)) static inline u_int32_t
FUNC_0(fq_if_t *VAR_12, mbuf_svc_class_t VAR_13)
{
 u_int32_t VAR_14;

 if (VAR_12->fqs_flags & VAR_0) {
  switch (VAR_13) {
  case 135:
  case 136:
   VAR_14 = VAR_3;
   break;
  case 137:
  case 132:
  case 133:
   VAR_14 = VAR_2;
   break;
  case 138:
  case 131:
  case 129:
  case 130:
   VAR_14 = VAR_10;
   break;
  case 128:
  case 134:
   VAR_14 = VAR_11;
   break;
  default:
   VAR_14 = VAR_2;
   break;
  }
  return (VAR_14);
 }


 switch (VAR_13) {
 case 135:
  VAR_14 = VAR_4;
  break;
 case 136:
  VAR_14 = VAR_3;
  break;
 case 137:
  VAR_14 = VAR_2;
  break;
 case 132:
  VAR_14 = VAR_7;
  break;
 case 133:
  VAR_14 = VAR_6;
  break;
 case 138:
  VAR_14 = VAR_1;
  break;
 case 131:
  VAR_14 = VAR_8;
  break;
 case 129:
  VAR_14 = VAR_10;
  break;
 case 130:
  VAR_14 = VAR_9;
  break;
 case 128:
  VAR_14 = VAR_11;
  break;
 case 134:
  VAR_14 = VAR_5;
  break;
 default:
  VAR_14 = VAR_2;
  break;
 }
 return (VAR_14);
}

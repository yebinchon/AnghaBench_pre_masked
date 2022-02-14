
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sockopt {int sopt_name; size_t sopt_valsize; int sopt_val; int sopt_p; } ;
struct ip_fw_64 {scalar_t__ version; } ;
struct ip_fw_32 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sockopt*,struct ip_fw_64*,size_t,size_t) ;

int
FUNC_2(struct sockopt *VAR_15, int *VAR_16, u_int32_t *VAR_17)
{
 int VAR_18;
 int VAR_19 = 0;
 u_int32_t VAR_20 = VAR_7;


 if (VAR_15->sopt_name == VAR_12) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_4;
 }
 else if (VAR_15->sopt_name == VAR_11) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_3;
 }
 else if (VAR_15->sopt_name == VAR_14) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_8;
 }
 else if (VAR_15->sopt_name == VAR_9) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_1;
 }
 else if (VAR_15->sopt_name == VAR_10) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_2;
 }
 else if (VAR_15->sopt_name == VAR_13) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_5;
 }
 else {
  VAR_18 = VAR_15->sopt_name;
 }

 if (VAR_20 == VAR_7) {



  struct ip_fw_64 VAR_21;
                size_t VAR_22;

                if (FUNC_0(VAR_15->sopt_p))
                        VAR_22 = sizeof(struct ip_fw_64);
                else
                        VAR_22 = sizeof(struct ip_fw_32);

  if (!VAR_15->sopt_val || VAR_15->sopt_valsize < VAR_22)
   return VAR_0;
  if ((VAR_19 = FUNC_1(VAR_15, &VAR_21, VAR_22, VAR_22))) {
   return VAR_19;
  }

  VAR_20 = VAR_21.version;
 }

 if (VAR_16) {
  *VAR_16 = VAR_18;
 }
 if (VAR_17) {
  *VAR_17 = VAR_20;
 }

 return VAR_19;
}

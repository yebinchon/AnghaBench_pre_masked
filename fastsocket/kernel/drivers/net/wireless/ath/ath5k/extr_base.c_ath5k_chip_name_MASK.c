
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
typedef enum ath5k_srev_type { ____Placeholder_ath5k_srev_type } ath5k_srev_type ;
struct TYPE_3__ {int sr_type; int sr_val; char* sr_name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_1(enum ath5k_srev_type VAR_1, u_int16_t VAR_2)
{
 const char *VAR_3 = "xxxxx";
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].sr_type != VAR_1)
   continue;

  if ((VAR_2 & 0xf0) == VAR_0[VAR_4].sr_val)
   VAR_3 = VAR_0[VAR_4].sr_name;

  if ((VAR_2 & 0xff) == VAR_0[VAR_4].sr_val) {
   VAR_3 = VAR_0[VAR_4].sr_name;
   break;
  }
 }

 return VAR_3;
}

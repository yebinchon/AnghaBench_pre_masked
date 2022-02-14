
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct carl9170_psm {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct carl9170_cmd {TYPE_1__ psm; } ;
struct ar9170 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar9170*,struct carl9170_cmd*,int) ;
 struct carl9170_cmd* FUNC_1 (struct ar9170*,int ,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct ar9170 *VAR_3, const bool VAR_4)
{
 struct carl9170_cmd *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_0,
          sizeof(struct carl9170_psm));
 if (!VAR_5)
  return -VAR_2;

 if (VAR_4) {

  VAR_6 = VAR_1 | 1;
 } else {

  VAR_6 = 1;
 }

 VAR_5->psm.state = FUNC_2(VAR_6);
 return FUNC_0(VAR_3, VAR_5, 1);
}

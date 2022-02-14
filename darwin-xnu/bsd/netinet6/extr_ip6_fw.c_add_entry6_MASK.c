
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct ip6_fw_head {struct ip6_fw_chain* lh_first; } ;
struct TYPE_6__ {struct ip6_fw_chain* le_next; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_5__ {TYPE_1__ fu_via_if; } ;
struct ip6_fw_chain {long fw_pcnt; long fw_bcnt; scalar_t__ fw_number; struct ip6_fw_chain* rule; TYPE_3__ chain; TYPE_2__ fw_in_if; } ;
struct ip6_fw {long fw_pcnt; long fw_bcnt; scalar_t__ fw_number; struct ip6_fw* rule; TYPE_3__ chain; TYPE_2__ fw_in_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip6_fw_chain*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ip6_fw_chain*,struct ip6_fw_chain*,int ) ;
 int FUNC_2 (struct ip6_fw_head*,struct ip6_fw_chain*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ip6_fw_chain* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct ip6_fw_chain*,struct ip6_fw_chain*,int) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct ip6_fw_head *VAR_7, struct ip6_fw *VAR_8)
{
 struct ip6_fw *VAR_9 = 0;
 struct ip6_fw_chain *VAR_10 = 0, *VAR_11, *VAR_12 = 0;
 u_short VAR_13 = 0;

 VAR_10 = FUNC_3(sizeof *VAR_10, VAR_3, VAR_4);
 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_3, VAR_4);
 if (!VAR_10 || !VAR_9) {
  FUNC_5(("%s malloc said no\n", VAR_6));
  if (VAR_10) FUNC_0(VAR_10, VAR_3);
  if (VAR_9) FUNC_0(VAR_9, VAR_3);
  return (VAR_1);
 }

 FUNC_4(VAR_8, VAR_9, sizeof(struct ip6_fw));
 VAR_9->fw_in_if.fu_via_if.name[VAR_2 - 1] = '\0';
 VAR_9->fw_pcnt = 0L;
 VAR_9->fw_bcnt = 0L;
 VAR_10->rule = VAR_9;

 if (!VAR_7->lh_first) {
  FUNC_2(VAR_7, VAR_10, VAR_5);
  return(0);
        } else if (VAR_9->fw_number == (u_short)-1) {
  if (VAR_10) FUNC_0(VAR_10, VAR_3);
  if (VAR_9) FUNC_0(VAR_9, VAR_3);
  FUNC_5(("%s bad rule number\n", VAR_6));
  return (VAR_0);
        }


 if (VAR_9->fw_number == 0) {
  for (VAR_11 = VAR_7->lh_first; VAR_11; VAR_11 = VAR_11->chain.le_next) {
   if (VAR_11->rule->fw_number != (u_short)-1)
    VAR_13 = VAR_11->rule->fw_number;
   else
    break;
  }
  if (VAR_13 < (u_short)-1 - 100)
   VAR_13 += 100;
  VAR_9->fw_number = VAR_13;
 }


 for (VAR_11 = VAR_7->lh_first; VAR_11; VAR_11 = VAR_11->chain.le_next) {
  if (VAR_11->rule->fw_number > VAR_9->fw_number) {
   if (VAR_12) {
    FUNC_1(VAR_12, VAR_10, VAR_5);
   } else {
    FUNC_2(VAR_7, VAR_10, VAR_5);
   }
   break;
  } else {
   VAR_12 = VAR_11;
  }
 }

 FUNC_4(VAR_9, VAR_8, sizeof(struct ip6_fw));
 return (0);
}

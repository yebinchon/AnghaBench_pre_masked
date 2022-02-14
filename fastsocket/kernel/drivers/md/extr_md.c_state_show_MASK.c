
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unacked_exist; } ;
struct md_rdev {int flags; TYPE_1__ badblocks; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_7, char *VAR_8)
{
 char *VAR_9 = "";
 size_t VAR_10 = 0;

 if (FUNC_1(VAR_1, &VAR_7->flags) ||
     VAR_7->badblocks.unacked_exist) {
  VAR_10+= FUNC_0(VAR_8+VAR_10, "%sfaulty",VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_2, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%sin_sync",VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_6, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%swrite_mostly",VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_0, &VAR_7->flags) ||
     (VAR_7->badblocks.unacked_exist
      && !FUNC_1(VAR_1, &VAR_7->flags))) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%sblocked", VAR_9);
  VAR_9 = ",";
 }
 if (!FUNC_1(VAR_1, &VAR_7->flags) &&
     !FUNC_1(VAR_2, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%sspare", VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_5, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%swrite_error", VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_4, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%swant_replacement", VAR_9);
  VAR_9 = ",";
 }
 if (FUNC_1(VAR_3, &VAR_7->flags)) {
  VAR_10 += FUNC_0(VAR_8+VAR_10, "%sreplacement", VAR_9);
  VAR_9 = ",";
 }

 return VAR_10+FUNC_0(VAR_8+VAR_10, "\n");
}

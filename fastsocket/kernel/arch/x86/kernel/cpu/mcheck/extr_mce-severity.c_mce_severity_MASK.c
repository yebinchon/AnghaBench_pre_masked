
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct severity {int mask; int result; int mcgmask; int mcgres; scalar_t__ ser; int context; char* msg; int covered; scalar_t__ sev; } ;
struct mce {int status; int mcgstatus; } ;
typedef enum context { ____Placeholder_context } context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mce*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct severity* VAR_7 ;

int FUNC_1(struct mce *VAR_8, int VAR_9, char **VAR_10)
{
 enum context VAR_11 = FUNC_0(VAR_8);
 struct severity *VAR_12;

 for (VAR_12 = VAR_7;; VAR_12++) {
  if ((VAR_8->status & VAR_12->mask) != VAR_12->result)
   continue;
  if ((VAR_8->mcgstatus & VAR_12->mcgmask) != VAR_12->mcgres)
   continue;
  if (VAR_12->ser == VAR_4 && !VAR_5)
   continue;
  if (VAR_12->ser == VAR_3 && VAR_5)
   continue;
  if (VAR_12->context && VAR_11 != VAR_12->context)
   continue;
  if (VAR_10)
   *VAR_10 = VAR_12->msg;
  VAR_12->covered = 1;
  if (VAR_12->sev >= VAR_2 && VAR_11 == VAR_0) {
   if (VAR_6 || VAR_9 < 1)
    return VAR_1;
  }
  return VAR_12->sev;
 }
}

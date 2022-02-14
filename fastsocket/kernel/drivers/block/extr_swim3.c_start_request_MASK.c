
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int errors; int buffer; int cmd; TYPE_1__* rq_disk; } ;
struct floppy_state {scalar_t__ state; scalar_t__ total_secs; scalar_t__ write_prot; long req_cyl; long secpercyl; unsigned long head; unsigned long secpertrack; unsigned long req_sector; scalar_t__ retries; scalar_t__ ejected; int wait; scalar_t__ wanted; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct floppy_state*) ;
 scalar_t__ VAR_3 ;
 struct request* FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ VAR_4 ;
 struct request* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char*,int ,int ,...) ;
 scalar_t__ FUNC_6 (struct request*) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (struct floppy_state*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct floppy_state *VAR_8)
{
 struct request *VAR_9;
 unsigned long VAR_10;

 if (VAR_8->state == VAR_6 && VAR_8->wanted) {
  VAR_8->state = VAR_3;
  FUNC_9(&VAR_8->wait);
  return;
 }
 while (VAR_8->state == VAR_6) {
  if (!VAR_5) {
   VAR_5 = FUNC_1(VAR_7);
   if (!VAR_5)
    break;
  }
  VAR_9 = VAR_5;
  if (FUNC_3(VAR_9) >= VAR_8->total_secs) {
   FUNC_7(-VAR_0);
   continue;
  }
  if (VAR_8->ejected) {
   FUNC_7(-VAR_0);
   continue;
  }

  if (FUNC_6(VAR_9) == VAR_1) {
   if (VAR_8->write_prot < 0)
    VAR_8->write_prot = FUNC_8(VAR_8, VAR_2);
   if (VAR_8->write_prot) {
    FUNC_7(-VAR_0);
    continue;
   }
  }







  VAR_8->req_cyl = ((long)FUNC_3(VAR_9)) / VAR_8->secpercyl;
  VAR_10 = ((long)FUNC_3(VAR_9)) % VAR_8->secpercyl;
  VAR_8->head = VAR_10 / VAR_8->secpertrack;
  VAR_8->req_sector = VAR_10 % VAR_8->secpertrack + 1;
  VAR_5 = VAR_9;
  VAR_8->state = VAR_4;
  VAR_8->retries = 0;

  FUNC_0(VAR_8);
 }
}

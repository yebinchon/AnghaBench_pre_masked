
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t lid_t ;
struct TYPE_4__ {size_t freelock; scalar_t__ tlocksInUse; int freelockwait; int lowlockwait; } ;
struct TYPE_3__ {size_t next; scalar_t__ tid; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(lid_t VAR_4)
{
 VAR_1[VAR_4].tid = 0;
 VAR_1[VAR_4].next = VAR_0.freelock;
 VAR_0.freelock = VAR_4;
 VAR_0.tlocksInUse--;
 if (VAR_3 && (VAR_0.tlocksInUse < VAR_2)) {
  FUNC_1("txLockFree jfs_tlocks_low no more");
  VAR_3 = 0;
  FUNC_0(&VAR_0.lowlockwait);
 }
 FUNC_0(&VAR_0.freelockwait);
}

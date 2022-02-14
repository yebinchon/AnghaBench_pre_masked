
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {scalar_t__ first_read_date; } ;
struct TYPE_11__ {int (* redo ) () ;int (* done ) (int) ;int (* error ) () ;} ;
struct TYPE_10__ {scalar_t__ buffer; } ;
struct TYPE_9__ {int name; int size; } ;
struct TYPE_8__ {scalar_t__ kernel_data; int track; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_7__* VAR_2 ;
 int FUNC_2 (char*,int,size_t) ;
 TYPE_6__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int,int) ;
 size_t FUNC_5 (size_t) ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_4__* VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 TYPE_3__* VAR_23 ;
 TYPE_2__** VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 () ;
 scalar_t__ VAR_28 ;
 int FUNC_7 (char*,int,...) ;
 scalar_t__ VAR_29 ;
 TYPE_1__* VAR_30 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(void)
{
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;

 if (VAR_7 >= 2) {



  return;
 }

 if (!VAR_3->first_read_date)
  VAR_3->first_read_date = VAR_28;

 VAR_34 = 0;
 VAR_0;

 if (VAR_13 & VAR_14)
  VAR_31 = 1;
 else
  VAR_31 = 0;

 if (VAR_1 & 0x80)
  VAR_33 = 2;
 else
  VAR_33 = 1;

 VAR_34 = (((VAR_9 - VAR_15) * VAR_33 +
         VAR_7 - VAR_6) * VAR_11 +
        VAR_8 - VAR_10 + VAR_31) << VAR_12 >> 2;
 VAR_34 -= VAR_27;
 FUNC_3(VAR_34, 0);
 FUNC_4(VAR_21, VAR_34);

 switch (FUNC_6()) {
 case 2:
  VAR_20->redo();
  return;
 case 1:
  if (!VAR_21) {
   VAR_20->error();
   VAR_20->redo();
   return;
  }
  break;
 case 0:
  if (!VAR_21) {
   VAR_20->redo();
   return;
  }
  VAR_24[VAR_22] = VAR_16;
  VAR_25[FUNC_5(VAR_22)] = VAR_16->size;
  break;
 }

 if (VAR_29) {
  if (VAR_2->flags & VAR_5)
   FUNC_2("Auto-detected floppy type %s in fd%d\n",
          VAR_16->name, VAR_22);
  VAR_24[VAR_22] = VAR_16;
  VAR_25[FUNC_5(VAR_22)] = VAR_16->size;
  VAR_29 = 0;
 }

 if (FUNC_0(VAR_1) != VAR_4 ||
     VAR_30->kernel_data == VAR_23->buffer) {

  VAR_20->done(1);
 } else if (FUNC_0(VAR_1) == VAR_4) {
  VAR_19 = VAR_30->track;
  VAR_17 = VAR_22;
  FUNC_3(VAR_18, VAR_34 + VAR_26);
 }
 VAR_20->redo();
}

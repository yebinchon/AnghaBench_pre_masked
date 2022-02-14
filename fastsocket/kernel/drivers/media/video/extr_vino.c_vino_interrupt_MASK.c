
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_9__ {unsigned int line_count; unsigned int page_index; unsigned int field_counter; unsigned int start_desc_tbl; unsigned int next_4_desc; } ;
struct TYPE_8__ {int field_counter; } ;
struct TYPE_13__ {int intr_status; int control; TYPE_2__ a; TYPE_1__ b; } ;
struct TYPE_10__ {unsigned int frame_counter; int skip; int timestamp; } ;
struct TYPE_12__ {int field; unsigned int line_size; TYPE_3__ int_data; } ;
struct TYPE_11__ {int vino_lock; TYPE_5__ b; TYPE_5__ a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_7__* VAR_7 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 u32 VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 FUNC_3(&VAR_8->vino_lock);

 while ((VAR_14 = VAR_7->intr_status)) {
  VAR_15 = VAR_7->a.field_counter >> 1;
  VAR_16 = VAR_7->b.field_counter >> 1;



  if (VAR_14 & VAR_3) {
   if (VAR_14 & VAR_4) {
    VAR_8->a.field++;
    if (VAR_8->a.field > 1) {
     FUNC_7(&VAR_8->a);
     FUNC_6(&VAR_8->a);
     VAR_8->a.field = 0;
     VAR_19 = 1;
    } else {
     if (VAR_7->a.page_index
         != VAR_8->a.line_size) {
      VAR_7->a.line_count = 0;
      VAR_7->a.page_index =
       VAR_8->
       a.line_size;
      VAR_7->a.next_4_desc =
       VAR_7->a.start_desc_tbl;
     }
    }
    FUNC_1("channel A end-of-field "
     "interrupt: %04x\n", VAR_14);
   } else {
    FUNC_7(&VAR_8->a);
    FUNC_6(&VAR_8->a);
    VAR_8->a.field = 0;
    VAR_18 = 1;
    FUNC_1("channel A error interrupt: %04x\n",
     VAR_14);
   }
  }

  if (VAR_14 & VAR_5) {
   if (VAR_14 & VAR_6) {
    VAR_8->b.field++;
    if (VAR_8->b.field > 1) {
     FUNC_7(&VAR_8->b);
     FUNC_6(&VAR_8->b);
     VAR_8->b.field = 0;
     VAR_22 = 1;
    }
    FUNC_1("channel B end-of-field "
     "interrupt: %04x\n", VAR_14);
   } else {
    FUNC_7(&VAR_8->b);
    FUNC_6(&VAR_8->b);
    VAR_8->b.field = 0;
    VAR_21 = 1;
    FUNC_1("channel B error interrupt: %04x\n",
     VAR_14);
   }
  }



  VAR_13 = VAR_7->control;
  VAR_7->control = VAR_13 & ~(VAR_1 | VAR_2);
  VAR_7->intr_status = ~VAR_14;
  VAR_7->control = VAR_13;

  FUNC_4(&VAR_8->vino_lock);

  if ((!VAR_17) && (VAR_19 || VAR_18)) {
   if (!VAR_18) {
    FUNC_0(&VAR_8->
      a.int_data.timestamp);
    VAR_8->a.int_data.frame_counter = VAR_15;
   }
   VAR_8->a.int_data.skip = VAR_18;

   FUNC_1("channel A %s, interrupt: %d\n",
    VAR_18 ? "skipping frame" : "frame done",
    VAR_14);
   FUNC_5(&VAR_9);
   VAR_17 = 1;
  }

  if ((!VAR_20) && (VAR_22 || VAR_21)) {
   if (!VAR_21) {
    FUNC_0(&VAR_8->
      b.int_data.timestamp);
    VAR_8->b.int_data.frame_counter = VAR_16;
   }
   VAR_8->b.int_data.skip = VAR_21;

   FUNC_1("channel B %s, interrupt: %d\n",
    VAR_21 ? "skipping frame" : "frame done",
    VAR_14);
   FUNC_5(&VAR_10);
   VAR_20 = 1;
  }




  FUNC_3(&VAR_8->vino_lock);
 }

 FUNC_4(&VAR_8->vino_lock);

 return VAR_0;
}

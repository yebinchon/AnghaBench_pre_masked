
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int index; TYPE_3__* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int * last; TYPE_1__* first; } ;
struct TYPE_7__ {scalar_t__ state; int name; scalar_t__ num_open; int pc300dev; struct tty_struct* tty; TYPE_2__ buf_rx; scalar_t__ buf_tx; } ;
typedef TYPE_3__ st_cpc_tty_area ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_9, struct file *VAR_10)
{
 int VAR_11 ;
 st_cpc_tty_area *VAR_12;

 if (!VAR_9) {
  return -VAR_5;
 }

 VAR_11 = VAR_9->index;

 if ((VAR_11 < 0) || (VAR_11 >= VAR_1)){
  FUNC_0("pc300_tty: open invalid port %d\n", VAR_11);
  return -VAR_5;
 }

 VAR_12 = &VAR_8[VAR_11];

 if (VAR_12->state == VAR_2){
  FUNC_0("%s: open - invalid interface, port=%d\n",
     VAR_12->name, VAR_9->index);
  return -VAR_5;
 }

 if (VAR_12->num_open == 0) {
  if (!VAR_8[VAR_11].buf_tx){
   VAR_8[VAR_11].buf_tx = FUNC_3(VAR_0,VAR_7);
   if (!VAR_8[VAR_11].buf_tx) {
    FUNC_0("%s: error in memory allocation\n",VAR_12->name);
    return -VAR_6;
   }
  }

  if (VAR_8[VAR_11].buf_rx.first) {
   unsigned char * VAR_13;
   while (VAR_8[VAR_11].buf_rx.first) {
    VAR_13 = (unsigned char *)VAR_8[VAR_11].buf_rx.first;
    VAR_8[VAR_11].buf_rx.first = VAR_8[VAR_11].buf_rx.first->next;
    FUNC_2(VAR_13);
   }
   VAR_8[VAR_11].buf_rx.first = ((void*)0);
   VAR_8[VAR_11].buf_rx.last = ((void*)0);
  }

  VAR_8[VAR_11].state = VAR_3;
  VAR_8[VAR_11].tty = VAR_9;
  VAR_9->driver_data = &VAR_8[VAR_11];

  FUNC_1(VAR_12->pc300dev, VAR_4);
 }

 VAR_12->num_open++;

 FUNC_0("%s: opening TTY driver\n", VAR_12->name);


 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct lv {int offset; int length; } ;
struct ldtentry {int inumber; } ;
struct inode {int dummy; } ;
struct dt_lock {int index; struct lv* lv; } ;
struct component_name {int dummy; } ;
struct btstack {int top; } ;
typedef int s8 ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_4__ {int * slot; } ;
typedef TYPE_1__ dtpage_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct metapage*,struct inode*) ;
 int FUNC_2 (struct inode*,int ,int ,struct metapage*,TYPE_1__*,int) ;
 int* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct metapage*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,struct component_name*,int *,struct btstack*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct tlock* FUNC_7 (int ,struct inode*,struct metapage*,int) ;

int FUNC_8(tid_t VAR_2, struct inode *VAR_3,
  struct component_name * VAR_4, ino_t * VAR_5, ino_t VAR_6, int VAR_7)
{
 int VAR_8;
 s64 VAR_9;
 struct metapage *VAR_10;
 dtpage_t *VAR_11;
 int VAR_12;
 struct btstack VAR_13;
 struct tlock *VAR_14;
 struct dt_lock *VAR_15;
 struct lv *VAR_16;
 s8 *VAR_17;
 int VAR_18;
 struct ldtentry *VAR_19;






 if ((VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5, &VAR_13, VAR_7)))
  return VAR_8;


 FUNC_2(VAR_3, VAR_13.top, VAR_9, VAR_10, VAR_11, VAR_12);

 FUNC_1(VAR_10, VAR_3);



 VAR_14 = FUNC_7(VAR_2, VAR_3, VAR_10, VAR_0 | VAR_1);
 VAR_15 = (struct dt_lock *) & VAR_14->lock;


 VAR_17 = FUNC_3(VAR_11);
 VAR_18 = VAR_17[VAR_12];


 FUNC_0(VAR_15->index == 0);
 VAR_16 = & VAR_15->lv[0];
 VAR_16->offset = VAR_18;
 VAR_16->length = 1;
 VAR_15->index++;


 VAR_19 = (struct ldtentry *) & VAR_11->slot[VAR_18];


 VAR_19->inumber = FUNC_5(VAR_6);


 FUNC_4(VAR_10);

 return 0;
}

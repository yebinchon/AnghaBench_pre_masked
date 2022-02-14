
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct inode {int dummy; } ;
struct dt_lock {size_t index; size_t maxcnt; struct lv* lv; } ;
typedef scalar_t__ s64 ;
struct TYPE_5__ {void* next; void* prev; } ;
struct TYPE_6__ {TYPE_1__ header; } ;
typedef TYPE_2__ dtpage_t ;


 int FUNC_0 (struct metapage*,struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__,struct metapage*,int ,TYPE_2__*,int) ;
 int FUNC_2 (struct metapage*) ;
 int VAR_0 ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct tlock*,struct inode*,struct metapage*) ;
 scalar_t__ FUNC_5 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct dt_lock*) ;
 struct tlock* FUNC_7 (int ,struct inode*,struct metapage*,int) ;

__attribute__((used)) static int FUNC_8(tid_t VAR_3, struct inode *VAR_4, dtpage_t * VAR_5)
{
 int VAR_6;
 struct metapage *VAR_7;
 s64 VAR_8, VAR_9;
 struct tlock *VAR_10;
 struct dt_lock *VAR_11;
 struct lv *VAR_12;

 VAR_8 = FUNC_5(VAR_5->header.next);
 VAR_9 = FUNC_5(VAR_5->header.prev);


 if (VAR_8 != 0) {
  FUNC_1(VAR_4, VAR_8, VAR_7, VAR_0, VAR_5, VAR_6);
  if (VAR_6)
   return VAR_6;

  FUNC_0(VAR_7, VAR_4);





  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_7, VAR_1 | VAR_2);
  FUNC_4("dtRelink nextbn: tlck = 0x%p, ip = 0x%p, mp=0x%p",
   VAR_10, VAR_4, VAR_7);
  VAR_11 = (struct dt_lock *) & VAR_10->lock;


  if (VAR_11->index >= VAR_11->maxcnt)
   VAR_11 = (struct dt_lock *) FUNC_6(VAR_11);
  VAR_12 = & VAR_11->lv[VAR_11->index];
  VAR_12->offset = 0;
  VAR_12->length = 1;
  VAR_11->index++;

  VAR_5->header.prev = FUNC_3(VAR_9);
  FUNC_2(VAR_7);
 }


 if (VAR_9 != 0) {
  FUNC_1(VAR_4, VAR_9, VAR_7, VAR_0, VAR_5, VAR_6);
  if (VAR_6)
   return VAR_6;

  FUNC_0(VAR_7, VAR_4);





  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_7, VAR_1 | VAR_2);
  FUNC_4("dtRelink prevbn: tlck = 0x%p, ip = 0x%p, mp=0x%p",
   VAR_10, VAR_4, VAR_7);
  VAR_11 = (struct dt_lock *) & VAR_10->lock;


  if (VAR_11->index >= VAR_11->maxcnt)
   VAR_11 = (struct dt_lock *) FUNC_6(VAR_11);
  VAR_12 = & VAR_11->lv[VAR_11->index];
  VAR_12->offset = 0;
  VAR_12->length = 1;
  VAR_11->index++;

  VAR_5->header.next = FUNC_3(VAR_8);
  FUNC_2(VAR_7);
 }

 return 0;
}

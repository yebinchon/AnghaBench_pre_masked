
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inomap {struct inode* im_ipimap; TYPE_1__* im_agctl; void* im_l2nbperiext; void* im_nbperiext; int im_numfree; int im_numinos; void* im_nextiag; void* im_freeiag; } ;
struct inode {int i_sb; } ;
struct dinomap_disk {TYPE_2__* in_agctl; int in_l2nbperiext; int in_nbperiext; int in_numfree; int in_numinos; int in_nextiag; int in_freeiag; } ;
struct TYPE_8__ {struct inomap* i_imap; } ;
struct TYPE_7__ {int l2nbperpage; } ;
struct TYPE_6__ {int numfree; int numinos; int extfree; int inofree; } ;
struct TYPE_5__ {void* numfree; void* numinos; void* extfree; void* inofree; } ;


 int FUNC_0 (struct inomap*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inomap*) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct inomap*) ;
 struct inomap* FUNC_7 (int,int ) ;
 void* FUNC_8 (int ) ;
 struct metapage* FUNC_9 (struct inode*,int,int ,int ) ;
 int FUNC_10 (struct metapage*) ;

int FUNC_11(struct inode *VAR_6)
{
 struct inomap *VAR_7;
 struct metapage *VAR_8;
 int VAR_9;
 struct dinomap_disk *VAR_10;





 VAR_7 = FUNC_7(sizeof(struct inomap), VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_5("diMount: kmalloc returned NULL!");
  return -VAR_1;
 }



 VAR_8 = FUNC_9(VAR_6,
      VAR_3 << FUNC_3(VAR_6->i_sb)->l2nbperpage,
      VAR_5, 0);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }


 VAR_10 = (struct dinomap_disk *) VAR_8->data;
 VAR_7->im_freeiag = FUNC_8(VAR_10->in_freeiag);
 VAR_7->im_nextiag = FUNC_8(VAR_10->in_nextiag);
 FUNC_4(&VAR_7->im_numinos, FUNC_8(VAR_10->in_numinos));
 FUNC_4(&VAR_7->im_numfree, FUNC_8(VAR_10->in_numfree));
 VAR_7->im_nbperiext = FUNC_8(VAR_10->in_nbperiext);
 VAR_7->im_l2nbperiext = FUNC_8(VAR_10->in_l2nbperiext);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7->im_agctl[VAR_9].inofree =
      FUNC_8(VAR_10->in_agctl[VAR_9].inofree);
  VAR_7->im_agctl[VAR_9].extfree =
      FUNC_8(VAR_10->in_agctl[VAR_9].extfree);
  VAR_7->im_agctl[VAR_9].numinos =
      FUNC_8(VAR_10->in_agctl[VAR_9].numinos);
  VAR_7->im_agctl[VAR_9].numfree =
      FUNC_8(VAR_10->in_agctl[VAR_9].numfree);
 }


 FUNC_10(VAR_8);





 FUNC_1(VAR_7);


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_0(VAR_7, VAR_9);
 }




 VAR_7->im_ipimap = VAR_6;
 FUNC_2(VAR_6)->i_imap = VAR_7;

 return (0);
}

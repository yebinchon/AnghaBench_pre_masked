
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct writeback_control {int encountered_congestion; scalar_t__ range_start; scalar_t__ range_end; scalar_t__ sync_mode; scalar_t__ nr_to_write; scalar_t__ range_cyclic; scalar_t__ nonblocking; } ;
struct page {scalar_t__ index; struct address_space* mapping; } ;
struct cifs_writedata {scalar_t__ sync_mode; unsigned int nr_pages; int pagesz; int refcount; struct page** pages; TYPE_2__* cfile; int pid; scalar_t__ tailsz; scalar_t__ bytes; scalar_t__ offset; } ;
struct cifs_sb_info {int wsize; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {scalar_t__ writeback_index; TYPE_1__* host; struct backing_dev_info* backing_dev_info; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int i_sb; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (struct backing_dev_info*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct cifs_writedata*) ;
 struct cifs_writedata* FUNC_8 (unsigned int,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 unsigned int FUNC_11 (struct address_space*,scalar_t__*,int ,scalar_t__,struct page**) ;
 TYPE_2__* FUNC_12 (int ,int) ;
 int FUNC_13 (struct address_space*,struct writeback_control*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct address_space*,int) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (struct page*) ;
 int FUNC_21 (struct writeback_control*,struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*) ;

__attribute__((used)) static int FUNC_27(struct address_space *VAR_11,
      struct writeback_control *VAR_12)
{
 struct backing_dev_info *VAR_13 = VAR_11->backing_dev_info;
 struct cifs_sb_info *VAR_14 = FUNC_1(VAR_11->host->i_sb);
 bool VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 pgoff_t VAR_18, VAR_19;
 struct cifs_writedata *VAR_20;
 struct page *VAR_21;
 int VAR_22 = 0;





 if (VAR_12->nonblocking && FUNC_4(VAR_13)) {
  VAR_12->encountered_congestion = 1;
  return 0;
 }





 if (VAR_14->wsize < VAR_6)
  return FUNC_13(VAR_11, VAR_12);

 if (VAR_12->range_cyclic) {
  VAR_19 = VAR_11->writeback_index;
  VAR_18 = -1;
 } else {
  VAR_19 = VAR_12->range_start >> VAR_5;
  VAR_18 = VAR_12->range_end >> VAR_5;
  if (VAR_12->range_start == 0 && VAR_12->range_end == VAR_3)
   VAR_17 = 1;
  VAR_16 = 1;
 }
retry:
 while (!VAR_15 && VAR_19 <= VAR_18) {
  unsigned int VAR_23, VAR_24, VAR_25;
  pgoff_t VAR_26 = 0, VAR_27;
  struct page **VAR_28;

  VAR_27 = FUNC_18((VAR_14->wsize / VAR_6) - 1,
    VAR_18 - VAR_19) + 1;

  VAR_20 = FUNC_8((unsigned int)VAR_27,
          &VAR_10);
  if (!VAR_20) {
   VAR_22 = -VAR_2;
   break;
  }







  VAR_25 = 0;
  VAR_28 = VAR_20->pages;
  do {
   VAR_24 = FUNC_11(VAR_11, &VAR_19,
       VAR_4,
       VAR_27, VAR_28);
   VAR_25 += VAR_24;
   VAR_27 -= VAR_24;
   VAR_28 += VAR_24;
  } while (VAR_24 && VAR_27 && VAR_19 <= VAR_18);

  if (VAR_25 == 0) {
   FUNC_15(&VAR_20->refcount, VAR_9);
   break;
  }

  VAR_24 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_25; VAR_23++) {
   VAR_21 = VAR_20->pages[VAR_23];
   if (VAR_24 == 0)
    FUNC_16(VAR_21);
   else if (!FUNC_23(VAR_21))
    break;

   if (FUNC_24(VAR_21->mapping != VAR_11)) {
    FUNC_25(VAR_21);
    break;
   }

   if (!VAR_12->range_cyclic && VAR_21->index > VAR_18) {
    VAR_15 = 1;
    FUNC_25(VAR_21);
    break;
   }

   if (VAR_26 && (VAR_21->index != VAR_26)) {

    FUNC_25(VAR_21);
    break;
   }

   if (VAR_12->sync_mode != VAR_8)
    FUNC_26(VAR_21);

   if (FUNC_2(VAR_21) ||
     !FUNC_9(VAR_21)) {
    FUNC_25(VAR_21);
    break;
   }





   FUNC_22(VAR_21);

   if (FUNC_20(VAR_21) >= FUNC_14(VAR_11->host)) {
    VAR_15 = 1;
    FUNC_25(VAR_21);
    FUNC_10(VAR_21);
    break;
   }

   VAR_20->pages[VAR_23] = VAR_21;
   VAR_26 = VAR_21->index + 1;
   ++VAR_24;
  }


  if (VAR_24 == 0)
   VAR_19 = VAR_20->pages[0]->index + 1;


  for (VAR_23 = VAR_24; VAR_23 < VAR_25; VAR_23++) {
   FUNC_19(VAR_20->pages[VAR_23]);
   VAR_20->pages[VAR_23] = ((void*)0);
  }


  if (VAR_24 == 0) {
   FUNC_15(&VAR_20->refcount, VAR_9);
   continue;
  }

  VAR_20->sync_mode = VAR_12->sync_mode;
  VAR_20->nr_pages = VAR_24;
  VAR_20->offset = FUNC_20(VAR_20->pages[0]);
  VAR_20->pagesz = VAR_6;
  VAR_20->tailsz =
   FUNC_18(FUNC_14(VAR_11->host) -
       FUNC_20(VAR_20->pages[VAR_24 - 1]),
       (loff_t)VAR_6);
  VAR_20->bytes = ((VAR_24 - 1) * VAR_6) +
     VAR_20->tailsz;

  do {
   if (VAR_20->cfile != ((void*)0))
    FUNC_6(VAR_20->cfile);
   VAR_20->cfile = FUNC_12(FUNC_0(VAR_11->host),
         0);
   if (!VAR_20->cfile) {
    FUNC_5(1, "No writable handles for inode");
    VAR_22 = -VAR_1;
    break;
   }
   VAR_20->pid = VAR_20->cfile->pid;
   VAR_22 = FUNC_7(VAR_20);
  } while (VAR_12->sync_mode == VAR_7 && VAR_22 == -VAR_0);

  for (VAR_23 = 0; VAR_23 < VAR_24; ++VAR_23)
   FUNC_25(VAR_20->pages[VAR_23]);


  if (VAR_22 != 0) {
   for (VAR_23 = 0; VAR_23 < VAR_24; ++VAR_23) {
    if (VAR_22 == -VAR_0)
     FUNC_21(VAR_12,
          VAR_20->pages[VAR_23]);
    else
     FUNC_3(VAR_20->pages[VAR_23]);
    FUNC_10(VAR_20->pages[VAR_23]);
    FUNC_19(VAR_20->pages[VAR_23]);
   }
   if (VAR_22 != -VAR_0)
    FUNC_17(VAR_11, VAR_22);
  }
  FUNC_15(&VAR_20->refcount, VAR_9);

  VAR_12->nr_to_write -= VAR_24;
  if (VAR_12->nr_to_write <= 0)
   VAR_15 = 1;

  VAR_19 = VAR_26;
 }

 if (!VAR_16 && !VAR_15) {




  VAR_16 = 1;
  VAR_19 = 0;
  goto retry;
 }

 if (VAR_12->range_cyclic || (VAR_17 && VAR_12->nr_to_write > 0))
  VAR_11->writeback_index = VAR_19;

 return VAR_22;
}

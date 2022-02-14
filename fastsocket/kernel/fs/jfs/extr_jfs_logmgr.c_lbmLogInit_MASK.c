
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct page {int dummy; } ;
struct lbuf {char* l_ldata; struct lbuf* l_freelist; int l_ioevent; struct jfs_log* l_log; struct page* l_page; scalar_t__ l_offset; } ;
struct jfs_log {struct lbuf* lbuf_free; int free_wait; int * wqueue; int * bp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct jfs_log*) ;
 struct lbuf* FUNC_5 (int,int ) ;
 int FUNC_6 (struct jfs_log*) ;
 struct page* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct jfs_log * VAR_5)
{
 int VAR_6;
 struct lbuf *VAR_7;

 FUNC_4("lbmLogInit: log:0x%p", VAR_5);


 VAR_5->bp = ((void*)0);


 VAR_5->wqueue = ((void*)0);
 FUNC_3(&VAR_5->free_wait);

 VAR_5->lbuf_free = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_2;) {
  char *VAR_8;
  uint VAR_9;
  struct page *VAR_10;

  VAR_8 = (char *) FUNC_2(VAR_1);
  if (VAR_8 == ((void*)0))
   goto error;
  VAR_10 = FUNC_7(VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += VAR_3) {
   VAR_7 = FUNC_5(sizeof(struct lbuf), VAR_1);
   if (VAR_7 == ((void*)0)) {
    if (VAR_9 == 0)
     FUNC_0((unsigned long) VAR_8);
    goto error;
   }
   if (VAR_9)
    FUNC_1(VAR_10);
   VAR_7->l_offset = VAR_9;
   VAR_7->l_ldata = VAR_8 + VAR_9;
   VAR_7->l_page = VAR_10;
   VAR_7->l_log = VAR_5;
   FUNC_3(&VAR_7->l_ioevent);

   VAR_7->l_freelist = VAR_5->lbuf_free;
   VAR_5->lbuf_free = VAR_7;
   VAR_6++;
  }
 }

 return (0);

      error:
 FUNC_6(VAR_5);
 return -VAR_0;
}

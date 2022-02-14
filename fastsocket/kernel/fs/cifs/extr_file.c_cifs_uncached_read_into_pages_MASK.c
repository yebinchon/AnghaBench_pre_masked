
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvec {unsigned int iov_len; void* iov_base; } ;
struct cifs_readdata {unsigned int nr_pages; unsigned int tailsz; struct page** pages; } ;
struct TCP_Server_Info {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int,void*,unsigned int) ;
 int FUNC_1 (struct TCP_Server_Info*,struct kvec*,int,unsigned int) ;
 void* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,char,unsigned int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct TCP_Server_Info *VAR_1,
   struct cifs_readdata *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6;
 unsigned int VAR_7 = VAR_2->nr_pages;
 struct kvec VAR_8;

 VAR_2->tailsz = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct page *VAR_9 = VAR_2->pages[VAR_6];

  if (VAR_3 >= VAR_0) {

   VAR_8.iov_base = FUNC_2(VAR_9);
   VAR_8.iov_len = VAR_0;
   FUNC_0(1, "%u: iov_base=%p iov_len=%zu",
    VAR_6, VAR_8.iov_base, VAR_8.iov_len);
   VAR_3 -= VAR_0;
  } else if (VAR_3 > 0) {

   VAR_8.iov_base = FUNC_2(VAR_9);
   VAR_8.iov_len = VAR_3;
   FUNC_0(1, "%u: iov_base=%p iov_len=%zu",
    VAR_6, VAR_8.iov_base, VAR_8.iov_len);
   FUNC_4(VAR_8.iov_base + VAR_3, '\0', VAR_0 - VAR_3);
   VAR_2->tailsz = VAR_3;
   VAR_3 = 0;
  } else {

   VAR_2->pages[VAR_6] = ((void*)0);
   VAR_2->nr_pages--;
   FUNC_5(VAR_9);
   continue;
  }

  VAR_5 = FUNC_1(VAR_1, &VAR_8, 1, VAR_8.iov_len);
  FUNC_3(VAR_9);
  if (VAR_5 < 0)
   break;

  VAR_4 += VAR_5;
 }

 return VAR_4 > 0 ? VAR_4 : VAR_5;
}

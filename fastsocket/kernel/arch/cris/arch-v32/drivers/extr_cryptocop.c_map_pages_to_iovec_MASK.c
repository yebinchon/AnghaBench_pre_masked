
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iovec {unsigned char* iov_base; int iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct iovec *VAR_1, int VAR_2, int *VAR_3, struct page **VAR_4, int VAR_5, int *VAR_6, int *VAR_7, int VAR_8 )
{
 int VAR_9;

 FUNC_2(VAR_1 != ((void*)0));
 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(VAR_4 != ((void*)0));
 FUNC_2(VAR_6 != ((void*)0));
 FUNC_2(VAR_7 != ((void*)0));

 FUNC_0(FUNC_4("map_pages_to_iovec, map_length=%d, iovlen=%d, *iovix=%d, nopages=%d, *pageix=%d, *pageoffset=%d\n", VAR_8, VAR_2, *VAR_3, VAR_5, *VAR_6, *VAR_7));

 while (VAR_8 > 0){
  FUNC_0(FUNC_4("map_pages_to_iovec, map_length=%d, iovlen=%d, *iovix=%d, nopages=%d, *pageix=%d, *pageoffset=%d\n", VAR_8, VAR_2, *VAR_3, VAR_5, *VAR_6, *VAR_7));
  if (*VAR_3 >= VAR_2){
   FUNC_1(FUNC_4("map_page_to_iovec: *iovix=%d >= iovlen=%d\n", *VAR_3, VAR_2));
   return 0;
  }
  if (*VAR_6 >= VAR_5){
   FUNC_1(FUNC_4("map_page_to_iovec: *pageix=%d >= nopages=%d\n", *VAR_6, VAR_5));
   return 0;
  }
  VAR_1[*VAR_3].iov_base = (unsigned char*)FUNC_3(VAR_4[*VAR_6]) + *VAR_7;
  VAR_9 = VAR_0 - *VAR_7;
  if (VAR_9 < VAR_8){
   (*VAR_7) = 0;
   (*VAR_6)++;
  } else {
   VAR_9 = VAR_8;
   (*VAR_7) += VAR_8;
  }
  FUNC_0(FUNC_4("mapping %d bytes from page %d (or %d) to iovec %d\n", VAR_9, *VAR_6, *VAR_6-1, *VAR_3));
  VAR_1[*VAR_3].iov_len = VAR_9;
  VAR_8 -= VAR_9;
  (*VAR_3)++;
 }
 FUNC_0(FUNC_4("map_page_to_iovec, exit, *iovix=%d\n", *VAR_3));
 return -1;
}

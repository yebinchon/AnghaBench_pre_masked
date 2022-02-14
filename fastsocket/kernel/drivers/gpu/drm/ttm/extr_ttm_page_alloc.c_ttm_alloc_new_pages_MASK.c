
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct list_head*,int,int,struct page**,unsigned int) ;
 int FUNC_8 (struct page**,int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct list_head *VAR_3, gfp_t VAR_4,
  int VAR_5, enum ttm_caching_state VAR_6, unsigned VAR_7)
{
 struct page **VAR_8;
 struct page *VAR_9;
 int VAR_10 = 0;
 unsigned VAR_11, VAR_12;
 unsigned VAR_13 = FUNC_5(VAR_7,
   (unsigned)(VAR_2/sizeof(struct page *)));


 VAR_8 = FUNC_3(VAR_13*sizeof(struct page *), VAR_1);

 if (!VAR_8) {
  FUNC_6("Unable to allocate table for new pages\n");
  return -VAR_0;
 }

 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_7; ++VAR_11) {
  VAR_9 = FUNC_1(VAR_4);

  if (!VAR_9) {
   FUNC_6("Unable to get page %u\n", VAR_11);



   if (VAR_12) {
    VAR_10 = FUNC_8(VAR_8,
         VAR_6, VAR_12);
    if (VAR_10)
     FUNC_7(VAR_3,
      VAR_5, VAR_6,
      VAR_8, VAR_12);
   }
   VAR_10 = -VAR_0;
   goto out;
  }







  {
   VAR_8[VAR_12++] = VAR_9;
   if (VAR_12 == VAR_13) {

    VAR_10 = FUNC_8(VAR_8,
      VAR_6, VAR_12);
    if (VAR_10) {
     FUNC_7(VAR_3,
      VAR_5, VAR_6,
      VAR_8, VAR_12);
     goto out;
    }
    VAR_12 = 0;
   }
  }

  FUNC_4(&VAR_9->lru, VAR_3);
 }

 if (VAR_12) {
  VAR_10 = FUNC_8(VAR_8, VAR_6, VAR_12);
  if (VAR_10)
   FUNC_7(VAR_3,
     VAR_5, VAR_6,
     VAR_8, VAR_12);
 }
out:
 FUNC_2(VAR_8);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_pool {int nchunks_added; int add_chunk_mutex; int pool; int status; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct page*) ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 struct page* FUNC_2 (int,int,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (unsigned long,scalar_t__) ;
 int FUNC_8 (int ,unsigned long,int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,struct uncached_pool*,int) ;
 int FUNC_19 (unsigned long,int) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_20(struct uncached_pool *VAR_16, int VAR_17)
{
 struct page *VAR_18;
 int VAR_19, VAR_20, VAR_21 = VAR_16->nchunks_added;
 unsigned long VAR_22, VAR_23;

 if (FUNC_13(&VAR_16->add_chunk_mutex) != 0)
  return -1;

 if (VAR_16->nchunks_added > VAR_21) {

  FUNC_14(&VAR_16->add_chunk_mutex);
  return 0;
 }

 if (VAR_16->nchunks_added >= VAR_4) {
  FUNC_14(&VAR_16->add_chunk_mutex);
  return -1;
 }



 VAR_18 = FUNC_2(VAR_17,
    VAR_0 | VAR_12 | VAR_1,
    VAR_2-VAR_6);
 if (!VAR_18) {
  FUNC_14(&VAR_16->add_chunk_mutex);
  return -1;
 }



 VAR_22 = (unsigned long)FUNC_15(VAR_18);
 VAR_23 = VAR_22 - VAR_5 + VAR_13;






 for (VAR_20 = 0; VAR_20 < (VAR_3 / VAR_7); VAR_20++)
  FUNC_1(&VAR_18[VAR_20]);

 FUNC_6(VAR_23, VAR_23 + VAR_3);

 VAR_19 = FUNC_10(VAR_11);
 if (VAR_19 == VAR_10) {
  FUNC_4(&VAR_16->status, 0);
  VAR_19 = FUNC_18(VAR_15, VAR_16, 1);
  if (VAR_19 || FUNC_3(&VAR_16->status))
   goto failed;
 } else if (VAR_19 != VAR_9)
  goto failed;

 FUNC_16();

 if (FUNC_11("sn2"))
  FUNC_19(VAR_23, VAR_3);
 else
  FUNC_5(VAR_23, VAR_23 + VAR_3);


 FUNC_12();

 FUNC_17();

 VAR_19 = FUNC_9();
 if (VAR_19 != VAR_8)
  goto failed;
 FUNC_4(&VAR_16->status, 0);
 VAR_19 = FUNC_18(VAR_14, VAR_16, 1);
 if (VAR_19 || FUNC_3(&VAR_16->status))
  goto failed;





 VAR_19 = FUNC_8(VAR_16->pool, VAR_23, VAR_3, VAR_17);
 if (VAR_19)
  goto failed;

 VAR_16->nchunks_added++;
 FUNC_14(&VAR_16->add_chunk_mutex);
 return 0;


failed:
 for (VAR_20 = 0; VAR_20 < (VAR_3 / VAR_7); VAR_20++)
  FUNC_0(&VAR_18[VAR_20]);

 FUNC_7(VAR_22, VAR_2-VAR_6);
 FUNC_14(&VAR_16->add_chunk_mutex);
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
typedef enum xfer_buf_dir { ____Placeholder_xfer_buf_dir } xfer_buf_dir ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 struct scatterlist* FUNC_4 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 struct page* FUNC_6 (struct scatterlist*) ;

unsigned int FUNC_7(unsigned char *VAR_3,
 unsigned int VAR_4, struct scsi_cmnd *VAR_5, struct scatterlist **VAR_6,
 unsigned int *VAR_7, enum xfer_buf_dir VAR_8)
{
 unsigned int VAR_9;
 struct scatterlist *VAR_10 = *VAR_6;
 if (!VAR_10)
  VAR_10 = FUNC_4(VAR_5);






 VAR_9 = 0;
 while (VAR_9 < VAR_4 && VAR_10) {
  struct page *VAR_11 = FUNC_6(VAR_10) +
    ((VAR_10->offset + *VAR_7) >> VAR_0);
  unsigned int VAR_12 = (VAR_10->offset + *VAR_7) & (VAR_1-1);
  unsigned int VAR_13 = VAR_10->length - *VAR_7;

  if (VAR_13 > VAR_4 - VAR_9) {


   VAR_13 = VAR_4 - VAR_9;
   *VAR_7 += VAR_13;
  } else {


   *VAR_7 = 0;
   VAR_10 = FUNC_5(VAR_10);
  }




  while (VAR_13 > 0) {
   unsigned int VAR_14 = FUNC_3(VAR_13, (unsigned int)
     VAR_1 - VAR_12);
   unsigned char *VAR_15 = FUNC_0(VAR_11);

   if (VAR_8 == VAR_2)
    FUNC_2(VAR_15 + VAR_12, VAR_3 + VAR_9, VAR_14);
   else
    FUNC_2(VAR_3 + VAR_9, VAR_15 + VAR_12, VAR_14);
   FUNC_1(VAR_11);


   VAR_12 = 0;
   ++VAR_11;
   VAR_9 += VAR_14;
   VAR_13 -= VAR_14;
  }
 }
 *VAR_6 = VAR_10;


 return VAR_9;
}

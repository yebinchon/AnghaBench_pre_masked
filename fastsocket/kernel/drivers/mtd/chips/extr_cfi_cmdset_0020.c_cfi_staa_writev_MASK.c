
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* write ) (struct mtd_info*,size_t,size_t,size_t*,char*) ;} ;
struct kvec {size_t iov_len; void* iov_base; } ;
typedef size_t loff_t ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t,int ) ;
 int FUNC_4 (char*,void*,size_t) ;
 int FUNC_5 (char*,int,size_t) ;
 int FUNC_6 (struct mtd_info*,size_t,size_t,size_t*,char*) ;
 int FUNC_7 (struct mtd_info*,size_t,size_t,size_t*,void*) ;
 int FUNC_8 (struct mtd_info*,size_t,size_t,size_t*,char*) ;

__attribute__((used)) static int
FUNC_9(struct mtd_info *VAR_4, const struct kvec *VAR_5,
  unsigned long VAR_6, loff_t VAR_7, size_t *VAR_8)
{
 unsigned long VAR_9;
 size_t VAR_10 = 0, VAR_11;
 int VAR_12 = 0;
 size_t VAR_13 = 0;
 static char *VAR_14;

 if (!VAR_0) {



  return -VAR_1;
 }
 VAR_14 = FUNC_3(VAR_0, VAR_3);
 if (!VAR_14)
  return -VAR_2;

 for (VAR_9=0; VAR_9<VAR_6; VAR_9++) {
  size_t VAR_15 = VAR_5[VAR_9].iov_len;
  void *VAR_16 = VAR_5[VAR_9].iov_base;
  if (!VAR_15)
   continue;
  if (VAR_13) {
   if (VAR_13 + VAR_15 < VAR_0) {
    FUNC_4(VAR_14+VAR_13, VAR_16, VAR_15);
    VAR_13 += VAR_15;
    continue;
   }
   FUNC_4(VAR_14+VAR_13, VAR_16, VAR_0-VAR_13);
   VAR_12 = VAR_4->write(VAR_4, VAR_7, VAR_0, &VAR_11, VAR_14);
   VAR_10 += VAR_11;
   if (VAR_12 || VAR_11 != VAR_0)
    goto write_error;
   VAR_15 -= VAR_11-VAR_13;
   VAR_16 += VAR_11-VAR_13;
   VAR_7 += VAR_0;
  }
  if (FUNC_0(VAR_15)) {
   VAR_12 = VAR_4->write(VAR_4, VAR_7, FUNC_0(VAR_15), &VAR_11, VAR_16);
   VAR_10 += VAR_11;
   if (VAR_12 || VAR_11 != FUNC_0(VAR_15))
    goto write_error;
   VAR_7 += VAR_11;
  }
  VAR_13 = FUNC_1(VAR_15);
  if (VAR_13) {
   FUNC_5(VAR_14, 0xff, VAR_0);
   FUNC_4(VAR_14, VAR_16 + VAR_11, VAR_13);
  }
 }
 if (VAR_13) {

  VAR_12 = VAR_4->write(VAR_4, VAR_7, VAR_13, &VAR_11, VAR_14);
  VAR_10 += VAR_11;
  if (VAR_12 || VAR_11 != VAR_0)
   goto write_error;
 }
write_error:
 if (VAR_8)
  *VAR_8 = VAR_10;
 FUNC_2(VAR_14);
 return VAR_12;
}

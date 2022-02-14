
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct scatterlist {size_t length; size_t offset; } ;
typedef enum km_type { ____Placeholder_km_type } km_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t,void*,size_t) ;
 void* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (char*,void*,size_t) ;
 size_t FUNC_4 (size_t,size_t) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 scalar_t__ FUNC_6 (struct scatterlist*) ;

u32 FUNC_7(void *VAR_3, size_t VAR_4,
        struct scatterlist *VAR_5,
        u32 *VAR_6, size_t *VAR_7,
        enum km_type VAR_8, u32 *VAR_9)
{
 size_t VAR_10 = VAR_4;
 u32 VAR_11 = 0;

 while (VAR_10 > 0 && VAR_5) {
  size_t VAR_12, VAR_13;
  void *VAR_14;

  if (*VAR_7 >= VAR_5->length) {




   if (!(*VAR_6))
    break;
   --(*VAR_6);
   *VAR_7 -= VAR_5->length;
   VAR_5 = FUNC_5(VAR_5);
   continue;
  }
  VAR_13 = FUNC_4(VAR_10, VAR_5->length - *VAR_7);





  VAR_12 = *VAR_7 + VAR_5->offset;
  VAR_13 = FUNC_4(VAR_13,
          (size_t)(VAR_2 - (VAR_12 & ~VAR_0)));
  VAR_14 = FUNC_1(FUNC_6(VAR_5) + (VAR_12 >> VAR_1),
     VAR_8);
  if (VAR_9)
   *VAR_9 = FUNC_0(*VAR_9, VAR_3, VAR_13);
  FUNC_3((char *)VAR_14 + (VAR_12 & ~VAR_0), VAR_3, VAR_13);
  FUNC_2(VAR_14, VAR_8);
  VAR_3 += VAR_13;
  *VAR_7 += VAR_13;
  VAR_10 -= VAR_13;
  VAR_11 += VAR_13;
 }
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio {int bi_end_io; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int FUNC_1 (struct request_queue*,struct bio*,int ,unsigned int,int) ;
 struct bio* FUNC_2 (int ,int const) ;
 int VAR_3 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static struct bio *FUNC_5(struct request_queue *VAR_4, void *VAR_5,
      unsigned int VAR_6, gfp_t VAR_7)
{
 unsigned long VAR_8 = (unsigned long)VAR_5;
 unsigned long VAR_9 = (VAR_8 + VAR_6 + VAR_2 - 1) >> VAR_1;
 unsigned long VAR_10 = VAR_8 >> VAR_1;
 const int VAR_11 = VAR_9 - VAR_10;
 int VAR_12, VAR_13;
 struct bio *VAR_14;

 VAR_14 = FUNC_2(VAR_7, VAR_11);
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_3(VAR_8);
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  unsigned int VAR_15 = VAR_2 - VAR_12;

  if (VAR_6 <= 0)
   break;

  if (VAR_15 > VAR_6)
   VAR_15 = VAR_6;

  if (FUNC_1(VAR_4, VAR_14, FUNC_4(VAR_5), VAR_15,
        VAR_12) < VAR_15)
   break;

  VAR_5 += VAR_15;
  VAR_6 -= VAR_15;
  VAR_12 = 0;
 }

 VAR_14->bi_end_io = VAR_3;
 return VAR_14;
}

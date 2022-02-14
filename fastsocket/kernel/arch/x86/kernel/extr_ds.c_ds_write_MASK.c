
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds_context {int ds; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;
struct TYPE_2__ {unsigned long* sizeof_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned long FUNC_0 (int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ds_context*,int) ;
 int FUNC_2 (int ,int,int ,unsigned long) ;
 int FUNC_3 (void*,void const*,unsigned long) ;
 int FUNC_4 (char*,int ,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ds_context *VAR_6, enum ds_qualifier VAR_7,
      const void *VAR_8, size_t VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_8)
  return -VAR_0;

 while (VAR_9) {
  unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  unsigned long VAR_16, VAR_17;
  VAR_11 = FUNC_0(VAR_6->ds, VAR_7, VAR_2);
  VAR_12 = FUNC_0(VAR_6->ds, VAR_7, VAR_4);
  VAR_13 = FUNC_0(VAR_6->ds, VAR_7, VAR_1);
  VAR_15 = FUNC_0(VAR_6->ds, VAR_7, VAR_5);

  VAR_14 = FUNC_5(VAR_13, VAR_15);





  if (VAR_14 <= VAR_12)
   VAR_14 = VAR_13;

  if (VAR_14 <= VAR_12)
   break;

  VAR_16 = FUNC_5((unsigned long) VAR_9, VAR_14 - VAR_12);
  FUNC_3((void *)VAR_12, VAR_8, VAR_16);

  VAR_8 = (const char *)VAR_8 + VAR_16;
  VAR_9 -= VAR_16;
  VAR_10 += VAR_16;

  VAR_17 = VAR_16 / VAR_3.sizeof_rec[VAR_7];
  VAR_17 *= VAR_3.sizeof_rec[VAR_7];


  FUNC_4((char *)VAR_12 + VAR_16, 0,
         VAR_17 - VAR_16);
  VAR_12 += VAR_17;

  if (VAR_12 >= VAR_13)
   VAR_12 = VAR_11;
  FUNC_2(VAR_6->ds, VAR_7, VAR_4, VAR_12);

  if (VAR_12 >= VAR_15)
   FUNC_1(VAR_6, VAR_7);
 }

 return VAR_10;
}

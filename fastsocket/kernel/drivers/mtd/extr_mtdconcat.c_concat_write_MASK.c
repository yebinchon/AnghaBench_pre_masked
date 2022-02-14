
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int flags; scalar_t__ size; int (* write ) (struct mtd_info*,scalar_t__,size_t,size_t*,int const*) ;} ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,size_t,size_t*,int const*) ;

__attribute__((used)) static int
FUNC_2(struct mtd_info *VAR_3, loff_t VAR_4, size_t VAR_5,
      size_t * VAR_6, const u_char * VAR_7)
{
 struct mtd_concat *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = -VAR_0;
 int VAR_10;

 if (!(VAR_3->flags & VAR_2))
  return -VAR_1;

 *VAR_6 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_subdev; VAR_10++) {
  struct mtd_info *VAR_11 = VAR_8->subdev[VAR_10];
  size_t VAR_12, VAR_13;

  if (VAR_4 >= VAR_11->size) {
   VAR_12 = 0;
   VAR_4 -= VAR_11->size;
   continue;
  }
  if (VAR_4 + VAR_5 > VAR_11->size)
   VAR_12 = VAR_11->size - VAR_4;
  else
   VAR_12 = VAR_5;

  if (!(VAR_11->flags & VAR_2))
   VAR_9 = -VAR_1;
  else
   VAR_9 = VAR_11->write(VAR_11, VAR_4, VAR_12, &VAR_13, VAR_7);

  if (VAR_9)
   break;

  *VAR_6 += VAR_13;
  VAR_5 -= VAR_12;
  if (VAR_5 == 0)
   break;

  VAR_9 = -VAR_0;
  VAR_7 += VAR_12;
  VAR_4 = 0;
 }
 return VAR_9;
}

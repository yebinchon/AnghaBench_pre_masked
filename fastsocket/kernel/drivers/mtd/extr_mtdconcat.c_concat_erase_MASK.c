
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct mtd_info {int flags; scalar_t__ size; } ;
struct mtd_erase_region_info {scalar_t__ offset; int erasesize; } ;
struct TYPE_2__ {scalar_t__ size; int numeraseregions; int erasesize; struct mtd_erase_region_info* eraseregions; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; TYPE_1__ mtd; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; scalar_t__ fail_addr; int (* callback ) (struct erase_info*) ;int state; } ;


 int FUNC_0 (int) ;
 struct mtd_concat* FUNC_1 (struct mtd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mtd_info*,struct erase_info*) ;
 int FUNC_3 (struct erase_info*) ;
 struct erase_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct erase_info*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_6, struct erase_info *VAR_7)
{
 struct mtd_concat *VAR_8 = FUNC_1(VAR_6);
 struct mtd_info *VAR_9;
 int VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13 = 0;
 struct erase_info *VAR_14;

 if (!(VAR_6->flags & VAR_5))
  return -VAR_2;

 if (VAR_7->addr > VAR_8->mtd.size)
  return -VAR_0;

 if (VAR_7->len + VAR_7->addr > VAR_8->mtd.size)
  return -VAR_0;







 if (!VAR_8->mtd.numeraseregions) {

  if (VAR_7->addr & (VAR_8->mtd.erasesize - 1))
   return -VAR_0;
  if (VAR_7->len & (VAR_8->mtd.erasesize - 1))
   return -VAR_0;
 } else {

  struct mtd_erase_region_info *VAR_15 =
      VAR_8->mtd.eraseregions;




  for (VAR_10 = 0; VAR_10 < VAR_8->mtd.numeraseregions &&
       VAR_7->addr >= VAR_15[VAR_10].offset; VAR_10++) ;
  --VAR_10;






  if (VAR_10 < 0 || VAR_7->addr & (VAR_15[VAR_10].erasesize - 1))
   return -VAR_0;




  for (; VAR_10 < VAR_8->mtd.numeraseregions &&
       (VAR_7->addr + VAR_7->len) >= VAR_15[VAR_10].offset;
       ++VAR_10) ;
  --VAR_10;



  if (VAR_10 < 0 || ((VAR_7->addr + VAR_7->len) &
     (VAR_15[VAR_10].erasesize - 1)))
   return -VAR_0;
 }

 VAR_7->fail_addr = VAR_4;


 VAR_14 = FUNC_4(sizeof (struct erase_info), VAR_3);

 if (!VAR_14)
  return -VAR_1;

 *VAR_14 = *VAR_7;
 VAR_12 = VAR_7->len;





 for (VAR_10 = 0; VAR_10 < VAR_8->num_subdev; VAR_10++) {
  VAR_9 = VAR_8->subdev[VAR_10];
  if (VAR_9->size <= VAR_14->addr) {
   VAR_14->addr -= VAR_9->size;
   VAR_13 += VAR_9->size;
  } else {
   break;
  }
 }


 FUNC_0(VAR_10 >= VAR_8->num_subdev);


 VAR_11 = 0;
 for (; VAR_12 > 0; VAR_10++) {

  VAR_9 = VAR_8->subdev[VAR_10];


  if (VAR_14->addr + VAR_12 > VAR_9->size)
   VAR_14->len = VAR_9->size - VAR_14->addr;
  else
   VAR_14->len = VAR_12;

  if (!(VAR_9->flags & VAR_5)) {
   VAR_11 = -VAR_2;
   break;
  }
  VAR_12 -= VAR_14->len;
  if ((VAR_11 = FUNC_2(VAR_9, VAR_14))) {


   FUNC_0(VAR_11 == -VAR_0);
   if (VAR_14->fail_addr != VAR_4)
    VAR_7->fail_addr = VAR_14->fail_addr + VAR_13;
   break;
  }
  VAR_14->addr = 0;
  VAR_13 += VAR_9->size;
 }
 VAR_7->state = VAR_14->state;
 FUNC_3(VAR_14);
 if (VAR_11)
  return VAR_11;

 if (VAR_7->callback)
  VAR_7->callback(VAR_7);
 return 0;
}

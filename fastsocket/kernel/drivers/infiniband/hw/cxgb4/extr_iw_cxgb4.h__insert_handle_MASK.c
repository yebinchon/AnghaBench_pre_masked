
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int dummy; } ;
struct c4iw_dev {int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct idr*,void*,int,int*) ;
 int FUNC_2 (struct idr*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct c4iw_dev *VAR_4, struct idr *VAR_5,
     void *VAR_6, u32 VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 do {
  if (!FUNC_2(VAR_5, VAR_8 ? VAR_3 : VAR_2))
   return -VAR_1;
  if (VAR_8)
   FUNC_3(&VAR_4->lock);
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_10);
  FUNC_0(!VAR_9 && VAR_10 != VAR_7);
  if (VAR_8)
   FUNC_4(&VAR_4->lock);
 } while (VAR_9 == -VAR_0);

 return VAR_9;
}

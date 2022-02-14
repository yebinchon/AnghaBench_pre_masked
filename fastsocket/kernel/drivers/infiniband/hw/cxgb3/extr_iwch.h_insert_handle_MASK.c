
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwch_dev {int lock; } ;
struct idr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct idr*,void*,int,int*) ;
 int FUNC_2 (struct idr*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct iwch_dev *VAR_3, struct idr *VAR_4,
    void *VAR_5, u32 VAR_6)
{
 int VAR_7;
 int VAR_8;

 do {
  if (!FUNC_2(VAR_4, VAR_2)) {
   return -VAR_1;
  }
  FUNC_3(&VAR_3->lock);
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_8);
  FUNC_0(VAR_8 != VAR_6);
  FUNC_4(&VAR_3->lock);
 } while (VAR_7 == -VAR_0);

 return VAR_7;
}

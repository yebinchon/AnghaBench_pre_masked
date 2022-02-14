
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct hdq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (struct hdq_data*,int ) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hdq_data *VAR_6, u32 VAR_7,
  u8 VAR_8, u8 VAR_9, u8 *VAR_10)
{
 int VAR_11 = 0;
 unsigned long VAR_12 = VAR_5 + VAR_4;

 if (VAR_9 == VAR_2) {

  while (((*VAR_10 = FUNC_0(VAR_6, VAR_7)) & VAR_8)
   && FUNC_2(VAR_5, VAR_12)) {
   FUNC_1(1);
  }
  if (*VAR_10 & VAR_8)
   VAR_11 = -VAR_1;
 } else if (VAR_9 == VAR_3) {

  while (!((*VAR_10 = FUNC_0(VAR_6, VAR_7)) & VAR_8)
   && FUNC_2(VAR_5, VAR_12)) {
   FUNC_1(1);
  }
  if (!(*VAR_10 & VAR_8))
   VAR_11 = -VAR_1;
 } else
  return -VAR_0;

 return VAR_11;
}

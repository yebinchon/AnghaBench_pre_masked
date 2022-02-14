
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct mx3fb_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mx3fb_data*,int ) ;
 int FUNC_1 (struct mx3fb_data*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mx3fb_data *VAR_3, bool VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_3->lock, VAR_7);

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_3, VAR_2) & 0x00FFFFFFL;
  FUNC_1(VAR_3, VAR_6 | ((uint32_t) VAR_5 << 24), VAR_2);

  VAR_6 = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_6 | VAR_1, VAR_0);
 } else {
  VAR_6 = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_6 & ~VAR_1, VAR_0);
 }

 FUNC_3(&VAR_3->lock, VAR_7);

 return 0;
}

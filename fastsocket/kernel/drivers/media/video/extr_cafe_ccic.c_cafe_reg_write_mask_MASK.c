
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cafe_camera {int dummy; } ;


 unsigned int FUNC_0 (struct cafe_camera*,unsigned int) ;
 int FUNC_1 (struct cafe_camera*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct cafe_camera *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_4 = (VAR_4 & ~VAR_3) | (VAR_2 & VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
